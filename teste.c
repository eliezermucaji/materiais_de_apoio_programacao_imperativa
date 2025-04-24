#include "inclib_dst.h"

int main() {
  Pilha P;
  initPilha(&P);
  Token tk;
  tk.type = NUMERO;
  strcpy(tk.value, "283");
  push(&P, tk);
  tk.type = PARENTESES;
  strcpy(tk.value, "(");
  push(&P, tk);
  if(!vaziaPilha(&P))
  printf("%s\n", top(&P).value);
  else puts("Vazia");
  return 1;
}