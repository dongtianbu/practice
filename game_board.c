//# define _CRT_SECURE_NO_WARNINGS
//#include "game_board.h"
////��ʼ������
//void Initboard(char board[ROW][COL], int row, int col)//�������õĺ�����ͷ�ļ�
//{
//	int i = 0;
//	for ( i = 0; i < ROW; i++)//�ȳ�ʼ��ÿһ�е����ٳ�ʼ����
//	{
//		int j = 0;
//		for (j = 0; j < COL; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
////��ӡ����
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for ( i = 0; i < row; i++)//ÿһ�д�ӡ��ѭ��
//	{
//		int j = 0;
//		//��ӡ����
//		for (size_t j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		//��ӡ�ָ���Ϣ
//		if (i < row - 1)//��Ҫ��ӡ�ķָ�������
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
////�������
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	//��ʼ����������
//	int x = 0;
//	int y = 0;
//	printf("��Ļغϣ�\n");
//	
//	//��ȡ����
//	while (true)
//	{
//		printf("��������Ҫ�µĵ�����:>");
//		//��ȡ����
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж���������ķ�Χ�Ƿ���ȷ
//		{
//			
//			
//			//�ж��Ƿ��ѱ�����
//			if (board[x - 1][y - 1] == ' ')
//			{
//				//�洢����
//				board[x - 1][y - 1] = 'O';
//				break;
//			}
//			else
//			{
//				printf("��λ�����������ӣ�������ѡ��\n");
//				//break;
//			}
//		}
//		else
//		{
//			printf("�����������ڵ����꣺\n");
//		}
//	}
//}
//
////��������
//void ComputerMove(char board[ROW][COL], int row, int col)
//{
//	printf("���ԵĻغϣ�\n");
//	int x = 0;
//	int y = 0;
//
//	while (true)
//	{
//		//���õ�������λ��
//		x = rand() % row;//��˭ȡ������������ 0~˭-1 �ķ�Χ������
//		y = rand() % col;
//		//�ж��Ƿ��ѱ�����
//		if (board[x][y] == ' ')
//		{
//			//�洢����
//			board[x][y] = 'X';
//			break;
//		}
//	}
//}
//
////�ж���Ӯ
////1 ƽ��
////0 ����
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
//	//��
//	for (size_t i = 0; i < row; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//		{
//			return board[i][1];
//		}
//	}
//
//	//��
//	for (size_t j = 0; j < row; j++)
//	{
//		if (board[0][j] == board[1][j] && board[2][j] == board[1][j] && board[1][j] != ' ')
//		{
//			return board[0][j];
//		}
//	}
//
//	//�Խ���
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
//	//ƽ��
//	if (IsFull(board, row, col))
//	{
//		return 'Q';
//	}
//
//	//����
//	return 'C';
//}