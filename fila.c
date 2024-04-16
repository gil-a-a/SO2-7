#include <stdlib.h>
#include <stdbool.h>

struct node{
	int id;
	struct node *next;
};

struct fila{
	int tam;
	struct node *head;
};

struct node* aloca_elemento(int aux)
{
	struct node* a = malloc(sizeof(struct node));
	a->id = aux++;
	a->next = NULL;
	return a;
}

struct node* cria_fila()
{
	struct node* f = malloc(sizeof(struct fila));
	f->tam = 0;
	f->head = NULL;
	return f;
}

void printa_fila(struct node* f)
{
	if (f == NULL)
		return;
	
	printf("[%d]->", f->id);
	printa_fila(f->next);
}

bool vazia(struct fila* f)
{
	if (f == NULL || f->head == NULL)
		return true;
	else return false;
}

void insere(struct fila* f, int id)
{
	if (vazia(f))
		return;
	struct node *aux = aloca_elemento(id++);
	aux->next = f->head;
	f->head = aux;
	(f->tam)++;
}

void remove(struct fila* f)
{
	if (vazia(f))
		return;
	if (f->tam < 2){
		free(f->head);
		f->head = NULL;
		(f->tam)--;
	}
	
	struct node *aux = f->head;
	while(aux->next->next != NULL)
		aux = aux->next;
	free(aux->next);
	aux->next = NULL;
}

void limpa(struct node *n)
{
	if (n == NULL)
		return;
	limpa(n->next);
	free(n);
	n = NULL;
}

void limpa_fila(struct fila* f)
{
	if (vazia(f))
		return;
	limpa(f->head);
}
