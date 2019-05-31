#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

int main() 
{ 
	//Programa de relógio que retorna o tempo do processador consumido pelo programa: clock_t tempoN;. 
	
	/*vetorer de tamanho 500, 5000 e 10000*/
	
	int n1 = 500;
	int *array1 = (int *)malloc(sizeof(int) * n1);
	preencheArray(n1, array1);
	
	int n2 = 5000;
	int *array2 = (int *)malloc(sizeof(int) * n2);
	preencheArray(n2, array2);
	
	int n3 = 10000;
	int *array3 = (int *)malloc(sizeof(int) * n3);
	preencheArray(n3, array3);
	
	// Arrays que receberam valores do tempo de execução
	
	float *arrInsertion500 = (float *)malloc(sizeof(float) * 10);
	float *arrInsertion5000 = (float *)malloc(sizeof(float) * 10);
	float *arrInsertion10000 = (float *)malloc(sizeof(float) * 10);
	
	float *arrMerge500 = (float *)malloc(sizeof(float) * 10);
	float *arrMerge5000 = (float *)malloc(sizeof(float) * 10);
	float *arrMerge10000 = (float *)malloc(sizeof(float));
	
	float *arrQuick500 = (float *)malloc(sizeof(float) * 10);
	float *arrQuick5000 = (float *)malloc(sizeof(float) * 10);
	float *arrQuick10000 = (float *)malloc(sizeof(float) * 10);
	
	float *arrHeap500 = (float *)malloc(sizeof(float) * 10);
	float *arrHeap5000 = (float *)malloc(sizeof(float) * 10);
	float *arrHeap10000 = (float *)malloc(sizeof(float) * 10);
	
	float *arrMergeHibrido500 = (float *)malloc(sizeof(float) * 10);
	float *arrMergeHibrido5000 = (float *)malloc(sizeof(float) * 10);
	float *arrMergeHibrido10000 = (float *)malloc(sizeof(float) * 10);
	
	float *arrQuickHibrido500 = (float *)malloc(sizeof(float) * 10);
	float *arrQuickHibrido5000 = (float *)malloc(sizeof(float) * 10);
	float *arrQuickHibrido10000 = (float *)malloc(sizeof(float) * 10);
	
	/* -------------------------------- INSERTIONSORT ----------------------------*/
	printf("TEMPO MEDIO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO INSERTIONSORT \n");
	printf("\n");
	
	for (int i = 0; i < 10; i++){
		clock_t tempo1;
		tempo1 = clock();
		insertionSort(array1, n1); 
		float tempoexecucao1 = (clock() - tempo1) / (double)CLOCKS_PER_SEC;
		arrInsertion500[i] = tempoexecucao1;
	}
	printf("array de tamanho 500:  %f \n", mediaValoresArray(arrInsertion500, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo2;
		tempo2 = clock();
		insertionSort(array2, n2); 
		float tempoexecucao2 = (clock() - tempo2) / (double)CLOCKS_PER_SEC;
		arrInsertion5000[i] = tempoexecucao2;
	}
	printf("array de tamanho 5000: %f \n", mediaValoresArray(arrInsertion5000, 10));
		
	for (int i = 0; i < 10; i++){
		clock_t tempo3;	
		tempo3 = clock();
		insertionSort(array3, n3); 
		float tempoexecucao3 = (clock() - tempo3) / (double)CLOCKS_PER_SEC;
		arrInsertion10000[i] = tempoexecucao3;
	}
	printf("array de tamanho 10000: %f \n", mediaValoresArray(arrInsertion10000, 10));
		
	/* -------------------------------- MERGE SORT ----------------------------*/
	printf("\n");
	printf("TEMPO MEDIO EXECUCAO DE ORDENACAO DOS ARRAYS USANDO MERGESORT \n");
	printf("\n");
	
	for (int i = 0; i < 10; i++){
		clock_t tempo4;
		tempo4 = clock();
		mergeSort(array1, 0, n1 - 1);  
		float tempoexecucao4 = (clock() - tempo4) / (double)CLOCKS_PER_SEC;
		arrMerge500[i] = tempoexecucao4;
	}
	printf("array de tamanho 500: %f \n", mediaValoresArray(arrMerge500, 10));
		
	for (int i = 0; i < 10; i++){
		clock_t tempo5;
		tempo5 = clock();
		mergeSort(array2, 0, n2 - 1);  
		float tempoexecucao5 = (clock() - tempo5) / (double)CLOCKS_PER_SEC;
		arrMerge5000[i] = tempoexecucao5;
	}
	printf("array de tamanho 5000: %f \n", mediaValoresArray(arrMerge5000, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo6;	
		tempo6 = clock();
		mergeSort(array3, 0, n3 - 1);   
		float tempoexecucao6 = (clock() - tempo6) / (double)CLOCKS_PER_SEC;
		arrMerge10000[i] = tempoexecucao6;
	}
	printf("array de tamanho 10000: %f \n", mediaValoresArray(arrMerge10000, 10));	
	
	
	/* -------------------------------- QUICKSORT ----------------------------*/
	printf("\n");
	printf("TEMPO MEDIO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO QUICKSORT \n");
	printf("\n");
	
	for (int i = 0; i < 10; i++){
		clock_t tempo7;
		tempo7 = clock();
		quickSort(array1, 0, n1 - 1);   
		float tempoexecucao7 = (clock() - tempo7) / (double)CLOCKS_PER_SEC;
		arrQuick500[i] = tempoexecucao7;
	}
	printf("array de tamanho 500: %f \n", mediaValoresArray(arrQuick500, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo8;
		tempo8 = clock();
		quickSort(array2, 0, n2 - 1);    
		float tempoexecucao8 = (clock() - tempo8) / (double)CLOCKS_PER_SEC;
		arrQuick5000[i] = tempoexecucao8;
	}
	printf("array de tamanho 5000: %f \n", mediaValoresArray(arrQuick5000, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo9;	
		tempo9 = clock();
		quickSort(array3, 0, n3 - 1);   
		float tempoexecucao9 = (clock() - tempo9) / (double)CLOCKS_PER_SEC;
		arrQuick10000[i] = tempoexecucao9;
	}
	printf("array de tamanho 10000: %f \n", mediaValoresArray(arrQuick10000, 10));

	
	/* -------------------------------- HEAPSORT ----------------------------*/
	printf("\n");
	printf("TEMPO MEDIO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO HEAPSORT \n");
	printf("\n");
	
	for (int i = 0; i < 10; i++){
		clock_t tempo10;
		tempo10 = clock();
		heapSort(array1, n1);   
		float tempoexecucao10 = (clock() - tempo10) / (double)CLOCKS_PER_SEC;
		arrHeap500[i] = tempoexecucao10;
	}
	printf("array de tamanho 500: %f \n", mediaValoresArray(arrHeap500, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo11;
		tempo11 = clock();
		heapSort(array2, n2);   
		float tempoexecucao11 = (clock() - tempo11) / (double)CLOCKS_PER_SEC;
		arrHeap5000[i] = tempoexecucao11;
	}
	printf("array de tamanho 5000: %f \n", mediaValoresArray(arrHeap5000, 10));

	for (int i = 0; i < 10; i++){
		clock_t tempo12;	
		tempo12 = clock();
		heapSort(array3, n3);   
		float tempoexecucao12 = (clock() - tempo12) / (double)CLOCKS_PER_SEC;
		arrHeap10000[i] = tempoexecucao12;
	}
	printf("array de tamanho 10000: %f \n", mediaValoresArray(arrHeap10000, 10));		  
	
	// ALGORITMOS DE ORDENAÇÃO HIBRIDOS 
	
	/* -------------------------------- HIBRIDO DO QUICKSORT COM INSERTION  ----------------------------*/
	printf("\n");
	printf("TEMPO MEDIO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO ALGORITMO HIBRIDO DO QUICKSORT COM INSERTION \n");
	printf("\n");

	for (int i = 0; i < 10; i++){
		clock_t tempo13;
		tempo13 = clock();
		hibridoQuickInsertion(array1, 0, n1 - 1, 300);    
		float tempoexecucao13 = (clock() - tempo13) / (double)CLOCKS_PER_SEC;
		arrQuickHibrido500[i] = tempoexecucao13;
	}
	printf("array de tamanho 500: %f \n", mediaValoresArray(arrQuickHibrido500, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo14;
		tempo14 = clock();
		hibridoQuickInsertion(array2, 0, n2 - 1, 300);   
		float tempoexecucao14 = (clock() - tempo14) / (double)CLOCKS_PER_SEC;
		arrQuickHibrido5000[i] = tempoexecucao14;
	}
	printf("array de tamanho 5000: %f \n", mediaValoresArray(arrQuickHibrido5000, 10));
	
	for (int i = 0; i < 10; i++){
		clock_t tempo15;	
		tempo15 = clock();
		hibridoQuickInsertion(array3, 0, n3 - 1, 300);    
		float tempoexecucao15 = (clock() - tempo15) / (double)CLOCKS_PER_SEC;
		arrQuickHibrido10000[i] = tempoexecucao15;
	}
	printf("array de tamanho 10000: %f \n", mediaValoresArray(arrQuickHibrido10000, 10));
	 
	
	/* -------------------------------- HIBRIDO MERGE COM INSERTION ----------------------------*/
	printf("\n");
	printf("TEMPO MEDIO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO ALGORITMO HIBRIDO MERGE COM INSERTION \n");
	printf("\n");
	
	for (int i = 0; i < 10; i++){
		clock_t tempo16;
		tempo16 = clock();
		hibridoMergeInsertion(array1, 0, n1 - 1, 300);   
		float tempoexecucao16 = (clock() - tempo16) / (double)CLOCKS_PER_SEC;
		arrMergeHibrido500[i] = tempoexecucao16;
	}
	printf("array de tamanho 500: %f \n", mediaValoresArray(arrMergeHibrido500, 10));
		
	for (int i = 0; i < 10; i++){
		clock_t tempo17;
		tempo17 = clock();
		hibridoMergeInsertion(array2, 0, n2 - 1, 300);     
		float tempoexecucao17 = (clock() - tempo17) / (double)CLOCKS_PER_SEC;
		arrMergeHibrido5000[i] = tempoexecucao17;
	}
	printf("array de tamanho 5000: %f \n", mediaValoresArray(arrMergeHibrido5000, 10));

	for (int i = 0; i < 10; i++){
		clock_t tempo18;	
		tempo18 = clock();
		hibridoMergeInsertion(array3, 0, n3 - 1, 300);     
		float tempoexecucao18 = (clock() - tempo18) / (double)CLOCKS_PER_SEC;
		arrMergeHibrido10000[i] = tempoexecucao18;
	}
	printf("array de tamanho 10000: %f \n", mediaValoresArray(arrMergeHibrido10000, 10));	 

	return 0;  
} 
