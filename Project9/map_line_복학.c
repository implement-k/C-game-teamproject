#include "team_5.h"

void map_line_return()
{
	int i,a;								//for값의 변수
	char* name[8] = {
		"(기숙사)","********"
		,"(공학관)","********"
		,"(도서관)","********"
		,"(새천년관)","**********" };		//지역이름과 *****의 배열함수
	int m[4];								//랜덤값 저장
		
	gotoxy(0, 0);
	for (i = 1; i <= 5; i++) {
		printf("#");
		for (a = 1; a <= 87; a++)
			printf(" ");
		printf("#");
		for (a = 1; a <= 11; a++)
			printf(" ");
		printf("#\n");
	}										//윗부분 세로줄
	for (i = 1; i <= 25; i++) {
		printf("#");
		for (a = 1; a <= 49; a++)
			printf(" ");
		printf("|");
		for (a = 1; a <= 49; a++)
			printf(" ");
		printf("#\n");
	}										//아랫부분 세로줄								

	gotoxy(0, 17);
	printf("#");
	for (i = 1; i <= 49; i++)
		printf("-");
	printf("|");
	for (i = 1; i <= 49; i++)
		printf("-");
	printf("#");							//구역 중간 가로줄
	gotoxy(0, 0);
	for (i = 1; i <= 101; i++)
		printf("#");						//1번째 가로줄

	for (i = 0, a = 0; i < 4; i++) {
		m[i] = rand() % 2;
		if (a == 2) {
			for (; i < 4; i++)
				m[i] = 1;
		}
		if (m[i] == 0)
			a++;
	}
	
	gotoxy(0, 29);
	printf("#");
	printf("%s",*(name + m[0]));
	for (i = 1; i <= 83; i++)
		printf("#");
	printf("%s", *(name + 2 + m[1]));
	gotoxy(0, 5);
	printf("#");
	printf("%s", *(name + 4 + m[2]));
	for (i = 1; i <= 81; i++)
		printf("#");
	printf("%s", *(name + 6 + m[3]));
	//이름

	for (i = 1; i <= 60; i++)
		printf("\n");

	gotoxy(92, 2);
	printf("시 간");
}