#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

// fun��o para trocar dois elementos 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* Esta fun��o leva �ltimo elemento como piv�, lugares
o elemento piv� em sua posi��o correta na ordem
array, e coloca todos os menores (menores que pivot)
para a esquerda do piv� e todos os elementos maiores 
para a direita do piv� */
int partition (int arr[], int p, int r) 
{ 
	int x = arr[r]; // piv�
	int i = (p - 1); //�ndice do menor elemento 
	int j;

	for (j = p; j <= r- 1; j++) 
	{ 
		// Se o elemento atual for menor ou
		// igual a piv�
		if (arr[j] <= x) 
		{ 
			i++; 
			swap(&arr[i], &arr[j]); 
		} 
	} 
	swap(&arr[i + 1], &arr[r]); 
	return (i + 1); 
} 

void quickSort(int arr[], int p, int r) 
{ 
	if (p < r) 
	{ 
		int q = partition(arr, p, r); 
		quickSort(arr, p, q - 1); 
		quickSort(arr, q + 1, r); 
	} 
} 
