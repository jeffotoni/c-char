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

//Struc Student
struct  Student {

	int registry;
	char name[40];

};

// ordered by student record 
void insertSortregistry(struct Student *pupil, int size)
{
   int i, j;

   struct Student aux;

   for(i = 1; i < size; i++)
   {

      aux = pupil[i];

      for(j=i; (j>0) && (aux.registry < pupil[j-1].registry); j-- )
      {
         pupil[j] = pupil[j - 1];
      }

      pupil[j] = aux;
   }
}

// ordered by student name
void insertSortname(struct Student *pupil, int size)
{
   int i, j;

   struct Student aux;

   for(i = 1; i < size; i++)
   {

      aux = pupil[i];

      for(j=i; (j>0) && (strcmp(aux.name, pupil[j-1].name) < 0); j-- )
      {
         pupil[j] = pupil[j - 1];
      }

      pupil[j] = aux;
   }
}

// start main
int main(){
	
	int size = 2;

	// defindo vetor 6 pupil
	struct Student pupil[size];

	for(int count = 0 ; count < size; count++)
    {
        fflush(stdin);

        printf("\nStudent's name %d: ", count+1);
        scanf("%s",pupil[count].name);

        printf("\nStudent record : ");
        scanf("%d", &pupil[count].registry);
    }

    insertSortregistry(pupil, size);

    printf("\n################ listing order by enrollment ##################\n");
    for(int count = 0 ; count < size ; count++)
    {	
    	
    	printf("\nregistry: %.2d\n", pupil[count].registry);

        // printf("\nAluno %d\n", count+1);
        printf("name: %s\n",pupil[count].name);
        
    }

    insertSortname(pupil, size);

    printf("\n################## listing order by name ####################\n");

    for(int count = 0 ; count < size ; count++)
    { 
      
      printf("\nStudent record : %.2d\n", pupil[count].registry);

        // printf("\nAluno %d\n", count+1);
        printf("Student's name: %s\n",pupil[count].name);
        
    }

	exit(0);
}
