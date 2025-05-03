
typedef struct node {
  int valor;
  struct node *prox;
}Node;

typedef struct {
  Node *cabeca;
}Pilha_int;

//Funcoes basicas
void initPilhaInt(Pilha_int *P) {
  P->cabeca = NULL;
}

int vaziaPilhaInt(Pilha_int *P) {
  return P->cabeca == NULL;
}

Node *getNOPilhaInt(int n) {
  Node *ptr = (Node*)malloc(sizeof(Node));
  if(ptr == NULL) {
    perror("Erro de alocacao de memoria.\n");
    exit(-1);
  }
  ptr->valor = n;
  ptr->prox = NULL;

  return ptr;
}

//Funcoes de manipulacao de dados
int push_int(Pilha_int *P, int n) {
  Node *ptr = getNOPilhaInt(n);
  if(ptr == NULL) return 0;
  if(vaziaPilhaInt(P)) {
    P->cabeca = ptr; 
    return 1;
  }
  ptr->prox = P->cabeca;
  P->cabeca = ptr;
  return 1;
}

int pop_int(Pilha_int *P) {
  if(vaziaPilhaInt(P)) return 0;
  Node *ptr = P->cabeca;
  P->cabeca = ptr->prox;
  free(ptr);

  return 1;
}

int top_int(Pilha_int *P) {
  if(vaziaPilhaInt(P)) return INT_MAX;

  return P->cabeca->valor;
}