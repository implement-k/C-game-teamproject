#include "team_5.h"

void barrier_rand(int flagx[2][2][3], int flagy[2][2][3], int barrierx[2][2][X], int barriery[2][2][X])
{
    int i, ii, iii;
    int a, aa;

    for (i = 0; i < 2; i++) {
        for (ii = 0; ii < 2; ii++) {
            for (iii = 0; iii < X; iii++) {
                barrierx[i][ii][iii] = 1 + i * 51 + rand() % 46;
                barriery[i][ii][iii] = 6 + ii * 13 + rand() % 9;
                //°¢ ±¸¿ªº°·Î 4°³ ·£´ıÁöÁ¤
                for (a = 0; a < iii; a++) {
                    for (aa = a+1; aa < iii; aa++) {
                        if (barrierx[i][ii][a] == barrierx[i][ii][aa] && barriery[i][ii][a] == barriery[i][ii][aa])
                            iii--; continue;
                    }
                }//·£´ıÀ¸·Î Çß´Âµ¥ °ãÄ¥½Ã ´Ù½Ã ÁöÁ¤
                for (a = 0; a < 3; a++) {
                    for (aa = 0; aa < iii; aa++) {
                        if (flagx[i][ii][a] == barrierx[i][ii][aa] && flagy[i][ii][a] == barriery[i][ii][aa])
                            iii--; continue;
                    }
                }//±ê¹ß°ú °ãÄ¡´Â °æ¿ì
                gotoxy(barrierx[i][ii][iii], barriery[i][ii][iii]);
                textcolor(4);  
                printf("¢Ì");
                textcolor(15);          //±Û¾¾»ö ÇÏ¾á»öÀ¸·Î ÃÊ±âÈ­
            }
        }
    }
    
}