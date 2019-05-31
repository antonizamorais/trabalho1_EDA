#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

void hibridoMergeInsertion(int arr[], int p, int r, int size) 
{ 
	if ((r-1)-p < size) 
	{ 
		insertionSort(arr, r+1);
	}else{
		int q = p+(r-1)/2;
		hibridoMergeInsertion(arr, p, q, p+size);
		hibridoMergeInsertion(arr, q+1, r, size);
		merge(arr, p, q, r);
		
	} 
} 




