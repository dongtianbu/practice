# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//函数的递归：程序调用自身的编程技巧称为递归
//递归作为一种算法在程序设计语言中广泛运用。一个过程或函数在其定义或说明中有直接或间接调用自身的。
//一种方法，它通常把一个大型复杂的问题转化为一个与原问题相似的小规模的问题来求解
//只需要少量的程序就可以描述出解题过程所需要的多次重复计算，大大较少了程序的代码量

//递归的条件:
//1.存在限制条件，当满足限制条件的时候，不在递归
//2.每次递归调用之后逐渐接近这个必要条件

//stack overflow栈溢出
//每一次函数的调用都会在栈区申请空间  栈区放有局部变量和函数的形参
//函数栈帧的创建和申请

//
//void print(unsigned int input)
//{
//	if (input > 9)
//	{
//		print(input / 10);//函数递归
//	}
//	printf("%u ", input % 10);
//}
//int main()
//{
//	//例子，接收一个无符号整型，按照顺序打印它的每一位
//	// 
//	// tips:获取一个数的首位用整除 /10 获取一个数的最后一位用取余数 %10
//	// 
//	//%d 打印有符号整型（有正负数）
//	//%u 打印无符号整型
//	unsigned int input = 0;
//	scanf("%u", &input);
//	print(input);
//	
//	return 0;
//}

//
////例子，编写函数不允许创建临时变量，求字符串的长度。
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//递归
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abc";
//	//字符串的传参与数组非常类似，它传的是首字符的地址，因为字符串在内存中也是连续存放的
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//递归与迭代
//int factorial(int n)
//{
//	if (n <= 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n*factorial(n - 1);//迭代实现
//	}
//}
//int main()
//{
//	int n = 6;
//	printf("请输入你要求的数：");
//	scanf("%d", &n);
//	int ret = factorial(n);
//	printf("%d", ret);
//	return 0;
//}

//求第n个斐波那契数（效率较低）
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);//函数递归，但是效率较低，因为每计算一个数都要计算它的前两个数，前两个数的其中一个又要往前算前两个，再不断增加运算次数。
//	}
//}

//求第n个斐波那契数（高效）  非递归
//当我们发现递归效率过低或栈溢出就可以采用非递归
//递归的层次太深必然会出现栈溢出的情况
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	while(n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}