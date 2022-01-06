#include <stdio.h>
#include "PilhaTexto.h"

int main(void) {
  PilhaTexto *p = criar_pilha();

  empilhar(p, "WandaVision");
  empilhar(p, "Falcão e o Soldado Invernal");
  empilhar(p, "Viúva Negra");
  empilhar(p, "Loki");
  empilhar(p, "Homem Aranha 3");
  empilhar(p, "Doutor Estranho 2");

  imprimir_pilha(p);

  desempilhar(p);
  desempilhar(p);
  desempilhar(p);

  imprimir_pilha(p);

  printf("Elemento do topo: %s\n", topo(p));

  desempilhar(p);
  desempilhar(p);
  desempilhar(p);
  desempilhar(p);

  printf("Pilha está vazia? %d\n", esta_vazia(p));

  destruir_pilha(p);
  return 0;
}