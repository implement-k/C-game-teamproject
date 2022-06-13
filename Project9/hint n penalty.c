#include "team_5.h"
extern int penalty;
extern int place;
extern int x;
int hint() {
	int a;
	int b;
	a = rand();
	b = a % 2;
	char c[][30] =
	{
		"일감호에 빠졌다!",
		"강의실에서 떨어졌다!",
		"선배가 술마시자고 끌고갔다!",
		"만쥬에게 붙잡혔다!",
		"길을 잃었다!",
		"과제를 두고왔다!"
	};

	gotoxy(2, 1);
	printf("                                             ");
	gotoxy(2, 2);
	printf("                                             ");

	if (b == 1)//벌칙
	{
		b = rand();
		b = a % 6;
		if (b == 0) {
			gotoxy(2, 1);
			printf("%s", c[0]);
			gotoxy(2, 2);
			printf("3초 감소");
			penalty = 1;
		}
		else if (b == 1) {
			gotoxy(2, 1);
			printf("%s", c[1]);
			gotoxy(2, 2);
			printf("3초 감소");
			penalty = 1;
		}
		else if (b == 2) {
			gotoxy(2, 1);
			printf("%s", c[2]);
			gotoxy(2, 2);
			printf("3초 감소");
			penalty = 1;

		}
		else if (b == 3) {
			gotoxy(2, 1);
			printf("%s", c[3]);
			gotoxy(2, 2);
			printf("3초 감소");
			penalty = 1;
		}
		else if (b == 4) {
			gotoxy(2, 1);
			printf("%s", c[4]);
			gotoxy(2, 2);
			printf("처음으로");
			penalty = 2;

		}
		else if (b == 5) {
			gotoxy(2, 1);
			printf("%s", c[5]);
			gotoxy(2, 2);
			printf("처음으로");
			penalty = 2;
		}
	}


	else//힌트
	{
		b = rand() % 3;
		gotoxy(2, 1);
		printf("                                               ");
		gotoxy(2, 2);
		printf("                                               ");
		gotoxy(2, 1);
		if (x == 1)//고학년
		{
			if (place == 1)//도서관
			{
				if (b == 0)
				{
					printf("우리 학교에서 책이 가장 많은 곳 입니다.");
				}
				else if (b == 1)
				{
					printf("출입하는 데 학생증이 필요합니다. ");
				}
				else if (b == 2)
				{
					printf("내부에 K-CUBE가 있습니다. ");
				}

			}
			else if (place == 2)//기숙사
			{
				if (b == 0)
				{
					printf("내부에 atm이 설치되어 있습니다.");
				}
				else if (b == 1)
				{
					printf("주로 타지역에서 온 학생이나 외국인 유학생들이 많이 사용하는 곳 입니다. ");
				}
				else if (b == 2)
				{
					printf("교내에서 침구류가 가장 많은 곳 입니다. ");
				}
			}
			else if (place == 3)//새천년관
			{
				if (b == 0)
				{
					printf("건물에 건국대학교라고 쓰여져있습니다. ");
				}
				else if (b == 1)
				{
					printf(" c프로그래밍 기말고사 실시되는 곳입니다.");
				}
				else if (b == 2)
				{
					printf("내부에 atm이 설치되어 있습니다. ");
				}
			}
			else if (place == 4)//공학관
			{
				if (b == 0)
				{
					printf("c프로그래밍 수업이 진행되는 곳입니다. ");
				}
				else if (b == 1)
				{
					printf("  21번 건물입니다.");
				}
				else if (b == 2)
				{
					printf("공과대 학생들이 수업을 많이 듣는 곳입니다. ");
				}
			}
		}
		else if (x == 2)//복학생
		{
			if (place == 1)//도서관
			{
				if (b == 0)
				{
					printf("건물 앞에 동상이 있습니다.  ");
				}
				else if (b == 1)
				{
					printf("  내부에 식당이 설치되어 있습니다. ");
				}
				else if (b == 2)
				{
					printf("장소 이름에 'ㅅ'이 들어갑니다. ");
				}
			}
			else if (place == 2)//기숙사
			{
				if (b == 0)
				{
					printf("내부에 atm이 설치되어 있습니다  ");
				}
				else if (b == 1)
				{
					printf("  장소의 글자 수가 3글자 입니다. ");
				}
				else if (b == 2)
				{
					printf("장소 이름에 'ㅅ'이 들어갑니다. ");
				}
			}
			else if (place == 3)//새천년관
			{
				if (b == 0)
				{
					printf("내부에 식당이 설치되어 있습니다.");
				}
				else if (b == 1)
				{
					printf("  장소 이름에 'ㅅ'이 들어갑니다 ");
				}
				else if (b == 2)
				{
					printf("장소의 글자 수가 4글자 입니다.");
				}
			}
			else if (place == 4)//공학관
			{
				if (b == 0)
				{
					printf(" 내부에 K-CUBE가 있습니다. ");
				}
				else if (b == 1)
				{
					printf(" 여러 동으로 나누어져 있습니다");
				}
				else if (b == 2)
				{
					printf("장소의 글자 수가 3글자 입니다.");
				}
			}

		}
		else if (x == 3)//새내기
		{
			if (place == 1)//도서관
			{
				if (b == 0)
				{
					printf(" 프린터기가 설치 되어 있습니다.  ");
				}
				else if (b == 1)
				{
					printf(" 장소의 글자 수가 3글자 입니다.");
				}
				else if (b == 2)
				{
					printf("장소 이름에 'ㅅ'이 들어갑니다.");
				}
			}
			else if (place == 2)//기숙사
			{
				if (b == 0)
				{
					printf(" 건물번호가 두자리 수 입니다.  ");
				}
				else if (b == 1)
				{
					printf(" 장소의 글자 수가 3글자 입니다.");
				}
				else if (b == 2)
				{
					printf("장소 이름에 'ㅅ'이 들어갑니다.");
				}
			}
			else if (place == 3)//새천년관
			{
				if (b == 0)
				{
					printf(" 건물번호가 두자리 수 입니다. ");
				}
				else if (b == 1)
				{
					printf("  프린터기가 설치 되어 있습니다.");
				}

			}
			else if (place == 4)//공학관
			{
				if (b == 0)
				{
					printf(" 프린터기가 설치 되어 있습니다.  ");
				}
				else if (b == 1)
				{
					printf("건물번호가 두자리 수 입니다. ");
				}
				else if (b == 2)
				{
					printf("장소의 글자 수가 3글자 입니다.");
				}
			}
		}
	}
}
