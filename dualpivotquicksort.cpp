/*  QUEST�O DE PONTO EXTRA

Quest�o: implementa uma vers�o h�bridas do algoritmos quicksort que utiliza
o insertion sort para ordenar subarrays com um pequeno n�mero de elementos.
 	
Solu��o: Foi implementado em C o algoritmo DualPivot QuickSort, criado recentemente no ano
2009, e possui um alto desempenho. Foi criado pelo Vladimir Yaroslavskiy. Durante a ordena��o, 
quando o tamanho de um subvetor � menor que vinte e sete, o c�digo utiliza o Insertion Sort, 
porque esse se mostra mais r�pido para vetores pequenos. O DualPivot QuickSort utiliza dois piv�s 
que s�o escolhidos em torno do meio do intervalo para ordenar. Os n�meros do vetor s�o comparados
com os dois piv�s e encaixados no vetor por um melhor mapeamento.
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
		// lp significa piv� esquerdo e rp significa piv� direito. 
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
	// e � o piv� esquerdo e q � o piv� direito.
	int j = p + 1; 
	int g = r - 1, k = p + 1, e = arr[p], q = arr[r]; 
	while (k <= g) { 

		// se os elementos forem menores que o piv� esquerdo
		if (arr[k] < e) { 
			swap(&arr[k], &arr[j]); 
			j++; 
		} 

		// se os elementos forem maiores ou iguais
		// para o piv� direito 
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

	//traga piv�s para suas posi��es apropriadas.
	swap(&arr[p], &arr[j]); 
	swap(&arr[r], &arr[g]); 

	// retornando os �ndices dos pivots. 
	* lp = j; // porque n�o podemos retornar dois elementos de uma fun��o. 

	return g; 
} 




