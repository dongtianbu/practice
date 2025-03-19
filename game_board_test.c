//# define _CRT_SECURE_NO_WARNINGS
//
//#include "game_board.h"//游戏头文件
//
////三子棋游戏
//
//void menu()
//{
//	//printf("\n");
//	printf("*************************\n");
//	printf("*********1.play**********\n");
//	printf("*********0.exit**********\n");
//	printf("*************************\n");
//}
//
//void game()
//{
//	char ret = '0';
//	char board[ROW][COL] = {0};//为了方便以后修改棋盘的大小，这里运用宏来确定数组大小
//	Initboard(board, ROW, COL);//初始化棋盘 
//	DisplayBoard(board, ROW, COL);//打印棋盘
//
//	while (true)
//	{
//		PlayerMove(board, ROW, COL);//玩家下棋
//		//判断输赢
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, ROW, COL);//打印棋盘
//		ComputerMove(board, ROW, COL);
//		//判断输赢
//		ret = IsWin(board, ROW, COL); if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, ROW, COL);//打印棋盘
//	}
//	if (ret == 'O')
//	{
//		printf("玩家赢，游戏结束。\n");
//		char board[ROW][COL] = { 0 };
//	}
//	else if (ret == 'X')
//	{
//		printf("电脑赢，游戏结束。\n");
//		char board[ROW][COL] = { 0 };
//	}
//	else
//	{
//		printf("平局。\n");
//		char board[ROW][COL] = { 0 };
//	}
//	DisplayBoard(board, ROW, COL);
//}
//
//
////请告诉我在C语言中display(board[ROW][COL], ROW, COL)与display(board, ROW, COL)的区别，其中display是我自定义的函数，ROW和COL是两个宏
////第一个写法实际上传的是二维数组里面的一个元素，第二个传递的是一个二维数组
//
////请告诉我在C语言中定义函数时void DisplayBoard(char board[ROW][COL], int row, int col)中的ROW有什么意义，它是我定义的一个宏，board是我创建的一个二维数组
////更明确地表示二维数组的形状。
//
//int main()
//{
//	srand((unsigned)time(NULL));//设置随机数的起点
//	int input_option = 0;
//	do
//	{
//		menu();//主菜单
//		printf("Please choose:>");
//		scanf("%d", &input_option);
//		switch (input_option)
//		{
//		case 1:
//			//printf("playing games");
//			game();
//			break;
//		case 0:
//			printf("exit");
//			break;
//		default:
//			printf("please type the correct number:>");
//			break;
//		}
//	} while (input_option);
//	return 0;
//}