/* programa C++ para insertion sort */

// consiste em percorrer o vetor da esquerda para a direita, 
// pegando o valor que est� passando, e testando com todos os valores que 
// est�o a sua esquerda se s�o maiores que ele. Assim sendo ele vai ordenando 
// os valores do vetor da esquerda para a direita.

#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h" 

void insertionSort(int arr[], int n) 
{  
 // j come�a na posi��o 1 do vetor e vai at� a ultima posi��o;
	for (int j = 1; j < n; j++)
	{ 
// key recebe a posi��o que est� passando no "for";
		int key = arr[j]; 
		int i = j - 1; 
// Enquanto o valor que est� passando na posi��o "key" for menor que a posi��o "i" , ocorre a troca;
		while (i >= 0 && arr[i] > key) 
		{ 
			arr[i + 1] = arr[i]; 
			i = i - 1; 
		} 
		arr[i + 1] = key; 	
	} 
} 

