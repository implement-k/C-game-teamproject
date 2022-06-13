#include "team_5.h"
static int stop;

int select(void)
{

    gotoxy(20, 5);
    printf("           ▶난이도 선택◀");
    gotoxy(18, 7);
    printf(" ----------------------------------------");
    gotoxy(20, 8);
    printf("   1.고학년   2.복학생   3.새내기");
    gotoxy(20, 9);
    printf("     ●○○     ●●○     ●●●");
    gotoxy(18, 10);
    printf(" ----------------------------------------");
    gotoxy(18, 14);
    printf("            esc키를 누르면 종료          ");
    gotoxy(0, 30);
}//선택화면출력

int input()
{
    char a = 0;
    while (a != '1' && a != '2' && a != '3' && a!=27)
    {
        a = _getch();
    }
    //Sleep(100);
    //system("cls");화면 비우기

    stop = 2;
    if (a == '1')
    {
        return 1;
    }//난이도 1
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