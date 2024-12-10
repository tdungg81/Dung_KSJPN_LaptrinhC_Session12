#include<stdio.h>

void arrayelement (int arr[], int size){
	for(int i = 0; i < size; i++) {
		printf(" %d", arr[i]); 
	} 
}
int main(){
	int array[] = {1,2,3,4,5};
	int size = sizeof(array) / sizeof(array[0]);
	arrayelement(array, size);
	return 0; 
} 
