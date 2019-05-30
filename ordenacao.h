#ifndef ORDENACAO_H
#define ORDENACAO_H

/* -------------------------------- ALGORITMOS DE ORDENAÇÃO --------------------------------------*/

/* Ordenação InsertionSort*/

// Função InsertionSort:
void insertionSort(int arr[], int n);

/* Ordenação MergeSort*/

// Função Merge
void merge(int arr[], int p, int q, int r);
// Função MergeSort
void mergeSort(int arr[], int p, int r);

/* Ordenação QuickSort*/

void quickSort(int arr[], int p, int r);
int partition (int arr[], int p, int r);

/* Ordenação HeapSort*/

void heapify(int arr[], int n, int i);
void heapSort(int arr[], int n);

/* -------------------------------- ALGORITMOS DE ORDENAÇÃO HIBRÍDOS--------------------------------------*/

int partitionH(int* arr, int p, int r, int* lp);
void DualPivotQuickSort(int* arr, int p, int r);

void timSort(int arr[], int n);
void mergeH(int arr[], int l, int m, int r);
void insertionSortH(int arr[], int left, int right);

/* --------------------------------- FUNÇÕES AUXIRIARES -------------------------------------------*/
void preencheArray(int n, int arr[]);
void printArray(int arr[], int n);
void swap(int* a, int* b);

#endif
