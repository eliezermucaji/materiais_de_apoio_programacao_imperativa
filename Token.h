#define MAX 100
enum typeToken{
  NUMERO,
  PARENTESES,
  OPERADOR
};

typedef struct {
  char value[MAX];
  typeToken type;
}Token;