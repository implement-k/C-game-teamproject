#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<time.h>
#include <windows.h>
#include <stdlib.h>
#define X 6//각 구역마다 장애물 개수
int qqq;

void gotoxy(int x, int y);
int loading();
void start();
int main();
void map_line_return();
void map_line_senior();
void map_line_fresh();
int select(void);
int flag_rand(int flagx[2][2][3], int flagy[2][2][3]);
int input();
int difficulty(int *);
int move(int flagx[2][2][3], int flagy[2][2][3], int barrierx[2][2][X], int barriery[2][2][X], int* p, int* a, int* aa, int* aaa,int u);
void Enter();
int press();
void barrier_rand(int flagx[2][2][3], int flagy[2][2][3], int barrierx[2][2][X], int barriery[2][2][X]);
int timer();
int story();
int hint();
void con();
void f();