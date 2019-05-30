/* programa C++ para insertion sort */

// consiste em percorrer o vetor da esquerda para a direita, 
// pegando o valor que está passando, e testando com todos os valores que 
// estão a sua esquerda se são maiores que ele. Assim sendo ele vai ordenando 
// os valores do vetor da esquerda para a direita.

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h" 

void insertionSort(int arr[], int n) 
{  
 // j começa na posição 1 do vetor e vai até a ultima posição;
	for (int j = 1; j < n; j++)
	{ 
// key recebe a posição que está passando no "for";
		int key = arr[j]; 
		int i = j - 1; 
// Enquanto o valor que está passando na posição "key" for menor que a posição "i" , ocorre a troca;
		while (i >= 0 && arr[i] > key) 
		{ 
			arr[i + 1] = arr[i]; 
			i = i - 1; 
		} 
		arr[i + 1] = key; 	
	} 
} 

