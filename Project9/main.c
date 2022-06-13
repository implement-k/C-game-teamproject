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
    int ch;   //깃발먹었는지 반환
    int a, aa, aaa; //정답깃발 위치
    srand(time(NULL));
    loading();                        //로딩화면
    start();   //ENTER키 누르면 시작
    Sleep(1000);
    story();

    do {
        system("cls");
        difficulty(&x);                  //난이도 선택화면(x키로 난이도 반환)
        flu = 0;
        if (x == 1) {
            qqq = 1;
            map_line_senior();            //고학년
            flag_rand(flagx, flagy);      //깃발랜덤
            barrier_rand(flagx, flagy, barrierx, barriery);
            Sleep(1000);
            _beginthreadex(NULL, 0, timer, 0, 0, NULL);
            move(flagx, flagy, barrierx, barriery, &p, &ch, &a, &aa, &aaa, x);            //움직임 함수
            if (flu == 2) {
                flu = 0;
                qqq = 2;
                system("cls");
                gotoxy(19, 14);
                printf("축하드립니다! 교수님을 찾아 %d차 과제 제출에 성공하여 3초 뒤에 다음 단계로 넘어갑니다.", x);
                Sleep(3000);
                system("cls");
                map_line_return();            //복학생
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
                    printf("축하드립니다! 교수님을 찾아 %d차 과제 제출에 성공하여 3초 뒤에 다음 단계로 넘어갑니다.", x + 1);
                    Sleep(3000);
                    system("cls");
                    map_line_fresh();            //새내기
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
                        printf("3초 뒤 난이도창으로 돌아갑니다.");
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
            map_line_return();            //복학생
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
                printf("축하드립니다! 교수님을 찾아 %d차 과제 제출에 성공하여 3초 뒤에 다음 단계로 넘어갑니다.", x);
                Sleep(3000);
                system("cls");
                map_line_fresh();            //새내기
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
                    printf("3초 뒤 난이도창으로 돌아갑니다.");
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
            map_line_fresh();            //새내기
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
                printf("3초 뒤 난이도창으로 돌아갑니다.");
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