#include "team_5.h"

void map_line_return()
{
	int i,a;								//for���� ����
	char* name[8] = {
		"(�����)","********"
		,"(���а�)","********"
		,"(������)","********"
		,"(��õ���)","**********" };		//�����̸��� *****�� �迭�Լ�
	int m[4];								//������ ����
		
	gotoxy(0, 0);
	for (i = 1; i <= 5; i++) {
		printf("#");
		for (a = 1; a <= 87; a++)
			printf(" ");
		printf("#");
		for (a = 1; a <= 11; a++)
			printf(" ");
		printf("#\n");
	}										//���κ� ������
	for (i = 1; i <= 25; i++) {
		printf("#");
		for (a = 1; a <= 49; a++)
			printf(" ");
		printf("|");
		for (a = 1; a <= 49; a++)
			printf(" ");
		printf("#\n");
	}										//�Ʒ��κ� ������								

	gotoxy(0, 17);
	printf("#");
	for (i = 1; i <= 49; i++)
		printf("-");
	printf("|");
	for (i = 1; i <= 49; i++)
		printf("-");
	printf("#");							//���� �߰� ������
	gotoxy(0, 0);
	for (i = 1; i <= 101; i++)
		printf("#");						//1��° ������

	for (i = 0, a = 0; i < 4; i++) {
		m[i] = rand() % 2;
		if (a == 2) {
			for (; i < 4; i++)
				m[i] = 1;
		}
		if (m[i] == 0)
			a++;
	}
	
	gotoxy(0, 29);
	printf("#");
	printf("%s",*(name + m[0]));
	for (i = 1; i <= 83; i++)
		printf("#");
	printf("%s", *(name + 2 + m[1]));
	gotoxy(0, 5);
	printf("#");
	printf("%s", *(name + 4 + m[2]));
	for (i = 1; i <= 81; i++)
		printf("#");
	printf("%s", *(name + 6 + m[3]));
	//�̸�

	for (i = 1; i <= 60; i++)
		printf("\n");

	gotoxy(92, 2);
	printf("�� ��");
}