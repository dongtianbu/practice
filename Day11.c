# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//int is_leap_year(int x)
//{
//	int flag = 0;
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		int leap_year = is_leap_year(i);
//		if (leap_year != 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ���
//���鴫�δ��ݵ�ʵ��������Ԫ�صĵ�ַ��������������
//int binary_search(int arr[], int input, int size)//�β�arr����ȥ�����飬��������ָ��
//{
//	int left = 0;
//	int right = size - 1;
//	
//	while (left <= right)
//	{
//		int middle = left + (right - left) / 2;
//		if (input > arr[middle])
//		{
//			left = middle + 1;
//		}
//		else if (input < arr[middle])
//		{
//			right = middle - 1;
//		}
//		else
//		{
//			return middle;
//			break;
//		}
//	}
//	if (left > right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int key = 2;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("��������Ҫ���ҵ����֣�");
//	scanf("%d", &key);
//	int ret = binary_search(arr, key, size);
//	if (ret == -1)
//	{
//		printf("\n�Ҳ��������֡�\n");
//	}
//	else
//	{
//		printf("�ҵ������֣��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

//�������� bool
//bool ������ʾ���������
#include <stdbool.h>
//bool judge(int x)
//{
//	if (x > 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	int i = 1;
//	if (judge(i))
//	{
//		printf("ture");
//	}
//}

//дһ������������һ��num������һ
//void Add(int* x)
//{
//	(*x)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}

//������Ƕ�ף���������Ƕ�׵��ã���������Ƕ�׶���
//int add(int x, int y)
//{
//	return x + y;
//	int sub(int a, int b)//�ں������涨�庯��������д���Ǵ����
//	{
//		return a - b;
//	}
//}

//��ʽ����
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n ", strlen("abcdef"));//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ������������
//	printf("%d", (printf("%d", printf("%d", 43))));//�����4321  ��ʽ���ʣ�printf�������ص��Ǵ�ӡ���ַ��ĸ���
//}
////������д�������͵�ʱ��Ĭ�Ϸ���int
//
//int Add(int a, int b)
//{
//	printf("nihao\n");
//}
//����Ĵ�����һЩ�������Ϸ��ص��Ǻ�����ִ�й��������һ�������ִ�н����
//main��������Ҫ����
//����main��������������
//int main(int argc, char* argv[], char* envp)


//�����������Ͷ���
//����Ѻ���������main()֮����Ҫ���к���������
//��������һ��������ļ���
//
//int add(int x, int y);//��������
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	add(a, b);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}

#include "add.h"//��������

int main()
{
	
	return 0;
}