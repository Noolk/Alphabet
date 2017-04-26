#include <iostream>
#include <string.h>
#include "sort.h"

enum check{
	time_check = 1,
	deposit_check,
	time_deposit_check
};

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
