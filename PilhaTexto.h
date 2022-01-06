
#define TRUE 1
#define FALSE 0

typedef struct _no {
  char *texto;
  struct _no *prox;
} No;

typedef struct _pilha_texto {
  No * topo;
} PilhaTexto;

PilhaTexto * criar_pilha();
void destruir_pilha(PilhaTexto *p);
int empilhar (PilhaTexto *p, char *texto);
char * desempilhar(PilhaTexto *p);
char * topo(PilhaTexto *p);
int esta_vazia(PilhaTexto *p);
void imprimir_pilha(PilhaTexto *p);
