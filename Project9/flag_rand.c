#include "team_5.h"

void textcolor(int colorNum) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

int flag_rand(int flagx[2][2][3], int flagy[2][2][3])
{                     //flag(xory)(0,0),(1,0),(0,1),(1,1)������ �����,���а�, ������ ��õ���

    int i,ii,iii;
    int a, aa;
    int b;

    for (i = 0; i < 2; i++) {
        for (ii = 0; ii < 2; ii++) {
            for (iii = 0; iii < 3; iii++) {
                flagx[i][ii][iii] = 1+ i * 50 + rand() % 48;
                flagy[i][ii][iii] = 6+ ii *12  + rand() % 11;
                //�� �������� 3�� ��������
                for (a = 0; a < iii; a++) {
                    for (aa = a+1; aa < iii; aa++) {
                        if ((flagx[i][ii][a] == flagx[i][ii][aa]) && (flagy[i][ii][a] == flagy[i][ii][aa])) {
                            iii--;
                            continue;
                        }
                    }
                }//�������� �ߴµ� ��ĥ�� �ٽ� ����
                gotoxy(flagx[i][ii][iii], flagy[i][ii][iii]);
                do {
                    b = rand() % 14 + 1;
                } while (b == 5 || b == 4 || b == 12);          //��ֹ�����(�������迭)�� ������ �ʰ�
                textcolor(b);
                printf("��");
                textcolor(15);                                  //�۾��� �Ͼ������ �ʱ�ȭ
            }
        }
     
    }

   
}