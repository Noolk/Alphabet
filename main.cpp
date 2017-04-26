#include <iostream>
#include <string.h>

struct words
{
     char word[10]; 
};

void InsertSort(char A[][10],int n);

int main()
{	
    setlocale(LC_ALL, "RUS");
    FILE *bf1, *bf2;
    int n = 0, i;
    printf ("Введите количество записей: ");
    scanf("%d", &n);
    struct words A[n];
    bf1 = fopen ("source.txt", "w");
    printf ("\nСлова: ");
    for (i = 0; i < n; i++)
     {
       scanf ("%s", A[i].word);
       fwrite (&A[i], sizeof(A), 1, bf1);
     }  
    fclose (bf1);
    printf ("\n");
    bf1 = fopen ("source.txt", "r");
    printf ("Исходные слова: \n\n");
    for (i = 0; i < n; i++)
     {
       fread (&A[i], sizeof(A), 1, bf1);
       if (A[i].word != 0)
       printf ("%s\n", A[i].word);
     }
    char B[n][10];      
    for (i=0;i<n;i++)
    strcpy(B[i],A[i].word);
    printf ("\n");	
    InsertSort(B,n);      
    bf2 = fopen ("sorted.txt", "w");
    for (i = 0; i < n; i++)
     {
       fwrite (&B[i], sizeof(B), 1, bf2);
     }
    fclose(bf2);
    bf2 = fopen ("sorted.txt", "r");
    printf ("Отсортированные слова: \n\n");
    for (i = 0; i < n; i++)
     {
       fread (&A[i], sizeof(A), 1, bf2);
       if (A[i].word != 0)
       printf ("%s\n", A[i].word);
     }
    fclose(bf2);     
}
		
void InsertSort(char A[][10], int n) 
{
	int j, i; char t[10];
	for (i = 1; i < n; i++) 
	 {
	  strcpy(t,A[i]);
	  j = i - 1;
	  while ((j >= 0) && (strcmp(t,A[j])<0)) 
	   {
	     strcpy(A[j+1],A[j]);
	     j = j - 1;				
	   }
	strcpy(A[j+1],t);	
	 }
}
	
	
	
	
