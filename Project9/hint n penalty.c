#include "team_5.h"
extern int penalty;
extern int place;
extern int x;
int hint() {
	int a;
	int b;
	a = rand();
	b = a % 2;
	char c[][30] =
	{
		"�ϰ�ȣ�� ������!",
		"���ǽǿ��� ��������!",
		"���谡 �������ڰ� ������!",
		"���꿡�� ��������!",
		"���� �Ҿ���!",
		"������ �ΰ�Դ�!"
	};

	gotoxy(2, 1);
	printf("                                             ");
	gotoxy(2, 2);
	printf("                                             ");

	if (b == 1)//��Ģ
	{
		b = rand();
		b = a % 6;
		if (b == 0) {
			gotoxy(2, 1);
			printf("%s", c[0]);
			gotoxy(2, 2);
			printf("3�� ����");
			penalty = 1;
		}
		else if (b == 1) {
			gotoxy(2, 1);
			printf("%s", c[1]);
			gotoxy(2, 2);
			printf("3�� ����");
			penalty = 1;
		}
		else if (b == 2) {
			gotoxy(2, 1);
			printf("%s", c[2]);
			gotoxy(2, 2);
			printf("3�� ����");
			penalty = 1;

		}
		else if (b == 3) {
			gotoxy(2, 1);
			printf("%s", c[3]);
			gotoxy(2, 2);
			printf("3�� ����");
			penalty = 1;
		}
		else if (b == 4) {
			gotoxy(2, 1);
			printf("%s", c[4]);
			gotoxy(2, 2);
			printf("ó������");
			penalty = 2;

		}
		else if (b == 5) {
			gotoxy(2, 1);
			printf("%s", c[5]);
			gotoxy(2, 2);
			printf("ó������");
			penalty = 2;
		}
	}


	else//��Ʈ
	{
		b = rand() % 3;
		gotoxy(2, 1);
		printf("                                               ");
		gotoxy(2, 2);
		printf("                                               ");
		gotoxy(2, 1);
		if (x == 1)//���г�
		{
			if (place == 1)//������
			{
				if (b == 0)
				{
					printf("�츮 �б����� å�� ���� ���� �� �Դϴ�.");
				}
				else if (b == 1)
				{
					printf("�����ϴ� �� �л����� �ʿ��մϴ�. ");
				}
				else if (b == 2)
				{
					printf("���ο� K-CUBE�� �ֽ��ϴ�. ");
				}

			}
			else if (place == 2)//�����
			{
				if (b == 0)
				{
					printf("���ο� atm�� ��ġ�Ǿ� �ֽ��ϴ�.");
				}
				else if (b == 1)
				{
					printf("�ַ� Ÿ�������� �� �л��̳� �ܱ��� ���л����� ���� ����ϴ� �� �Դϴ�. ");
				}
				else if (b == 2)
				{
					printf("�������� ħ������ ���� ���� �� �Դϴ�. ");
				}
			}
			else if (place == 3)//��õ���
			{
				if (b == 0)
				{
					printf("�ǹ��� �Ǳ����б���� �������ֽ��ϴ�. ");
				}
				else if (b == 1)
				{
					printf(" c���α׷��� �⸻��� �ǽõǴ� ���Դϴ�.");
				}
				else if (b == 2)
				{
					printf("���ο� atm�� ��ġ�Ǿ� �ֽ��ϴ�. ");
				}
			}
			else if (place == 4)//���а�
			{
				if (b == 0)
				{
					printf("c���α׷��� ������ ����Ǵ� ���Դϴ�. ");
				}
				else if (b == 1)
				{
					printf("  21�� �ǹ��Դϴ�.");
				}
				else if (b == 2)
				{
					printf("������ �л����� ������ ���� ��� ���Դϴ�. ");
				}
			}
		}
		else if (x == 2)//���л�
		{
			if (place == 1)//������
			{
				if (b == 0)
				{
					printf("�ǹ� �տ� ������ �ֽ��ϴ�.  ");
				}
				else if (b == 1)
				{
					printf("  ���ο� �Ĵ��� ��ġ�Ǿ� �ֽ��ϴ�. ");
				}
				else if (b == 2)
				{
					printf("��� �̸��� '��'�� ���ϴ�. ");
				}
			}
			else if (place == 2)//�����
			{
				if (b == 0)
				{
					printf("���ο� atm�� ��ġ�Ǿ� �ֽ��ϴ�  ");
				}
				else if (b == 1)
				{
					printf("  ����� ���� ���� 3���� �Դϴ�. ");
				}
				else if (b == 2)
				{
					printf("��� �̸��� '��'�� ���ϴ�. ");
				}
			}
			else if (place == 3)//��õ���
			{
				if (b == 0)
				{
					printf("���ο� �Ĵ��� ��ġ�Ǿ� �ֽ��ϴ�.");
				}
				else if (b == 1)
				{
					printf("  ��� �̸��� '��'�� ���ϴ� ");
				}
				else if (b == 2)
				{
					printf("����� ���� ���� 4���� �Դϴ�.");
				}
			}
			else if (place == 4)//���а�
			{
				if (b == 0)
				{
					printf(" ���ο� K-CUBE�� �ֽ��ϴ�. ");
				}
				else if (b == 1)
				{
					printf(" ���� ������ �������� �ֽ��ϴ�");
				}
				else if (b == 2)
				{
					printf("����� ���� ���� 3���� �Դϴ�.");
				}
			}

		}
		else if (x == 3)//������
		{
			if (place == 1)//������
			{
				if (b == 0)
				{
					printf(" �����ͱⰡ ��ġ �Ǿ� �ֽ��ϴ�.  ");
				}
				else if (b == 1)
				{
					printf(" ����� ���� ���� 3���� �Դϴ�.");
				}
				else if (b == 2)
				{
					printf("��� �̸��� '��'�� ���ϴ�.");
				}
			}
			else if (place == 2)//�����
			{
				if (b == 0)
				{
					printf(" �ǹ���ȣ�� ���ڸ� �� �Դϴ�.  ");
				}
				else if (b == 1)
				{
					printf(" ����� ���� ���� 3���� �Դϴ�.");
				}
				else if (b == 2)
				{
					printf("��� �̸��� '��'�� ���ϴ�.");
				}
			}
			else if (place == 3)//��õ���
			{
				if (b == 0)
				{
					printf(" �ǹ���ȣ�� ���ڸ� �� �Դϴ�. ");
				}
				else if (b == 1)
				{
					printf("  �����ͱⰡ ��ġ �Ǿ� �ֽ��ϴ�.");
				}

			}
			else if (place == 4)//���а�
			{
				if (b == 0)
				{
					printf(" �����ͱⰡ ��ġ �Ǿ� �ֽ��ϴ�.  ");
				}
				else if (b == 1)
				{
					printf("�ǹ���ȣ�� ���ڸ� �� �Դϴ�. ");
				}
				else if (b == 2)
				{
					printf("����� ���� ���� 3���� �Դϴ�.");
				}
			}
		}
	}
}
