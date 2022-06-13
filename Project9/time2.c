#include "team_5.h"
extern int penalty ;
extern int suc;
extern int end;

int timer2()
{
    int endtime = (unsigned)time(NULL);
        endtime += 15;
    

    while (1)
    {

        int starttime = (unsigned)time(NULL);
        int* pt = &time;

        Sleep(100);

        if (endtime >= starttime)
        {

            gotoxy(92, 3);
            printf("%d 초", endtime - starttime);
            Sleep(1000);
            gotoxy(92, 3);
            printf("       ");
            if (penalty == 1)
            {
                endtime -= 3;
                penalty = 0;
            }
        }

        if (endtime - starttime <= 0)
        {
            end = 1;
            system("cls");
            gotoxy(1, 1);
            printf("실패");
            gotoxy(1, 2);
            printf("ENTER을 눌러 다시시작하기");

            return 0;
        }
        if (suc == 1) {
            return 0;
        }

    }
}
