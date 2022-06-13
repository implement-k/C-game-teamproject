#include "team_5.h"

void textcolor(int colorNum) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

int flag_rand(int flagx[2][2][3], int flagy[2][2][3])
{                     //flag(xory)(0,0),(1,0),(0,1),(1,1)순으로 기숙사,공학관, 도서관 새천년관

    int i,ii,iii;
    int a, aa;
    int b;

    for (i = 0; i < 2; i++) {
        for (ii = 0; ii < 2; ii++) {
            for (iii = 0; iii < 3; iii++) {
                flagx[i][ii][iii] = 1+ i * 50 + rand() % 48;
                flagy[i][ii][iii] = 6+ ii *12  + rand() % 11;
                //각 구역별로 3개 랜덤지정
                for (a = 0; a < iii; a++) {
                    for (aa = a+1; aa < iii; aa++) {
                        if ((flagx[i][ii][a] == flagx[i][ii][aa]) && (flagy[i][ii][a] == flagy[i][ii][aa])) {
                            iii--;
                            continue;
                        }
                    }
                }//랜덤으로 했는데 겹칠시 다시 지정
                gotoxy(flagx[i][ii][iii], flagy[i][ii][iii]);
                do {
                    b = rand() % 14 + 1;
                } while (b == 5 || b == 4 || b == 12);          //장애물색깔(빨간색계열)은 나오지 않게
                textcolor(b);
                printf("¶");
                textcolor(15);                                  //글씨색 하얀색으로 초기화
            }
        }
     
    }

   
}