#include "team_5.h"
static int stop;

int select(void)
{

    gotoxy(20, 5);
    printf("           �����̵� ���â�");
    gotoxy(18, 7);
    printf(" ----------------------------------------");
    gotoxy(20, 8);
    printf("   1.���г�   2.���л�   3.������");
    gotoxy(20, 9);
    printf("     �ܡۡ�     �ܡܡ�     �ܡܡ�");
    gotoxy(18, 10);
    printf(" ----------------------------------------");
    gotoxy(18, 14);
    printf("            escŰ�� ������ ����          ");
    gotoxy(0, 30);
}//����ȭ�����

int input()
{
    char a = 0;
    while (a != '1' && a != '2' && a != '3' && a!=27)
    {
        a = _getch();
    }
    //Sleep(100);
    //system("cls");ȭ�� ����

    stop = 2;
    if (a == '1')
    {
        return 1;
    }//���̵� 1
    else if (a == '2')
    {
        return 2;
    }
    else if (a == '3') {
        return 3;
    }
    else if (a == 27) {
        exit(0);
    }


}

int difficulty(int* p) {

    select();
    *p = input();

}