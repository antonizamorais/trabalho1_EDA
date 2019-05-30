#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

// função para trocar dois elementos 
void swap(int* a, int* b) 
{ 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

/* Esta função leva último elemento como pivô, lugares
o elemento pivô em sua posição correta na ordem
array, e coloca todos os menores (menores que pivot)
para a esquerda do pivô e todos os elementos maiores 
para a direita do pivô */
int partition (int arr[], int p, int r) 
{ 
	int x = arr[r]; // pivô
	int i = (p - 1); //Índice do menor elemento 
	int j;

	for (j = p; j <= r- 1; j++) 
	{ 
		// Se o elemento atual for menor ou
		// igual a pivô
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
