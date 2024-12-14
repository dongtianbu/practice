# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写一个函数判断一年是不是闰年
//打印1000~2000年之间的闰年
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


//写一个函数，实现一个整型有序数组的二分查找
//数组传参传递的实际上是首元素的地址而不是整个数组
//int binary_search(int arr[], int input, int size)//形参arr看上去是数组，本质上是指针
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
//	printf("请输入你要查找的数字：");
//	scanf("%d", &key);
//	int ret = binary_search(arr, key, size);
//	if (ret == -1)
//	{
//		printf("\n找不到该数字。\n");
//	}
//	else
//	{
//		printf("找到该数字，下标是：%d\n", ret);
//	}
//	return 0;
//}

//布尔类型 bool
//bool 用来表示变量的真假
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

//写一个函数，调用一次num就增加一
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

//函数的嵌套，函数可以嵌套调用，但不可以嵌套定义
//int add(int x, int y)
//{
//	return x + y;
//	int sub(int a, int b)//在函数里面定义函数，这种写法是错误的
//	{
//		return a - b;
//	}
//}

//链式访问
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	printf("%d\n ", strlen("abcdef"));//链式访问，把一个函数的返回值作为另一个函数参数。
//	printf("%d", (printf("%d", printf("%d", 43))));//结果：4321  链式访问，printf函数返回的是打印的字符的个数
//}
////函数不写返回类型的时候，默认返回int
//
//int Add(int a, int b)
//{
//	printf("nihao\n");
//}
//上面的代码在一些编译器上返回的是函数在执行过程中最后一条命令的执行结果。
//main函数不需要参数
//但是main函数有三个参数
//int main(int argc, char* argv[], char* envp)


//函数的声明和定义
//如果把函数定义再main()之后，需要进行函数的声明
//函数声明一般放在有文件中
//
//int add(int x, int y);//函数声明
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

#include "add.h"//声明函数

int main()
{
	
	return 0;
}