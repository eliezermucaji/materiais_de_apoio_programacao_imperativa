#include "inclib_dst.h"

int s_size(const char *str) {
  int i = 0;
  while(*str) {
    if(!isspace(*str)) i++;
    str++;
  }
  return i;
}

int isdelim(const char *str, const char c) {
  return strchr("()", c);
}

Token *nextToken(const char *str) {
  int size = s_size(str);
  Token *tokens = (Token*)malloc((size + 1)*sizeof(Token));
  int pos = 0;
  while(*str) {
    Token tk;
    if(!isspace(*str)) {
      if(isdigit(*str)) {
        tk.type = NUMERO;
        tk.value = *str;
        tokens[pos] = tk;
      }else if(strchr("^*/+-", *str)) {
        tk.type = OPERADOR;
        tk.value = *str;
        switch (*str)
        {
        case '^':
          tk.peso = 4;
          break;
        case '*': 
          tk.peso = 3;
          break;
        case '/': 
          tk.peso = 3;
          break;
        case '+': 
          tk.peso = 2;
          break;
        case '-':
          tk.peso = 2;
          break;
        }
        tokens[pos] = tk;
      }else if(isdelim("()", *str)) {
        tk.type = PARENTESES;
        switch (*str)
        {
        case '(':
          tk.value = *str;
          break;
        case ')':
          tk.value = *str;
          break;
        }
        tokens[pos] = tk;
      }else {
        printf("Expressao invalida.\n");
        exit(-1);
      }
      pos++;
    }
    str++;
  }
  return tokens;
}

int main() {
  /*Pilha P;
  Fila F;
  initFila(&F);
  initPilha(&P);
  Token tk;
  int n = 5;

  while(n--) {
    scanf("%s", tk.value);
    push(&P, tk);
    inserir(&F, tk);
  }

  puts("Abaixo estao os tokens desempilhado!");
  while(!vaziaPilha(&P)) {
    printf("%s ", top(&P).value);
    pop(&P);
  }
  puts("");
  while(!vaziaFila(&F)) {
    printf("%s ", frente(&F).value);
    remover(&F);
  }*/
  char expr[] = "2 +2 * ( 4 - 9 ) ";
  Token *tokens = nextToken(expr);
  int i;
  for(i = 0; i < s_size(expr); i++) {
    switch (tokens[i].type)
    {
    case NUMERO:
      printf("TOKEN: NUMERO, VALUE: %c\n", tokens[i].value);
      break;
    case PARENTESES:
      printf("TOKEN: PARENTESES, VALUE: %c\n", tokens[i].value);
      break;
    case OPERADOR:
      printf("TOKEN: OPERADOR, VALUE: %c\n", tokens[i].value);
      break;
    }
  }
  return 0;
}
