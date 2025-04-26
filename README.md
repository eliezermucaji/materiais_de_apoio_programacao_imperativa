# materiais_de_apoio_programacao_imperativa
Neste repositório estão indexados os documentos necessário ou materiais de apoio para o o projecto, nomeadamente: Pilha, Fila.

No arquivo Pilha.h estão todas as funções necessárias e aplicáveis sobre estruturas desse tipo:

//Prototipos de funcoes
void initPilha(Pilha *P); --> Inicializa um pilha;
int vaziaPilha(Pilha *P); --> Verifica se a pilha está vazia;
int push(Pilha *P, Token tk); --> Adiciona um token à pilha;
int pop(Pilha *P); --> Remove o elemento do topo da pilha;
Token top(Pilha *P) --> Retorna o elemento do topo.


No arquivo Fila.h estão todas as funções necessárias e aplicáveis sobre estruturas desse tipo:

//Prototipos de funcoes
void initFilha(Fila *L); --> Inicializa um fila;
int vaziaFila(Filha *L); --> Verifica se a fila está vazia;
int inserir(Fila *L, Token tk); --> Adiciona um token à fila;
int remover(Fila *L); --> Remove o elemento do topo da fila;
Token frente(Fila *L) --> Retorna o elemento do topo.