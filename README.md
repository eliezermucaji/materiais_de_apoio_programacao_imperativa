```markdown
# Projeto de Final de Semestre – Programação Imperativa: Analisador e Avaliador de Expressões Matemáticas

## Descrição do Projeto

Este projeto consiste na implementação de um analisador e avaliador de expressões matemáticas, desenvolvido em C. O objetivo é permitir que o aluno compreenda como as expressões matemáticas são analisadas, interpretadas e avaliadas por um computador. O programa recebe um arquivo de entrada (`in.txt`), processa as expressões matemáticas e gera um arquivo de saída (`out.txt`) contendo os resultados das expressões ou os erros encontrados.

### Objetivo

A proposta do projeto é analisar expressões matemáticas simples, utilizando números de um único dígito, e realizar as operações aritméticas necessárias. O projeto é desenvolvido utilizando conceitos de Programação Imperativa e estruturação modularizada, com foco no uso de estruturas de dados como pilhas e filas.

## Estrutura do Repositório

A estrutura do repositório é organizada da seguinte maneira:

```

.
├── api\_user\_solution/
├── output/
├── dstlib\_include.h
├── Fila.h
├── Pilha.h
├── Pilha\_int.h
├── README.md
└── Token.h

```

- **api_user_solution/**: Pasta destinada para as soluções criadas pelos usuários. Os alunos devem implementar suas soluções aqui, utilizando as bibliotecas fornecidas.
- **output/**: Pasta onde os resultados das expressões serão armazenados. Os arquivos de saída (`out.txt`) serão gerados aqui.
- **dstlib_include.h**: Cabeçalho com funções auxiliares para o projeto.
- **Fila.h**: Cabeçalho com a implementação de fila.
- **Pilha.h**: Cabeçalho com a implementação de pilha.
- **Pilha_int.h**: Cabeçalho com a implementação de pilha para inteiros.
- **README.md**: Este arquivo, que contém informações sobre o projeto.
- **Token.h**: Cabeçalho que define a estrutura de tokens.

## Como Usar

### 1. Estruturas de Dados e Funções

Neste projeto, foram implementadas diversas bibliotecas para a manipulação das expressões matemáticas. Abaixo estão as bibliotecas principais e como utilizá-las:

- **Token.h**: Contém a definição da estrutura `Token`, que é utilizada para representar os tokens das expressões matemáticas. O tipo de token pode ser `NUMERO`, `PARENTESES`, `OPERADOR` ou `NONE`. A estrutura também inclui o campo `peso`, que é utilizado para definir a precedência dos operadores.

- **Fila.h** e **Pilha.h**: Essas bibliotecas implementam a estrutura de dados de fila e pilha, respectivamente, necessárias para o processamento das expressões. A fila é usada para o armazenamento temporário dos operadores, enquanto a pilha é usada para armazenar operandos e operadores durante o processamento.

### 2. Implementação do Programa

O programa principal deve ler um arquivo de entrada chamado `in.txt`, que contém as expressões a serem analisadas. As expressões são processadas uma a uma, e os resultados ou erros encontrados são registrados em um arquivo de saída chamado `out.txt`.

#### Funções Principais:

- **processar_expressao()**: Função que realiza a leitura e o processamento de cada linha do arquivo de entrada. Ela divide as expressões em tokens, valida e executa os cálculos.
  
- **avaliar_expressao()**: Função responsável por avaliar a expressão matemática, utilizando a pilha para armazenar operandos e operadores e realizar as operações necessárias.

- **validar_expressao()**: Função que valida se a expressão está corretamente formatada (sem erros de sintaxe, como divisões por zero, parênteses desbalanceados, etc.).

### 3. Requisitos Funcionais

O programa deve ser capaz de detectar e relatar os seguintes erros:

- **Divisão por zero**
- **Parênteses desbalanceados**
- **Caracteres inválidos** (qualquer símbolo não pertencente ao alfabeto das expressões)
- **Expressão malformada** (ex.: operadores consecutivos, ausência de operandos, etc.)

### 4. Requisitos Não Funcionais

- O código-fonte deve ser modularizado, utilizando funções bem definidas e com comentários explicativos.
- O projeto deve ser entregue com um breve manual de uso e exemplos de entrada/saída.
- Devem ser utilizadas estruturas de dados adequadas, como pilhas, para o processamento das expressões.

### 5. Estrutura de Pastas

O repositório possui a seguinte estrutura de diretórios e arquivos:

```

.
├── api\_user\_solution/
├── output/
├── dstlib\_include.h
├── Fila.h
├── Pilha.h
├── Pilha\_int.h
├── README.md
└── Token.h

````

- **api_user_solution**: Onde você deve colocar as implementações do seu analisador, aproveitando as bibliotecas fornecidas.
- **output**: Arquivo de saída com os resultados das expressões.
- **dstlib_include.h**: Cabeçalho com funções auxiliares.
- **Fila.h**: Implementação da fila.
- **Pilha.h**: Implementação da pilha.
- **Pilha_int.h**: Implementação da pilha de inteiros.
- **README.md**: Este arquivo.
- **Token.h**: Definição de tokens para as expressões matemáticas.

### 6. Como Contribuir

1. Faça o clone do repositório para seu ambiente local:
   ```bash
   git clone https://github.com/eliezermucaji/materiais_de_apoio_programacao_imperativa.git
````

2. Implemente sua solução dentro da pasta `api_user_solution/`.
3. Garanta que seu código esteja modularizado, utilize as funções auxiliares conforme necessário, e escreva um manual de uso e exemplos de entrada/saída.

### 7. Como Compilar e Executar

1. **Compilação**:

   * Utilize um compilador C (como `gcc`) para compilar o código. Por exemplo:

     ```bash
     gcc -o analisador main.c -lm
     ```

2. **Execução**:

   * Após compilar, execute o programa com o arquivo de entrada `in.txt`:

     ```bash
     ./analisador in.txt
     ```

   * O programa irá gerar um arquivo `out.txt` com os resultados das expressões ou erros encontrados.

## Conclusão

Este projeto permite ao aluno compreender e implementar a análise e avaliação de expressões matemáticas em um nível baixo, utilizando programação imperativa. As bibliotecas fornecidas servem como base para a construção de soluções que manipulam expressões matemáticas com diferentes operações e validações.
