//# define _CRT_SECURE_NO_WARNINGS
//#include "game_MineSweeper.h"
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*******1.扫雷***********\n");
//	printf("*******0.退出游戏*******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int visited[ROWS][COLS] = { 0 };
//
//	//创建棋盘
//	char board_mine[ROWS][COLS] = { 0 };//存放雷
//	char show[ROWS][COLS] = { 0 };//存放排雷信息
//	//初始化棋盘
//	Initboard(board_mine, ROWS, COLS, '0');
//	Initboard(show, ROWS, COLS, '*');
//	//放雷
//	SetMine(board_mine, ROW, COL, MINE);
//	//展示棋盘
//	Displayboard(board_mine, ROW, COL);
//	Displayboard(show, ROW, COL);
//	//玩家排雷
//	FindMine(board_mine, show, ROW, COL, MINE);
//	
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("你要干嘛？");
//		scanf("%d", &input);
//		printf("\n");
//		switch (input)
//		{
//		case 1:
//			//printf("扫雷\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("不要乱选！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}