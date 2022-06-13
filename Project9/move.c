#include "team_5.h"
extern int penalty;
extern int suc;
int place;
extern int end;
extern int flu;

int move(int flagx[2][2][3], int flagy[2][2][3], int barrierx[2][2][X], int barriery[2][2][X], int* p, int* a, int* aa, int* aaa, int u)
{
    int x, y, x_0, y_0, ch=0;
    int i, ii, iii;
    int check[4] = { 1,1,1,1 };
    srand((unsigned int)time(NULL));
    x = 49;
    y = 16;
    x_0 = x;
    y_0 = y;
    *a = rand() % 2;
    *aa = rand() % 2;
    *aaa = rand() % 3;
    if (flagx[*a][*aa][*aaa] <= 49 && flagy[*a][*aa][*aaa] <= 17)//도서관
    {
        place = 1;
    }
    else if (flagx[*a][*aa][*aaa] <= 49)//기숙사
    {
        place = 2;
    }
    else if (flagy[*a][*aa][*aaa] <= 17)//새천년관
    {
        place = 3;
    }
    else //공학관
    {
        place = 4;
    }
    while (1) {
        if (penalty == 2) {
            x = x_0;
            y = y_0;
            penalty = 0;
        }
        if (end == 1) {
            end = 0;
            return 0;
        }
        for (i = 0; i < 2; i++) {
            for (ii = 0; ii < 2; ii++) {
                for (iii = 0; iii < X; iii++) {
                    if ((barrierx[i][ii][iii] == x) && (barriery[i][ii][iii] == y))
                        continue;
                } 
            }
        }
        gotoxy(x, y);
        printf("@\b");
        ch = _getch();
        if (ch == 224) {
            ch = _getch();
            gotoxy(x, y);
            printf(" \b");
            *p = 0;             //깃발안먹고 있을때의 값 0
           
            switch (ch) {
            case 72:
                for (i = 0; i < 2; i++) {
                    for (ii = 0; ii < 2; ii++) {
                        for (iii = 0; iii < X; iii++) {
                            if ((x == barrierx[i][ii][iii] && y == barriery[i][ii][iii] + 1) ||
                                (x == barrierx[i][ii][iii] + 1 && y == barriery[i][ii][iii] + 1))
                                check[0] = 0;
                        }
                    }
                }//check[]1일시 장애물 근처에 없음 0일시 장애물 근처에 있음
                if (check[0]) {
                    if (y > 6)
                        if (y == 18)
                            y -= 2;
                        else
                            y--;
                }
                check[0] = 1;
                break;
            case 80:
                for (i = 0; i < 2; i++) {
                    for (ii = 0; ii < 2; ii++) {
                        for (iii = 0; iii < X; iii++) {
                            if ((x == barrierx[i][ii][iii] && y == barriery[i][ii][iii] - 1) ||
                                (x == barrierx[i][ii][iii] + 1 && y == barriery[i][ii][iii] - 1))
                                check[1] = 0;
                        }
                    }
                }
                if (check[1]) {
                    if (y < 28)
                        if (y == 16)
                            y += 2;
                        else
                            y++;
                }
                check[1] = 1;
                break;
            case 75:
                for (i = 0; i < 2; i++) {
                    for (ii = 0; ii < 2; ii++) {
                        for (iii = 0; iii < X; iii++) {
                            if ((x == barrierx[i][ii][iii] + 2 && y == barriery[i][ii][iii]))
                                check[2] = 0;
                        }
                    }
                }
                if (check[2]) {
                    if (x > 1)
                        if (x == 51)
                            x -= 2;
                        else
                            x--;
                }
                check[2] = 1;
                break;
            case 77:
                for (i = 0; i < 2; i++) {
                    for (ii = 0; ii < 2; ii++) {
                        for (iii = 0; iii < X; iii++) {
                            if ((x == barrierx[i][ii][iii] - 1 && y == barriery[i][ii][iii]))
                                check[3] = 0;
                        }
                    }
                }
                if (check[3]) {
                    if (x < 99)
                        if (x == 49)
                            x += 2;
                        else
                            x++;
                }
                check[3] = 1;
                break;
            }
            ch = 0;
        }
        if ((x == flagx[*a][*aa][*aaa]) && (y == flagy[*a][*aa][*aaa])) {
            *p = 2;
            suc = 1;
            flu = 2;
            system("cls");
           
            return 0;
        }


        //정답깃발 먹었을시 값 2반환
        for (i = 0; i < 2; i++) {
            for (ii = 0; ii < 2; ii++) {
                for (iii = 0; iii < 3; iii++) {
                    if (x == flagx[i][ii][iii] && y == flagy[i][ii][iii]) {
                        *p = 1;
                        flagx[i][ii][iii] = 0;
                        flagy[i][ii][iii] = 0;
                    }
                }
            }
        }//깃발 먹었을시 값 1반환
        if (*p == 1) {
            hint();
            *p = 0;
        }
       
        if (ch == 27) {
            suc = 1;
            flu = 1;
            break;
        }


    }


}