#include <iostream>

int main() {
	system("chcp 1251");
	int choice;
	while (true) {
		printf("�����: 1 - �������� ����� �������; 2 - ������� �������; 3 - ����� ����� � �������� �������; 4 - ������/��������; 5 - �������; 6 - �����\n");
		int tmp;
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			int number;
			printf("������� �����\n"); scanf_s("%d", &number);	
			while (number != 0) {
				tmp = number % 10;
				number /= 10;
				push(tmp);
			}
			break;
		case 2:			
			printf("�������� �������� %d\n");
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
			return 0;
		}

		
	}
}