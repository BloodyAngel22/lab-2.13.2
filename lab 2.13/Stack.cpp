#include <iostream>
#include "Stack.h"

void init(Stack* s, int size) {
	s->data = (int*)malloc(size * sizeof(int));
	s->head = -1;
	s->size = size;
}

int pull(Stack* s) {
	if (s->head < 0) 
		return 0;
	
	int value = s->data[s->head];
	s->head--;
	return value;
}

void push(Stack* s, int value) {
	s->head++;
	s->data[s->head] = value;
}

void printStack(Stack* s) {
	for (int i = 0; i <= s->head; i++)
		printf("%d -> ", s->data[i]);
	printf("\b\b\b   \n");
}

void clearStack(Stack* s) {
	s->head = -1;
}

void reverseNumber(Stack *s) {
	if (s->head < 0) return;
	int storage = s->data[0];
	for (int i = 1; i <= s->head; i++)
		storage = storage * 10 + s->data[i];
	
	int rev = storage % 10;
	storage /= 10;
	for (int i = 0; storage != 0; i++) {
		rev = (rev * 10) + storage % 10;
		storage /= 10;
	}
	printf("Вывод обратного числа: ");
	printf("%d\n", rev);
}

void evenOdd(Stack *s) {
	if (s->head < 0) return;
	int array[100];
	for (int i = 0; i <= s->head; i++)
		array[i] = s->data[i];
	for (int i = 0; i <= s->head - 2; i++) {
		int tmp = array[i];
		array[i] = array[i + 2];
		array[i + 2] = tmp;
	}

	printf("Вывод четного/нечетного: ");
	for (int i = 0; i <= s->head; i++) {
		printf("%d", array[i]);
	}
	printf("\n");
}