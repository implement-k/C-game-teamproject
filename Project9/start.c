#include"team_5.h"
static int stop = 1;

void Enter() {
    char a = 0;
    while (a != '\n')
    {
        a = getchar();
    }
    Sleep(100);
    system("cls");

    stop = 2;

}

int press()
{
    while (stop != 2)
    {
        gotoxy(0, 17);
        printf("		              Press ENTER to start               ");
        Sleep(1000);
        gotoxy(0, 17);
        printf("		                                                 ");
        Sleep(1000);

    }
    return 0;
}

void title() {
    gotoxy(10,9);
    printf("���� ������ �𸣴� �ڼҿ� �������� ã�� ������ �����ض�!��");
    gotoxy(47, 23);
    printf("�����۹���");
    gotoxy(47, 24);
    printf("|  ��   :����             |");
    gotoxy(47, 25);
    printf("|��  �� :����/������      |");
    gotoxy(47, 26);
    printf("|  ��   :�Ʒ���           |");
    gotoxy(47, 27);
    printf("| escŰ :���̵� ����â����|");

    gotoxy(0, 13);
    printf("		--------------------------------------------------\n");
    printf("		��������������������������\n");
    printf("		--------------------------------------------------");

    gotoxy(5, 24);
    printf("| 202211249 ������ |\n");
    gotoxy(5, 25);
    printf("| 202211255 �Ǳ��� |");
    gotoxy(5, 26);
    printf("| 202211314 ������ |");
    gotoxy(5, 27);
    printf("| 202211402 ȫ���� |");
        
}




void start()
{
    title();
    _beginthreadex(NULL, 0, press, 0, 0, NULL);
    Enter();
}