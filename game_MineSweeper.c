//# define _CRT_SECURE_NO_WARNINGS
//#include "game_MineSweeper.h"
//
//void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			if (board[i][j] != set)
//			{
//				board[i][j] = set;
//			}
//		}
//	}
//}
//
//void Displayboard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("-----ɨ����Ϸ-----\n");
//	for (i = 0; i <= row; i++)
//	{
//		printf("%d ", i);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
//
//void SetMine(char board_mine[ROWS][COLS], int row, int col,int mine)
//{
//	int count_mine = MINE;
//	int i = 0;
//	for (i = 0; i < MINE; i++)
//	{
//		int x = rand() % row + 1;
//		int y = rand() % col + 1;
//		if (board_mine[x][y] == '0')
//		{
//			board_mine[x][y] = '1';
//		}
//		else
//		{
//			i--;
//		}
//	}
//}
//
////����Χ�����ж���
//char count_mine(char board_mine[ROWS][COLS], int x,int y)
//{
//	//���ַ������У�ֱ�ӽ��ַ���ӿ��ܻᳬ��char���͵ķ�Χ
//	/*
//	return board_mine[x - 1][y - 1] +
//			board_mine[x - 1][y] +
//			board_mine[x - 1][y + 1] +
//			board_mine[x][y - 1] +
//			board_mine[x][y + 1] +
//			board_mine[x + 1][y - 1] +
//			board_mine[x + 1][y] +
//			board_mine[x + 1][y + 1] - 8*'0';
//	*/
//
//	int count = 0;
//	int i = -1;
//	for (i = -1; i <= 1; i++)
//	{
//		int j = -1;
//		for (j = -1; j <= 1; j++)
//		{
//			if (board_mine[x + i][y + j] == '1')
//			{
//				count++;
//			}
//		}
//	}
//	return count + '0';//�������ַ���ת��Ϊ�ַ�����
//
//}
//
//
//int Judge_win(char board_mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int is_win = 0;
//	int i = 0;
//	for (i = 1; i <= row; i++)
//	{
//		int j = 1; 
//		for (j = 1; j <= col; j++)
//		{
//			if (board_mine[i][j] == '1')
//			{
//				continue;
//			}
//			else if (show[i][j] == '*')
//			{
//				return 1;
//			}
//			else
//			{
//				return 0;
//			}
//		}
//	}
//}
//
////
////void show_other_position(char board_mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y, int former_x, int former_y)
////{
////	//��λ�ò�����
////	//��Χû����
////	//�Ź��Ĳ��ٱ���
////	
////	//���ӱ߽���
////	if (x >= row || y >= col || x < 0 || y < 0)
////	{
////		return;
////	}
////
////	int i = -1;
////	for (i = -1; i <= 1; i++)
////	{
////		int j = -1;
////		for (j = -1; j <= 1; j++)
////		{
////			if (i == 0 && j == 0)//��ֹ����ʱ����������
////			{
////				continue;
////			}
////			else
////			{
////				if (former_x == x + i && former_y == y + j)//����ǵ���ǰ��λ�þͲ����ж��ˣ�һ��������
////				{
////					continue;
////				}
////				if (board_mine[x + i][y + j] == '0')//�ж���Χ���Ƿ�����
////				{
////					show[x + i][y + j] = '0';//�����ף�չʾ����
////					show_other_position(board_mine, show, ROW, COL, x + i, y + j, x, y);//�ݹ��ж�
////				}
////				else
////				{
////					break;
////				}
////			}
////		}
////	}
////}
//
//void FindMine(char board_mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int mine)
//{
//	int x = 0;
//	int y = 0;
//	
//	int Is_win = row*col - mine;
//
//	//Judge_win(board_mine[ROWS][COLS], show[ROWS][COLS], row, col
//
//	while (Is_win)
//	{
//		printf("��Ҫ�����\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (show[x][y] != '*')
//			{
//				printf("�����Ź��ˣ�\n");
//			}
//			else
//			{
//				if (board_mine[x][y] != '1')//������
//				{
//					show[x][y] = count_mine(board_mine, x, y);
//					printf("%c ", show[x][y]);
//					//show_other_position(board_mine, show, ROW, COL, x, y, x, y, visited);
//					Displayboard(show, ROW, COL);
//					Displayboard(board_mine, ROW, COL);
//					Is_win--;
//				}
//				else
//				{
//					printf("���������ף�\n");
//					break;
//				}
//			}
//		}
//		else
//		{
//			printf("��������������ȷ�����갡��\n");
//		}
//	}
//	if (Is_win == 0)
//	{
//		printf("��ϲ�㣬ȫ���׶��Ѿ���������\n");
//		printf("�������ص���ʼ����\n");
//	}
//}
