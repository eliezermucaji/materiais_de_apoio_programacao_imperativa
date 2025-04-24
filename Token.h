#define MAX 100

enum tokenType{
  NUMERO,
  PARENTESES,
  OPERADOR,
  NONE
};

typedef struct {
  char value[MAX];
  enum tokenType type;
}Token;