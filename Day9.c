# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char arr1[] = "Welcome to bit";//14
//	char arr2[] = "##############";//14

	//int size = sizeof(arr2) / sizeof(arr2[1]);//����sizeof�������С��ʱ��Ὣ�ַ���ĩβ��\0Ҳ���� ����ټ���Ǳ��ʱ��Ҫ-2
	//����Ҳ����ֱ����strlenֱ�����ַ����ĳ��ȣ������������\0
	//size = strlen(arr1) - 1; 

	//printf("size%d", sizeof(arr1));
	//int left = 0;
	//int right = size - 2;
	//int i = 0;
	//int j = 0;
	//while (i < size )
	/* {
		for (j = 0; j < 15; j++)
			printf("%c", arr2[j]);
		printf("\n");
		arr2[left] = arr1[left];
		left += 1;
		arr2[right] = arr1[right];
		right -= 1;
		i++;
	}
	
	return 0;
}
*/

//�Ľ�����
#include <windows.h>//����sleep������Ҫ������ͷ�ļ�
#include <stdlib.h>//system����
//int main()
//{
//	char arr0[] = "welcome to bit!!!!";
//	char arr1[] = "##################";
//	int left = 0;
//	int right = strlen(arr0) - 1;
//	while (left <= right + 1)
//	{
//		printf("%s", arr1);
//		printf("\n");
//		Sleep(555);//���ߴ��룬��ͣ555����
//		system("cls");//system��һ���⺯��������ִ��ϵͳ�������������Ҫִ�е�����������cls��ִ�������Ļ������
//		arr1[left] = arr0[left];
//		arr1[right] = arr0[right];
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//int main()
//{
	//���������Լ�д�Ĵ���
	//int password = 0;
	//int i = 0;
	//int arr0[] = {123456, 123};
	//int user = 0;
	//int arr1[] = {88888};
	//printf("arr0[0]=%d\n", arr0[0]);
	//printf("arr0=%d\n", arr0);
	//for (i = 0; i < 3; i++)
	//{
	//	printf("����������û�����");
	//	scanf("%d", &user);
	//	//printf("password=%d\n", password);
	//	if (user == arr0[0])
	//	{
	//		printf("������������룺\n");
	//		scanf("%d", &password);//�������������ǵ�ַ�����Բ���&����
	//		if (password == arr1[0])
	//		{
	//			printf("��¼�ɹ�������");
	//			break;
	//		}
	//		else
	//		{
	//			printf("������󣬻���%d�λ���!!", 2 - i);
	//			continue;
	//		}
	//	}
	//	else
	//	{
	//		printf("�û�����ƥ�䣡����������������û�������(�㻹��%d�λ��ᣡ��)", 2 - i);
	//		continue;
	//	}
	//}


	//strcmp(char1,char2) �Ƚ��ַ����ĺ�������������ַ�����ȣ��ͻ᷵��һ��0.
	//�������������Ҫ#include <stding.h>
//	int i = 0;
//	char password[100] = {"a"};//����������abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("�������������룺");
//		scanf("%s", password);//���鱾����ǵ�ַ������ط��Ͳ���Ҫ&
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//		else
//		{
//			printf("������󣬻���%d�λ��ᣡ", 2 - i);
//			continue;
//		}
//	}
//	if (i == 3)
//	{
//		printf("���������꣬���˳�����");
//	}
//
//	return 0;
//}


//
////һ��С��Ϸ��������
////�����������һ�����������������
//void menu()//����һ���˵�����
//{
//	printf("********************************\n");
//	printf("***********��������Ϸ*************\n");
//	printf("***********1.����Ϸ**************\n");
//	printf("***********0.�˳���Ϸ************\n");
//	printf("********************************\n");
//}
//
//#include <stdlib.h>//srand��������
//#include <time.h>//time��������
//void game()
//{
//	int input = 0;
//	int random_num = 0;
//	//int rand(void)�����᷵��һ�����ֵ�����СΪ0~RAND_MAX(32767)
//	//������Ҫ����srand���������ֵ��㣬����ÿһ�������������ͬ
//	//void srand(unsigned int seed)
//	//��srand()��������Ҫ����һ���޷������͵����������Ϊһ��������һ���������㣬��Ҫ��ʵ���������
//	//��������ʱ���������time_t time(time_t *time)����������������ʱ������һ��ʱ�������������һ��ָ�����,time_tʵ���Ͼ������ͣ����������Ƿ���һ��ʱ���
//
//	RAND_MAX;
//	random_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("��������µ�����:>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´��ˣ��������\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С�ˣ��������\n");
//		}
//		else
//		{
//			printf("�¶��ˣ���Ϸ����\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//(unsigned int)��ʾǿ��ת�����ͣ���Ϊtime�������ص���time_t���͵��������ﲻ��Ҫ��time�����������������NULL����ʾ����Ҫ����
//	//��srand�������������Ϊ��ֻ��Ҫ����һ�ξͿ�����
//	int option = 1;
//	//��дһ���˵�
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &option);
//		switch (option)
//		{
//		case 1:
//			printf("��ʼ����Ϸ��\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("��������ѡ��\n");
//			break;
//		}
//	} while (option);
//	return 0;
//}

//goto���,����һ�δ����ѭ������������ʹ�÷�������
//int main()
//{
//again:
//	printf("nihao");
//	printf("nihao");
//	printf("nihao");
//	goto again;//again����һ�����ⶨ��Ĵʿ����滻��������
//	//goto ���ܿ纯����Ծ
//	return 0;
//}


//дһ���ػ�����
//���ÿ⺯��system()ִ��ϵͳ����
//system()�������һ���ַ���������Ҫִ�е�����
#include <string.h>//strcmp����
//int main()
//{
//	//char�����Ǵ洢�����ַ��ģ��磺char input = '1';
//	//Ҫ�洢�ַ�����Ҫ���ַ�����
//	char input[20] = { 0 };//�ַ�����
//	system("shutdown -s -t 666");
//	printf("��ע�⣬��ĵ��Խ�����666���ڹػ������룺fucku��ȡ���ػ�:>");
//again:
//	scanf("%s", input);
//	printf("input=%s\n", input);
//	if (strcmp(input, "fucku") == 0 )//strcmp�ж������ַ����Ĵ�С����ȷ���0
//	{
//		printf("ȡ���ػ���\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("����������:>");
//		goto again;
//	}
//	return 0;
//}
