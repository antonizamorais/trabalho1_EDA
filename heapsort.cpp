#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

using namespace std; 

void heapify(int arr[], int n, int i) 
{ 
	int largest = i;
	int l = 2*i ; // left
	int r = 2*i + 1; // right 

	// Se o filho da esquerda for maior que a raiz
	if (l < n && arr[l] > arr[largest]) 
		largest = l; 

	// Se o filho da direita é maior que a maior até agora 
	if (r < n && arr[r] > arr[largest]) 
		largest = r; 

	// Se o maior não for a raiz
	if (largest != i) 
	{ 
		swap(arr[i], arr[largest]); 
		heapify(arr, n, largest); 
	} 
} 
 
void heapSort(int arr[], int n) 
{ 
	// Build heap 
	for (int i = n / 2 - 1; i >= 0; i--) 
		heapify(arr, n, i); 

	// Um por um, extrair um elemento do heap
	for (int i=n-1; i>=0; i--) 
	{ 
		// Mova a raiz atual para o final
		swap(arr[0], arr[i]); 
		heapify(arr, i, 0); 
	} 
} 
