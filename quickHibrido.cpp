#include <stdio.h> 
#include <stdlib.h>
#include "ordenacao.h"

void hibridoQuickInsertion(int arr[], int p, int r, int size) 
{ 
	if (p < size) {
		if((p-r) < size){
			insertionSort(arr, r+1);	
		} 
	}else{
		int q = partition(arr, p, r); 
		hibridoQuickInsertion(arr, p, q - 1, size); 
		hibridoQuickInsertion(arr, q + 1, r, size);		
	} 
} 

