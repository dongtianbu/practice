//# define _CRT_SECURE_NO_WARNINGS
//
//#include "game_board.h"//��Ϸͷ�ļ�
//
////��������Ϸ
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
//	char board[ROW][COL] = {0};//Ϊ�˷����Ժ��޸����̵Ĵ�С���������ú���ȷ�������С
//	Initboard(board, ROW, COL);//��ʼ������ 
//	DisplayBoard(board, ROW, COL);//��ӡ����
//
//	while (true)
//	{
//		PlayerMove(board, ROW, COL);//�������
//		//�ж���Ӯ
//		ret = IsWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, ROW, COL);//��ӡ����
//		ComputerMove(board, ROW, COL);
//		//�ж���Ӯ
//		ret = IsWin(board, ROW, COL); if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, ROW, COL);//��ӡ����
//	}
//	if (ret == 'O')
//	{
//		printf("���Ӯ����Ϸ������\n");
//		char board[ROW][COL] = { 0 };
//	}
//	else if (ret == 'X')
//	{
//		printf("����Ӯ����Ϸ������\n");
//		char board[ROW][COL] = { 0 };
//	}
//	else
//	{
//		printf("ƽ�֡�\n");
//		char board[ROW][COL] = { 0 };
//	}
//	DisplayBoard(board, ROW, COL);
//}
//
//
////���������C������display(board[ROW][COL], ROW, COL)��display(board, ROW, COL)����������display�����Զ���ĺ�����ROW��COL��������
////��һ��д��ʵ���ϴ����Ƕ�ά���������һ��Ԫ�أ��ڶ������ݵ���һ����ά����
//
////���������C�����ж��庯��ʱvoid DisplayBoard(char board[ROW][COL], int row, int col)�е�ROW��ʲô���壬�����Ҷ����һ���꣬board���Ҵ�����һ����ά����
////����ȷ�ر�ʾ��ά�������״��
//
//int main()
//{
//	srand((unsigned)time(NULL));//��������������
//	int input_option = 0;
//	do
//	{
//		menu();//���˵�
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