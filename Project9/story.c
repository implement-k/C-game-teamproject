#include "team_5.h"

int story()
{
    int num = 1;
    char a = 0;

    char str1[] = "2022�� ���� �Ǳ����б� ���л��� ���\n";
    char str2[] = "3���� �г� �� �ϳ��� ������ �Ǳ����б� �ڼҿ������Բ� ������ �����ؾ��ϴµ�\n";
    char str3[] = "������ �Ǳ����б��ȿ��� �����ð����� �ڼҿ� �������� ã�� ������ �� �������ΰ��� �����̴�\n";
    char str4[] = "�Ǳ��� ����, ����� ���������� ������ ����� ������ �� �ݴ�� ����� ������ ���ز۵� ������ �����ִ�\n";
    char str5[] = "�׵��� ������ �����Ͽ� ���ѽð����� ������ �����Ͽ���.";
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
    printf("Enter�� ���� ��� ����...");
    while (a != '\n')
    {
        a = getchar();
    }
    Sleep(100);

    system("cls");
    return 0;
}

    

