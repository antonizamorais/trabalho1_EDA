/*  QUESTÃO DE PONTO EXTRA

Questão: implementa uma versão híbridas do algoritmos quicksort que utiliza
o insertion sort para ordenar subarrays com um pequeno número de elementos.
 	
Solução: Foi implementado em C o algoritmo DualPivot QuickSort, criado recentemente no ano
2009, e possui um alto desempenho. Foi criado pelo Vladimir Yaroslavskiy. Durante a ordenação, 
quando o tamanho de um subvetor é menor que vinte e sete, o código utiliza o Insertion Sort, 
porque esse se mostra mais rápido para vetores pequenos. O DualPivot QuickSort utiliza dois pivôs 
que são escolhidos em torno do meio do intervalo para ordenar. Os números do vetor são comparados
com os dois pivôs e encaixados no vetor por um melhor mapeamento.
(YAROSLAVSKIY, 2009).
 	
*/

#include <stdio.h> 
#include <stdlib.h>
#include <iostream>
#include "ordenacao.h"

using namespace std;

void DualPivotQuickSort(int* arr, int p, int r) 
{ 
	if (p < r) { 
		// lp significa pivô esquerdo e rp significa pivô direito. 
		int lp, rp; 
		rp = partitionH(arr, p, r, &lp); 
		DualPivotQuickSort(arr, p, lp - 1); 
		DualPivotQuickSort(arr, lp + 1, rp - 1); 
		DualPivotQuickSort(arr, rp + 1, r); 
	} 
} 

int partitionH(int* arr, int p, int r, int* lp) 
{ 
	if (arr[p] > arr[r]) 
		swap(&arr[p], &arr[r]); 
	// e é o pivô esquerdo e q é o pivô direito.
	int j = p + 1; 
	int g = r - 1, k = p + 1, e = arr[p], q = arr[r]; 
	while (k <= g) { 

		// se os elementos forem menores que o pivô esquerdo
		if (arr[k] < e) { 
			swap(&arr[k], &arr[j]); 
			j++; 
		} 

		// se os elementos forem maiores ou iguais
		// para o pivô direito 
		else if (arr[k] >= q) { 
			while (arr[g] > q && k < g) 
				g--; 
			swap(&arr[k], &arr[g]); 
			g--; 
			if (arr[k] < e) { 
				swap(&arr[k], &arr[j]); 
				j++; 
			} 
		} 
		k++; 
	} 
	j--; 
	g++; 

	//traga pivôs para suas posições apropriadas.
	swap(&arr[p], &arr[j]); 
	swap(&arr[r], &arr[g]); 

	// retornando os índices dos pivots. 
	* lp = j; // porque não podemos retornar dois elementos de uma função. 

	return g; 
} 




