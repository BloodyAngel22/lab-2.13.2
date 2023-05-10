#pragma once
#define Mbait 1024


struct Stack {
	int* data;
	int lenght;
};
extern Stack* s;

void init(Stack* s, int size); 
int pull(Stack* s); void push(Stack* s, int value);
void printStack(Stack* s);
void clearStack(Stack* s);
void reverseNumber(Stack* s);
void evenOdd(Stack* s);