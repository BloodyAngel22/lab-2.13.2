#include <iostream>
#include "Stack.h"

int main() {
	system("chcp 1251");
	int choice;
	int* stack = (int*)malloc(sizeof(int));
	int* storageStack = (int*)malloc(sizeof(int));
	int lenght = 0;
	int check = 0;
	while (true) {
		printf("�����: 1 - �������� ����� �������; 2 - ������� �������; 3 - ����� ����� � �������� �������; 4 - ������/��������; 5 - �������; 6 - �����\n");
		int tmp = 0;
		int newSize = 0;
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			int number;
			printf("������� �����\n"); scanf_s("%d", &number);
			if (lenght != 0) {
				stack = (int*)realloc(stack, sizeof(lenght));
				while (number != 0) {
					tmp = (tmp + number % 10) * 10;
					number /= 10;
					lenght++;
					newSize++;
				}tmp /= 10;
				for (int i = 0; i < newSize; i++) {
					stack[i] = tmp % 10;
					tmp /= 10;
				}
				for (int i = 0; newSize < lenght; newSize++, i++) {
					stack[newSize] = storageStack[i];
				}
				storageStack = (int*)realloc(storageStack, sizeof(lenght));
				for (int i = 0; i < lenght;i++) {
					storageStack[i] = stack[i];
				}
				newSize = 0;
			}
			if (lenght == 0) {
				while (number != 0) {
					tmp = (tmp + number % 10) * 10;
					number /= 10;
					lenght++;
				}tmp /= 10;
				stack = (int*)realloc(stack, sizeof(lenght));
				storageStack = (int*)realloc(storageStack, sizeof(lenght));
				push(stack, storageStack, tmp, lenght);
			}
			break;
		case 2:	
			tmp = pull(stack, lenght);
			printf("�������� �������� %d\n", tmp);
			break;
		case 3:
			printf("����� ��������� �����: ");
			break;
		case 4:
			printf("����� �������/���������: ");
			break;
		case 5:
			printf("������� ������ �������\n");
			break;
		case 6:
			printf("�����\n");
			stack = nullptr;
			storageStack = nullptr;
			free(stack);
			free(storageStack);
			lenght = 0;
			exit(1);
			break;
		}
	if (lenght != 0)
		printStack(stack, lenght);
	}
}