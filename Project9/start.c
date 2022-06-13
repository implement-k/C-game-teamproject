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
    printf("□어디에 있을지 모르는 박소영 교수님을 찾아 과제를 제출해라!□");
    gotoxy(47, 23);
    printf("※조작법※");
    gotoxy(47, 24);
    printf("|  ▲   :위로             |");
    gotoxy(47, 25);
    printf("|◀  ▶ :왼쪽/오른쪽      |");
    gotoxy(47, 26);
    printf("|  ▼   :아래로           |");
    gotoxy(47, 27);
    printf("| esc키 :난이도 선택창으로|");

    gotoxy(0, 13);
    printf("		--------------------------------------------------\n");
    printf("		■■■■■■■■■■■■■■■■■■■■■■■■■\n");
    printf("		--------------------------------------------------");

    gotoxy(5, 24);
    printf("| 202211249 강윤원 |\n");
    gotoxy(5, 25);
    printf("| 202211255 권구현 |");
    gotoxy(5, 26);
    printf("| 202211314 신현서 |");
    gotoxy(5, 27);
    printf("| 202211402 홍승주 |");
        
}




void start()
{
    title();
    _beginthreadex(NULL, 0, press, 0, 0, NULL);
    Enter();
}