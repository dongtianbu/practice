# define _CRT_SECURE_NO_WARNINGS
//C语言中you五种语句：
//1.表达式语句
//2.函数调用语句
//3.控制语句
//4.复合语句
//5.空语句
//C语言是结构化的程序设计语言：1.顺序结构 2.选择结构 3.循环结构
//C语言中有九种控制语句：
	/*1.条件控制语句，也叫分支语句：if语句   switch语句
	2.循环执行语句：do while语句 while语句 for语句
	3.转向语句：break语句、goto语句、continue语句、return语句*/

//if语句
#include <stdio.h>
//int main()
//{
//	int age = 18;
//	printf("请输入你的年龄：\n");
//	scanf("%d", &age);
//
//	if (age < 18)//if括号里面的值为真就会执行。这里后面不能有;0表示假。非0表示真
//	{//if如果单分支就不用加{}
//		printf("你是未成年\n");
//	}
//	else if (age >= 18 && age < 28)//这里不能写成else if (18 <= age < 28)，左边18 <= age 为假，变成了0 < 28,最后的结果就为真，导致错误
//	{
//		printf("小灯！\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("中灯！！");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("老灯！！！");
//	}
//	else
//	{
//		printf("老东西给我爆金币！\n");
//	}
//
//	return 0;
//}

//if和else如果不带{}都只能控制一条语句
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//		if (b == 1)//与这个匹配
//			printf("a");
//	else//else会与最近的if匹配，而不是看和谁对齐就和谁匹配
//			printf("b");
//	return 0;
//}

//
//1.变量需要有意义，规范
//2.空格，空行，换行
//
//int main()
//{
//	int num = 3;
//	if (5 == num)//这种写法和if (num == 5)是一样的，但是这个写法如果漏了一个等号会报错，而if (num == 5) 漏等号不会报错，这样可以防止漏等号
//	{
//		printf("xixi\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 2;
//	printf("你输入的数字是：%d\n", a);
//	if (b == 0)
//	{
//		printf("偶数");
//	}
//	else
//	{
//		printf("奇数");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	printf("1-100之间的奇数是：");
//	while (i < 100)
//	{
//		i++;
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//switch语句
//switch(整型表达式)
//{
//	语句项;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//根据switch()里面的表达式匹配相应的case执行。表达式必须是整型。
//	{
//	//case后面可以放字符，因为字符也是整型，它存储时是以ASCII码值存储的。
//	case 1:
//		printf("Monday");
//		break;//跳出，停止继续执行
//	case 2:
//		printf("Thuseday");
//		break;
//	case 3:
//		printf("day");
//		break;
//	case 4:
//		printf("Thuseday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Staday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default://当所有值都不匹配时执行这里
//		printf("请你输入1~7的整数\n");
//		break;
//	}
//	//case 整型常量表达式:
//	//	语句;
//	return 0;
//}
// 
// 
// 
// 牛客网上的练习题
//int main()
//{
//	//飞机头
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//飞机身
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//飞机尾
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2; k++)
//		{
//			printf("*  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}