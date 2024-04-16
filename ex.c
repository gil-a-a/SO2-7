/*
Considere o seguinte problema:
– Uma barbearia tem n barbeiros com suas respectivas cadeiras de barbeiro e m cadeiras para
clientes esperarem por sua vez na sala de espera.
– Quando não há clientes, o barbeiro se senta na cadeira e dorme.
– Quando chega um cliente:
• Se um barbeiro está disponível, ele precisa acordá-lo.
• Se todos os barbeiros estão ocupados, o cliente senta-se em uma das cadeiras na sala de espera e espera sua
vez.
• Se não há cadeiras disponíveis na sala de espera, o cliente vai embora.

• Implemente um programa usando threads, uma fila, uma única mutex e uma única variável
de condição (ou semáforo) para simular este problema.
*/

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include "fila.c"

//variavel global com a fila
struct fila *Clientes;
pthread_mutex_t mutex;
int corte;

//chega cliente
//corta cabelo:
	//trava a mutex
	//tira o cliente da fila
	//destrava
	//corta o cabelo
	//ve se tem mais alguem
		//caso n tenha, dorme
		//senao atende o proximo

int main (int argc, char *argv[])
{
	if (argc != 5){
		printf("Uso: ./[nome_do_programa] [barbeiros] [cadeiras] [corte] [chegada]");
		return 1;
	}
	
	Clientes = cria_fila();	//aloca fila
	pthread_mutex_init (&mutex, NULL);	//inicializa a mutex
	corte = atoi(argv[3]);
	
	int q_barbeiros = atoi(argv[1]);
	pthread_t threads[q_barbeiros];
	
	for (int i  =-e4otu4590 86u )
	{
		
	
	
	
	return 0;
}
