#include "team_5.h"

void map_line_fresh()
{
	int i, a;

	gotoxy(0, 0);
	for (i = 1; i <= 5; i++) {
		printf("#");
		for (a = 1; a <= 87; a++)
			printf(" ");
		printf("#");
		for (a = 1; a <= 11; a++)
			printf(" ");
		printf("#\n");
	}
	for (i = 1; i <= 25; i++) {
		printf("#");
		for (a = 1; a <= 49; a++)
			printf(" ");
		printf("|");
		for (a = 1; a <= 49; a++)
			printf(" ");
		printf("#\n");
	}

	gotoxy(0, 17);
	printf("#");
	for (i = 1; i <= 49; i++)
		printf("-");
	printf("|");
	for (i = 1; i <= 49; i++)
		printf("-");
	printf("#");
	gotoxy(0, 0);
	for (i = 1; i <= 101; i++)
		printf("#");

	gotoxy(0, 29);
	printf("#");
	printf("********");
	for (i = 1; i <= 83; i++)
		printf("#");
	printf("********");
	//이름 난이도 올라갈수록 제거
	gotoxy(0, 5);
	printf("#");
	printf("********");
	for (i = 1; i <= 81; i++)
		printf("#");
	printf("**********");
	//이름

	for (i = 1; i <= 60; i++)
		printf("\n");


	gotoxy(92, 2);
	printf("시 간");
}