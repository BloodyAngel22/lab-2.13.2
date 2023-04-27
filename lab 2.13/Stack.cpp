#include <iostream>
#include "Stack.h"

void push(int* stack, int* storageStack, int tmp, int lenght) {
	int storage = 0;
	for (int i = 0; i < lenght; i++) {
		storage = tmp % 10;
		tmp /= 10;
		stack[i] = storage;
		storageStack[i] = stack[i];
	}
}

int pull(int* stack, int& lenght){
	if (lenght == 0) return 0;
	int tmp = stack[0];
	for (int i = 0; i < lenght; i++) {
		stack[i] = stack[i + 1];
	}
	lenght--;
	return tmp;
}

void printStack(int* stack, int lenght) {
	if (lenght == 0) return;
	for (int i = 0;	i < lenght; i++)
		printf("%d -> ", stack[i]);
	printf("\b\b\b   \n");
}