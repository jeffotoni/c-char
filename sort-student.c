/*
* C
* @project     Exemplo
* @package     main
* @author      @jeffotoni
* @size        30/10/2017
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct  Alunos {

	int matricula;
	char nome[40];

};


void insertSort(struct Alunos *alunos, int size)
{
   int i, j;

   struct Alunos aux;

   for(i=1; i<size; i++)
   {

      aux = alunos[i];

      for(j=i; (j>0) && (aux.matricula < alunos[j-1].matricula); j-- )
      {
         alunos[j] = alunos[j - 1];
      }

      alunos[j] = aux;
   }
}

int main(){
	
	int size = 2;

	// defindo vetor 6 alunos
	struct Alunos alunos[size];

	for(int count = 0 ; count < size; count++)
    {
        fflush(stdin);

        printf("\nNome do aluno %d: ", count+1);
        scanf("%s",alunos[count].nome);

        printf("\nMatricula: ");
        scanf("%d", &alunos[count].matricula);
    }

    insertSort(alunos, size);


    for(int count = 0 ; count < size ; count++)
    {	
    	
    	printf("\nMatricula: %.2d\n", alunos[count].matricula);

        // printf("\nAluno %d\n", count+1);
        printf("Nome: %s\n",alunos[count].nome);
        
    }

	exit(0);
}
