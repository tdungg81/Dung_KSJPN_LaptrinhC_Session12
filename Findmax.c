#include<stdio.h>

int findmaxvalue(int arr[], int size){
	int max = arr[0];
	for(int i = 0; i < size; i++){
	    if(arr[i] > max){
	    	max = arr[i]; 
		} 
    }
    return max; 
} 
int main(){
	int numbers[] = {5,4,9,6,7};
	int size = sizeof(numbers) / sizeof(int);
	printf("Phan tu lon nhat trong mang la %d",findmaxvalue(numbers,size));
	return 0; 
} 
