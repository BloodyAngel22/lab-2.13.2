#include <iostream>
#include "Stack.h"

int main() {
	system("chcp 1251");
	int choice;
	int lenght = 0;
	int value;
	Stack* s = (Stack*)malloc(sizeof(Stack));
	init(s, Mbait);
	while (true) {
		printf("Выбор: 1 - Добавить новый элемент; 2 - Удалить элемент; 3 - Вывод числа в обратном порядке; 4 - Четное/нечетное; 5 - очистка; 6 - Выход\n");
		int tmp = 0;
		int newSize = 0;
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			int number;
			printf("Введите число\n"); scanf_s("%d", &number);
			while (number != 0) {
				value = number % 10;
				number /= 10;
				push(s, value);
			}
			break;
		case 2:
			tmp = pull(s);
			printf("Удаление элемента %d\n", tmp);
			break;
		case 3:
			reverseNumber(s);
			break;
		case 4:
			evenOdd(s);
			break;
		case 5:
			clearStack(s);
			printf("Очистка прошла успешно\n");
			break;
		case 6:
			printf("Выход\n");
			free(s->data);
			exit(1);
			break;
		}

		printStack(s);

	}
}