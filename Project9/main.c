#include "team_5.h"
int x;
extern int flu;
int main()
{

    int flagx[2][2][3];
    int flagy[2][2][3];
    int barrierx[2][2][X];
    int barriery[2][2][X];
    int p;
    int ch;   //��߸Ծ����� ��ȯ
    int a, aa, aaa; //������ ��ġ
    srand(time(NULL));
    loading();                        //�ε�ȭ��
    start();   //ENTERŰ ������ ����
    Sleep(1000);
    story();

    do {
        system("cls");
        difficulty(&x);                  //���̵� ����ȭ��(xŰ�� ���̵� ��ȯ)
        flu = 0;
        if (x == 1) {
            qqq = 1;
            map_line_senior();            //���г�
            flag_rand(flagx, flagy);      //��߷���
            barrier_rand(flagx, flagy, barrierx, barriery);
            Sleep(1000);
            _beginthreadex(NULL, 0, timer, 0, 0, NULL);
            move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);            //������ �Լ�
            if (flu == 2) {
                flu = 0;
                qqq = 2;
                system("cls");
                gotoxy(19, 14);
                printf("���ϵ帳�ϴ�! �������� ã�� %d�� ���� ���⿡ �����Ͽ� 3�� �ڿ� ���� �ܰ�� �Ѿ�ϴ�.", x);
                Sleep(3000);
                system("cls");
                map_line_return();            //���л�
                flag_rand(flagx, flagy);
                barrier_rand(flagx, flagy, barrierx, barriery);
                Sleep(1000);
                _beginthreadex(NULL, 0, timer, 0, 0, NULL);
                move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);
                if (flu == 2) {
                    flu = 0;
                    qqq = 3;
                    system("cls");
                    gotoxy(19, 14);
                    printf("���ϵ帳�ϴ�! �������� ã�� %d�� ���� ���⿡ �����Ͽ� 3�� �ڿ� ���� �ܰ�� �Ѿ�ϴ�.", x + 1);
                    Sleep(3000);
                    system("cls");
                    map_line_fresh();            //������
                    flag_rand(flagx, flagy);
                    barrier_rand(flagx, flagy, barrierx, barriery);
                    Sleep(1000);
                    _beginthreadex(NULL, 0, timer, 0, 0, NULL);
                    move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);
                    if (flu == 2)
                    {
                        flu = 0;
                        system("cls");
                        con();
                        Sleep(3000);
                        system("cls");
                        gotoxy(20, 16);
                        printf("3�� �� ���̵�â���� ���ư��ϴ�.");
                        Sleep(3000);
                        system("cls");
                        continue;
                    }
                    else if (flu == 1)
                    {
                        flu = 0;
                        continue;
                    }
                }
                else if (flu == 1) {
                    flu = 0;
                    continue;
                }
                else if (flu == 1) {
                    flu = 0;
                    continue;

                }
            }

        }
        else if (x == 2) {
            qqq = 2;
            map_line_return();            //���л�
            flag_rand(flagx, flagy);
            barrier_rand(flagx, flagy, barrierx, barriery);
            Sleep(1000);
            _beginthreadex(NULL, 0, timer, 0, 0, NULL);
            move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);
            if (flu == 2) {
                flu = 0;
                qqq = 3;
                system("cls");
                gotoxy(19, 14);
                printf("���ϵ帳�ϴ�! �������� ã�� %d�� ���� ���⿡ �����Ͽ� 3�� �ڿ� ���� �ܰ�� �Ѿ�ϴ�.", x);
                Sleep(3000);
                system("cls");
                map_line_fresh();            //������
                flag_rand(flagx, flagy);
                barrier_rand(flagx, flagy, barrierx, barriery);
                Sleep(1000);
                _beginthreadex(NULL, 0, timer, 0, 0, NULL);
                move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);
                if (flu == 2)
                {
                    flu = 0;
                    system("cls");
                    con();
                    Sleep(3000);
                    system("cls");
                    gotoxy(20, 16);
                    printf("3�� �� ���̵�â���� ���ư��ϴ�.");
                    Sleep(3000);
                    system("cls");
                    continue;
                }
                else if (flu == 1)
                {
                    flu = 0;
                    continue;
                }
            }
            else if (flu == 1) {
                flu = 0;
                continue;
            }
        }
        else {
            qqq = 3;
            map_line_fresh();            //������
            flag_rand(flagx, flagy);
            barrier_rand(flagx, flagy, barrierx, barriery);
            Sleep(1000);
            _beginthreadex(NULL, 0, timer, 0, 0, NULL);
            move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);
            if (flu == 2)
            {
                flu = 0;
                system("cls");
                con();
                Sleep(3000);
                system("cls");
                gotoxy(20, 16);
                printf("3�� �� ���̵�â���� ���ư��ϴ�.");
                Sleep(3000);
                system("cls");
                continue;
            }
            else if (flu == 1)
            {
                flu = 0;
                continue;
            }
        }
        system("cls");
    } while (1);

    return 0;
}