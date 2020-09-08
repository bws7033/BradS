
#include<stdio.h>
int main(){

	int secret_array[3];
	secret_array[0] = 100;
	secret_array[1] = 200;
	secret_array[2] = 300;

	//an array of integers
	int myarray[] = {10, 20, 30};
	// array is a pointer
	// myarray points to the first element, holds the address of the first element	
	

	// length of an array
	size_t length = sizeof(myarray) /sizeof(int); // unsigned long, sizeof - total size in bytes
	// printf(“length = %lu\n”, length);

	for(int i = 0; i < 3; i++){
		printf("%d ", *(myarray+i));
	}

	for(int i = 0; i < 10; i++){
		printf("%d ", myarray[i]);
	}
	printf("\n");


	
}