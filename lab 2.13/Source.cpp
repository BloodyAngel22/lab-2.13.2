#include <iostream>

int main() {
	system("chcp 1251");
	int choice;
	while (true) {
		printf("Выбор: 1 - Добавить новый элемент; 2 - Удалить элемент; 3 - Вывод числа в обратном порядке; 4 - Четное/нечетное; 5 - очистка; 6 - Выход\n");
		int tmp;
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			int number;
			printf("Введите число\n"); scanf_s("%d", &number);	
			while (number != 0) {
				tmp = number % 10;
				number /= 10;
				push(tmp);
			}
			break;
		case 2:			
			printf("Удаление элемента %d\n");
			break;
		case 3:
			printf("Вывод обратного числа: ");
			break;
		case 4:
			printf("Вывод четного/нечетного: ");
			break;
		case 5:
			printf("Очистка прошла успешно\n");
			break;
		case 6:
			printf("Выход\n");
			return 0;
		}

		
	}
}