//# define _CRT_SECURE_NO_WARNINGS
//#include "game_MineSweeper.h"
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*******1.ɨ��***********\n");
//	printf("*******0.�˳���Ϸ*******\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int visited[ROWS][COLS] = { 0 };
//
//	//��������
//	char board_mine[ROWS][COLS] = { 0 };//�����
//	char show[ROWS][COLS] = { 0 };//���������Ϣ
//	//��ʼ������
//	Initboard(board_mine, ROWS, COLS, '0');
//	Initboard(show, ROWS, COLS, '*');
//	//����
//	SetMine(board_mine, ROW, COL, MINE);
//	//չʾ����
//	Displayboard(board_mine, ROW, COL);
//	Displayboard(show, ROW, COL);
//	//�������
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
//		printf("��Ҫ���");
//		scanf("%d", &input);
//		printf("\n");
//		switch (input)
//		{
//		case 1:
//			//printf("ɨ��\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("��Ҫ��ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}