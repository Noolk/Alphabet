#include <iostream>
#include <string.h>

struct words
{
     char word[10]; 
};

int main()
{
   setlocale(LC_ALL, "RUS");
   int n = 0;
   FILE *bf1;
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
}


