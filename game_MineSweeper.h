#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

//����ඨ������������Ϊ�˶�һȦ���������̱߱ߵ��ж�
#define ROWS ROW + 2
#define COLS COL + 2

#define MINE 77

void Initboard(char board_mine[ROWS][COLS], int rows, int cols, char set);

void Displayboard(char board_mine[ROWS][COLS], int row, int col);

void SetMine(char board_mine[ROWS][COLS], int row, int col, int mine);

void FindMine(char board_mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int mine);

