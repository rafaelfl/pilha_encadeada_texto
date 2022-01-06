#include <stdio.h>
#include <stdlib.h>
#include "PilhaTexto.h"

PilhaTexto * criar_pilha() {
  PilhaTexto *p = malloc(sizeof(PilhaTexto));

  // se acabou a memória...
  if (p == NULL) {
    return NULL;
  }

  p->topo = NULL;
  return p;
}

void destruir_pilha(PilhaTexto *p) {
  No *atual, *prox;

  atual = p->topo;

  // enquanto eu não chegar na base da pilha
  while (atual != NULL) {
    prox = atual->prox;
    free(atual);
    atual = prox;
  }

  free(p);
}

int empilhar (PilhaTexto *p, char *texto) {
  No *novo_no = malloc(sizeof(No));

  if (novo_no == NULL) {
    return -1;
  }

  novo_no->texto = texto;

  novo_no->prox = p->topo;
  p->topo = novo_no;
  return 0;
}

char * desempilhar(PilhaTexto *p) {
  // se a pilha está vazia...
  if (p->topo == NULL) {
    return NULL;
  }

  No *atual, *prox;
  char *resultado;

  atual = p->topo;
  prox = atual->prox;

  p->topo = prox;

  resultado = atual->texto;
  free(atual);

  return resultado;
}

char * topo(PilhaTexto *p) {
  // se a pilha está vazia...
  if (p->topo == NULL) {
    return NULL;
  }

  return p->topo->texto;
}

int esta_vazia(PilhaTexto *p) {
  if (p->topo == NULL) {
    return TRUE;
  } else {
    return FALSE;
  }
}

void imprimir_pilha(PilhaTexto *p) {
  No *atual = p->topo;

  printf("topo . ");

  while (atual != NULL) {
    printf(" (%s) ", atual->texto);

    atual = atual->prox;
  }

  printf(" ] base\n");
}