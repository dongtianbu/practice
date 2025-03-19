//# define _CRT_SECURE_NO_WARNINGS
//#include "game_board.h"
////初始化棋盘
//void Initboard(char board[ROW][COL], int row, int col)//这里运用的宏来自头文件
//{
//	int i = 0;
//	for ( i = 0; i < ROW; i++)//先初始化每一行的数再初始化列
//	{
//		int j = 0;
//		for (j = 0; j < COL; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
////打印棋盘
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for ( i = 0; i < row; i++)//每一行打印的循环
//	{
//		int j = 0;
//		//打印数据
//		for (size_t j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		//打印分割信息
//		if (i < row - 1)//需要打印的分割线行数
//		{
//			for (size_t j = 0; j < col; j++)
//			{
//
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//		}
//		
//		printf("\n");
//	}
//}
//
////玩家下棋
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	//初始化下棋坐标
//	int x = 0;
//	int y = 0;
//	printf("你的回合：\n");
//	
//	//获取坐标
//	while (true)
//	{
//		printf("请输入你要下的的坐标:>");
//		//获取坐标
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标输入的范围是否正确
//		{
//			
//			
//			//判断是否已被下棋
//			if (board[x - 1][y - 1] == ' ')
//			{
//				//存储坐标
//				board[x - 1][y - 1] = 'O';
//				break;
//			}
//			else
//			{
//				printf("该位置已下了棋子，请重新选择：\n");
//				//break;
//			}
//		}
//		else
//		{
//			printf("请输入棋盘内的坐标：\n");
//		}
//	}
//}
//
////电脑下棋
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	printf("电脑的回合：\n");
//	int x = 0;
//	int y = 0;
//
//	while (true)
//	{
//		//设置电脑下棋位置
//		x = rand() % row;//对谁取余数，就生成 0~谁-1 的范围的余数
//		y = rand() % col;
//		//判断是否已被下棋
//		if (board[x][y] == ' ')
//		{
//			//存储坐标
//			board[x][y] = 'X';
//			break;
//		}
//	}
//}
//
////判断输赢
////1 平局
////0 继续
//int IsFull(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (size_t i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//char IsWin(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	//行
//	for (size_t i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//
//	//列
//	for (size_t j = 0; j < row; j++)
//	{
//		if (board[0][j] == board[1][j] && board[2][j] == board[1][j] && board[1][j] != ' ')
//		{
//			return board[0][j];
//		}
//	}
//
//	//对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[0][0];
//	}
//
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	//平局
//	if (IsFull(board, row, col))
//	{
//		return 'Q';
//	}
//
//	//继续
//	return 'C';
//}