/* programa C++ para merge sort */

// baseia-se em junções sucessivas (merge) de 2 sequências ordenadas em uma única sequência ordenada
// Aplica um método “dividir para conquistar”
// – divide o vetor em 2 segmentos (sub-vetores) 
// – ordena recursivamente cada sub-vetor (dividindo novamente, quando possível)
// – faz o merge dos 2 sub-vetores ordenados para obter o vetor ordenado completo


#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

void merge(int arr[], int p, int q, int r) 
{ 
	
	int i, j, k;
	int n1 = q - p + 1; // tamanho do primeiro subarranjo
	int n2 = r - q;  // tamanho do segundo subarrajo

	// novos arrajos temporários
	int L[n1], R[n2]; 

	/* copiar valores para os subarranjos L [] e R [] */
	for (i = 0; i < n1; i++) 
		L[i] = arr[p + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[q + 1+ j]; 

	/* Mesclar os arrays temporários de volta em arr []*/
	
	i = 0; // índice inicial do primeiro subarray 
	j = 0; // Índice inicial do segundo sub-array 
	k = p; // Índice inicial do subarray mesclado 
	
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	/* Se houver elementos restantes em L [ ] ou R [ ], passa-los para arr []*/
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int p, int r) 
{ 
	if (p < r) // se p >= a q, significa que o array possui no máximo um elemento, portanto ja está ordenado.
	{ 
		int q = p+(r-p)/2;  // índice que subdivide o array em dois subarray

		mergeSort(arr, p, q); //Chame o mergeSort para o primeiro subarray
		mergeSort(arr, q+1, r); // Chame o mergeSort para o segundo subarray

		merge(arr, p, q, r); // Mesclar os dois subarray
	} 
} 

