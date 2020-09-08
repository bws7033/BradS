//Pointer.c

#include <stdio.h>

int main(){
	int a = 15;
	int *pa = &a; // Pa holds address/reference of a=15
	printf("pa = %p\n", pa);
	printf("dereferencing pa = %d\n", pa);
	// unary operators
	//1. &a- referencing op
	//2. *pa - dereferencing operator

	// increase a by 1
	a += 1; //a = 16

	*pa += 1; //a = 17

	printf("a = %d\n", a);
	}	