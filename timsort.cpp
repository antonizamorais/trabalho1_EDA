/*  QUESTÃO DE PONTO EXTRA

Questão: implementa uma versão híbridas do algoritmos Merge Sort que utiliza
o insertion sort para ordenar subarrays com um pequeno número de elementos.
 	
Solução: Foi implementado em C o algoritmo O Tim Sort. Ele foi inventado pelo Tim
Peters em 2002. O algoritmo utiliza o Merge Sort, e quando o tamanho de uma sublista é menor que 64, 
então o algoritmo utiliza o Insertion Sort, pois esse é melhor para ordenar um número pequeno de elementos 
(PETERS,2002). A complexidade do Tim Sort no melhor caso é O(n), no caso médio e pior caso é 
O(nlog n) (KORNIICHUK, 2013). 

O mecanismo do algoritmo pode ser explicado brevemente da seguinte maneira:

1. Um algoritmo específico é usado para dividir o vetor de entrada em sub-vetores.
2. Cada sub-vetor é ordenado usando um simples InsertionSort estável.
3. Os sub-vetores ordenados são mesclados com o uso do MergeSort.
 	
*/
 
#include<bits/stdc++.h> 
#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

using namespace std; 
const int RUN = 32; 

void insertionSortH(int arr[], int left, int right) 
{ 
	for (int j = left + 1; j <= right; j++) 
	{ 
		int key = arr[j]; 
		int i = j - 1; 
		while (arr[i] > key && i >= left) 
		{ 
			arr[i+1] = arr[i]; 
			i--; 
		} 
		arr[i+1] = key; 
	} 
} 

void mergeH(int arr[], int l, int m, int r) 
{ 
	// vetor original é quebrada em duas partes, array esquerdo (len1) e direito (len2) 
	int len1 = m - l + 1, len2 = r - m; 
	int left[len1], right[len2]; 
	for (int i = 0; i < len1; i++) 
		left[i] = arr[l + i]; 
	for (int i = 0; i < len2; i++) 
		right[i] = arr[m + 1 + i]; 

	int i = 0; 
	int j = 0; 
	int k = l; 

	// depois de comparar, mesclamos esses dois array
	// em maior sub-array
	while (i < len1 && j < len2) 
	{ 
		if (left[i] <= right[j]) 
		{ 
			arr[k] = left[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = right[j]; 
			j++; 
		} 
		k++; 
	} 

	// copiar os restantes elementos da esquerda, se houver
	while (i < len1) 
	{ 
		arr[k] = left[i]; 
		k++; 
		i++; 
	} 

	// copiar o elemento restante da direita, se houver
	while (j < len2) 
	{ 
		arr[k] = right[j]; 
		k++; 
		j++; 
	} 


} 

void timSort(int arr[], int n) 
{ 
	// Ordenar utilizando insertion subarranjos individuais até o tamanho RUN
	for (int i = 0; i < n; i+=RUN) 
		insertionSortH(arr, i, min((i+31), (n-1))); 

	// comece a fundir a partir do tamanho RUN (ou 32). Ele vai se fundir
	// para formar tamanho, 128, 256 e assim por diante .... 
	for (int size = RUN; size < n; size = 2*size) 
	{ 
		// escolhe o ponto inicial do array da esquerda
		// mesclar arr [left..left + size-1]
		// e arr [left + size, left + 2 * size-1]
		// Depois de cada mesclagem, aumentamos o tamanho de 2 *
		for (int left = 0; left < n; left += 2*size) 
		{ 
			// encontra o ponto final do array da esquerda
			// mid + 1 é o ponto inicial do vetor da direita
			int mid = min((left + size - 1), (n - 1)); 
			int right = min((left + 2*size - 1), (n-1)); 
			// merge sub array arr [esquerda ..... mid] &
			// arr [mid + 1 .... right]
			mergeH(arr, left, mid, right); 
			
		} 
	} 
} 


