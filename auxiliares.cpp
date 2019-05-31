#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h" 

void preencheArray(int n, int arr[]) {
    int aux, flag = 0;
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
          aux = (int) rand();
          for (int j = 0; j < i; j++) {
            	if (aux == arr[j])
                flag = 1;
          }
    if (flag != 1)
    	arr[i] = aux;
    else
        i--;
    	flag = 0;
    } 
}

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n");  
} 

float mediaValoresArray(float arr[], int n) {
    float soma = 0;
    for(int i = 0; i < n; i++){
    	soma += arr[i];
	}
	return soma/n;
}
