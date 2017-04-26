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
   printf ("Введите количество записей: ");
   scanf("%d", &n);
   struct words A[n];
}


