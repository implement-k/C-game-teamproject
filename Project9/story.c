#include "team_5.h"

int story()
{
    int num = 1;
    char a = 0;

    char str1[] = "2022년 현재 건국대학교 재학생인 당신\n";
    char str2[] = "3개의 학년 중 하나를 선택해 건국대학교 박소영교수님께 과제를 제출해야하는데\n";
    char str3[] = "광할한 건국대학교안에서 마감시간내로 박소영 교수님을 찾아 제출할 수 있을것인가가 관건이다\n";
    char str4[] = "건국대 내엔, 당신의 과제제출을 도와줄 사람도 있지만 그 반대로 당신을 방해할 방해꾼도 곳곳이 숨어있다\n";
    char str5[] = "그들을 적절히 구별하여 제한시간내로 과제를 제출하여라.";
    gotoxy(0, 0);
    while (num)
    {
        int i;
        Sleep(100);
       
        for (i = 0; i < sizeof(str1); i = i + 2)
        {
            printf("%c%c", str1[i], str1[i + 1]);
            Sleep(100);
            if (i == sizeof(str1) - 1)
                printf("\n");
        }
        for (i = 0; i < sizeof(str2); i = i + 2)
        {
            printf("%c%c", str2[i], str2[i + 1]);
            Sleep(100);
            if (i == sizeof(str2) - 1)
                printf("\n");
        }
        for (i = 0; i < sizeof(str3); i = i + 2)
        {
            printf("%c%c", str3[i], str3[i + 1]);
            Sleep(100);
            if (i == sizeof(str3) - 1)
                printf("\n");
        }
        for (i = 0; i < sizeof(str4); i = i + 2)
        {
            printf("%c%c", str4[i], str4[i + 1]);
            Sleep(100);
            if (i == sizeof(str4) - 1)
                printf("\n");
        }
        for (i = 0; i < sizeof(str5); i = i + 2)
        {
            printf("%c%c", str5[i], str5[i + 1]);
            Sleep(100);
            if (i == sizeof(str5) - 1)
                printf("\n\n\n");
        }
        num--;

    }
    Sleep(100);
    printf("Enter를 눌러 계속 진행...");
    while (a != '\n')
    {
        a = getchar();
    }
    Sleep(100);

    system("cls");
    return 0;
}

    

