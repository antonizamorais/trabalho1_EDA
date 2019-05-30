#ifndef ORDENACAO_H
#define ORDENACAO_H

/* -------------------------------- ALGORITMOS DE ORDENA��O --------------------------------------*/

/* Ordena��o InsertionSort*/

// Fun��o InsertionSort:
void insertionSort(int arr[], int n);

/* Ordena��o MergeSort*/

// Fun��o Merge
void merge(int arr[], int p, int q, int r);
// Fun��o MergeSort
void mergeSort(int arr[], int p, int r);

/* Ordena��o QuickSort*/

void quickSort(int arr[], int p, int r);
int partition (int arr[], int p, int r);

/* Ordena��o HeapSort*/

void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

/* -------------------------------- ALGORITMOS DE ORDENA��O HIBR�DOS--------------------------------------*/

int partitionH(int* arr, int p, int r, int* lp);
void DualPivotQuickSort(int* arr, int p, int r);

void timSort(int arr[], int n);
void mergeH(int arr[], int l, int m, int r);
void insertionSortH(int arr[], int left, int right);

/* --------------------------------- FUN��ES AUXIRIARES -------------------------------------------*/
void preencheArray(int n, int arr[]);
void printArray(int arr[], int n);
void swap(int* a, int* b);

#endif
