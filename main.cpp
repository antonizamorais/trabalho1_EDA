#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

int main() 
{ 
	//Programa de relógio que retorna o tempo do processador consumido pelo programa: clock_t tempoN;. 
	
	/*vetorer de tamanho 100, 1000, 5000 e 10000*/
	
	int n1 = 100;
	int *array1 = (int *)malloc(sizeof(int) * n1);
	preencheArray(n1, array1);
	
	int n2 = 1000;
	int *array2 = (int *)malloc(sizeof(int) * n2);
	preencheArray(n2, array2);
	
	int n3 = 5000;
	int *array3 = (int *)malloc(sizeof(int) * n3);
	preencheArray(n3, array3);
	
	int n4 = 10000;
	int *array4 = (int *)malloc(sizeof(int) * n4);
	preencheArray(n4, array4);
	
	/* -------------------------------- INSERTIONSORT ----------------------------*/
	printf("TEMPO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO INSERTIONSORT \n");
	printf("\n");
	
	clock_t tempo1;
	tempo1 = clock();
	insertionSort(array1, n1); 
	printf("Tempo de execucao do array de tamanho 100: %f",(clock() - tempo1) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo2;
	tempo2 = clock();
	insertionSort(array2, n2); 
	printf("Tempo de execucao do array de tamanho 1000: %f",(clock() - tempo2) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo3;	
	tempo3 = clock();
	insertionSort(array3, n3); 
	printf("Tempo de execucao do array de tamanho 5000: %f",(clock() - tempo3) / (double)CLOCKS_PER_SEC);
	printf("\n");

	clock_t tempo4;
	tempo4 = clock();
	insertionSort(array4, n4); 
	printf("Tempo de execucao do array de tamanho 10000: %f",(clock() - tempo4) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	/* -------------------------------- MERGE SORT ----------------------------*/
	printf("\n");
	printf("TEMPO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO MERGESORT \n");
	printf("\n");
	
	clock_t tempo5;
	tempo5 = clock();
	mergeSort(array1, 0, n1 - 1);  
	printf("Tempo de execucao do array de tamanho 100: %f",(clock() - tempo5) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo6;
	tempo6 = clock();
	mergeSort(array2, 0, n2 - 1); 
	printf("Tempo de execucao do array de tamanho 1000: %f",(clock() - tempo6) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo7;	
	tempo7 = clock();
	mergeSort(array3, 0, n3 - 1); 
	printf("Tempo de execucao do array de tamanho 5000: %f",(clock() - tempo7) / (double)CLOCKS_PER_SEC);
	printf("\n");

	clock_t tempo8;
	tempo8 = clock();
	mergeSort(array4, 0, n4 - 1);  
	printf("Tempo de execucao do array de tamanho 10000: %f",(clock() - tempo8) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	/* -------------------------------- QUICKSORT ----------------------------*/
	printf("\n");
	printf("TEMPO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO QUICKSORT \n");
	printf("\n");
	
	clock_t tempo9;
	tempo9 = clock();
	quickSort(array1, 0, n1 - 1);  
	printf("Tempo de execucao do array de tamanho 100: %f",(clock() - tempo9) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo10;
	tempo10 = clock();
	quickSort(array2, 0, n2 - 1); 
	printf("Tempo de execucao do array de tamanho 1000: %f",(clock() - tempo10) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo11;	
	tempo11 = clock();
	quickSort(array3, 0, n3 - 1); 
	printf("Tempo de execucao do array de tamanho 5000: %f",(clock() - tempo11) / (double)CLOCKS_PER_SEC);
	printf("\n");

	clock_t tempo12;
	tempo12 = clock();
	quickSort(array4, 0, n4 - 1);  
	printf("Tempo de execucao do array de tamanho 10000: %f",(clock() - tempo12) / (double)CLOCKS_PER_SEC);
	printf("\n");  
	
	/* -------------------------------- HEAPSORT ----------------------------*/
	printf("\n");
	printf("TEMPO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO HEAPSORT \n");
	printf("\n");
	
	clock_t tempo13;
	tempo13 = clock();
	heapSort(array1, n1);   
	printf("Tempo de execucao do array de tamanho 100: %f",(clock() - tempo13) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo14;
	tempo14 = clock();
	heapSort(array2, n2);  
	printf("Tempo de execucao do array de tamanho 1000: %f",(clock() - tempo14) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo15;	
	tempo15 = clock();
	heapSort(array3, n3);  
	printf("Tempo de execucao do array de tamanho 5000: %f",(clock() - tempo15) / (double)CLOCKS_PER_SEC);
	printf("\n");

	clock_t tempo16;
	tempo16 = clock();
	heapSort(array4, n4);   
	printf("Tempo de execucao do array de tamanho 10000: %f",(clock() - tempo16) / (double)CLOCKS_PER_SEC);
	printf("\n"); 
	
	// ALGORITMOS DE ORDENAÇÃO HIBRIDOS 
	
	/* -------------------------------- DUALPIVOTQUICKSORT ----------------------------*/
	printf("\n");
	printf("TEMPO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO DUALPIVOT QUICKSORT \n");
	printf("\n");
	
	clock_t tempo17;
	tempo17 = clock();
	DualPivotQuickSort(array1, 0, n1);  
	printf("Tempo de execucao do array de tamanho 100: %f",(clock() - tempo17) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo18;
	tempo18 = clock();
	DualPivotQuickSort(array2, 0, n2);
	printf("Tempo de execucao do array de tamanho 1000: %f",(clock() - tempo18) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo19;	
	tempo19 = clock();
	DualPivotQuickSort(array3, 0, n3); 
	printf("Tempo de execucao do array de tamanho 5000: %f",(clock() - tempo19) / (double)CLOCKS_PER_SEC);
	printf("\n");

	clock_t tempo20;
	tempo20 = clock();
	DualPivotQuickSort(array4, 0, n4); 
	printf("Tempo de execucao do array de tamanho 10000: %f",(clock() - tempo20) / (double)CLOCKS_PER_SEC);
	printf("\n"); 
	
	/* -------------------------------- TIMSORT ----------------------------*/
	printf("\n");
	printf("TEMPO DE EXECUCAO DE ORDENACAO DOS ARRAYS USANDO TIMSORT \n");
	printf("\n");
	
	clock_t tempo21;
	tempo21 = clock();
	timSort(array1, n1); 
	printf("Tempo de execucao do array de tamanho 100: %f",(clock() - tempo21) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo22;
	tempo22 = clock();
	timSort(array2, n2); 
	printf("Tempo de execucao do array de tamanho 1000: %f",(clock() - tempo22) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	clock_t tempo23;	
	tempo23 = clock();
	timSort(array3, n3); 
	printf("Tempo de execucao do array de tamanho 5000: %f",(clock() - tempo23) / (double)CLOCKS_PER_SEC);
	printf("\n");

	clock_t tempo24;
	tempo24 = clock();
	timSort(array4, n4);  
	printf("Tempo de execucao do array de tamanho 10000: %f",(clock() - tempo24) / (double)CLOCKS_PER_SEC);
	printf("\n");
	
	return 0;  
} 
