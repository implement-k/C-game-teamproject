#include "team_5.h"
int penalty = 0;
int suc;
int end;
int flu=0;
int timer()
{
    int endtime = (unsigned)time(NULL);
    if (qqq == 1) {
        endtime += 30;
    }
    else if (qqq == 2) {
        endtime += 20;
    }
    else
        endtime += 15;
 
    char c;

    while (1)
    {

        int starttime = (unsigned)time(NULL);
        int* pt = &time;

        Sleep(100);

        if (endtime >= starttime)
        {
           
            gotoxy(92, 3);
            printf("%d √ ", endtime - starttime);
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
            flu = 1;
            system("cls");
            f();
              
            return 0;
        }
        if (suc == 1) {
            suc = 0;
            return 0;
        }

    }
}
