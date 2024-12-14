# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//写一个函数求两个整数的较大值
/*
Max(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main(void)
{
	printf("输入两个整数，求他们的较大值:\n");
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", Max(n1, n2));
	return 0;
}
*/

//操作符：单目操作符 sizeof
/*
int main()
{
	int arr[18] = {0};
	printf("%zd\n", sizeof(arr));//arr有十八个元素，每个占4byte,总共4*18=72
	printf("%d\n", sizeof(arr[0]));//单个元素 4
	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));//18


	int a = 98;
	int b = 327;
	b = a++;//a++ 后置++，是先使用后++
	//b = a		a = a + 1
	printf("%d\n", a);//99
	printf("%d\n", b);//98

	int c = 238;
	int d = 37;
	d = ++c;//前置++，先++后使用
	//b = b + 1		c = b
	printf("%d\n", c);//239
	printf("%d\n", d);//239
	//前置--与后置--用法同理

	return 0;
}
*/


//关系操作符：
//>
//>=
//<
//<=
//!=	不等于
//==	等于
//
//int main(void)
//{
//	int a = 293;
//	if (a = 29)//只要满足if (ture)就会继续向下执行，这里是给a赋值成29,a非0就是真，就会执行
//	{
//		printf("真");//会打印这个
//	}
//	else
//	{
//		printf("假");//除非上面是if (a == 29)，==是判断等于，就会为假，打印这个
//	}
//	return 0;
//}

//
//int main()
//{
//	//&& 逻辑与 - 并且
//	//|| 逻辑或 - 或者
//
//	int a = 0;
//	int b = 3;
//	if (a && b)//&&要满足全真才会执行
//	{
//		printf("全真才真");
//	}
//	else
//	{
//		printf("一假则假");
//	}
//
//	return 0;
//}


//条件操作符（三目操作符）：exp1 ? exp2 : exp3 --> 如果exp1为真，则要exp2,否则要exp3
/*
int main(void)
{
	//int a = 384;
	//int b = 261;
	//int r = a > b ? a : b;
	//int p = a < b ? a : b;
	//printf("%d\n", r);//384
	//printf("%d\n", p);//261


	//		//逗号表达式：exp1,exp2,exp3,......,expN。逗号隔开的一串表达式，其特点是从左向右依次计算，整个表达式的结果是最后一个表达式的结果。
	//int a = 18;
	//int b = 4;
	//int c = 23;
	//int p = (c = a - 2, a = b + c, c - 3);
	//printf("%d\n", p);//13


	//		//下标引用、函数调用和结构成员操作符
	//		//  []  ()  .  ->
	//int arr[] = { 1,2,3,4 };
	//arr[3] = 346;//[]就是下标引用操作符，arr和3就是[]的操作数
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);
	//int z = Min(a, b);//这里的圆括号就是函数调用操作符
	//printf("x*y=%d\n", Min(a, b));

	//常见关键字：auto break case char const continue default do double else 
	//auto就是自动生成变量，自动销毁变量，在局部变量中一般省略。
	//break跳出循环		for  while  do while
	//case常与switch一起使用
	//continue用于循环
	//do while
	//enum struct union （枚举-结构体-共用体）
	//extern 声明外部符号
	//goto 跳转语句
	//register  寄存器
	//signed 有符号的
	//static 静态的 类似register
	//typedef 类型重命名
	//unsigned 无符号的
	//void 无 用于函数的返回类型
	//while
	
		//1.变量名字必须是字母、数字、下划线组成，不能有特殊字符，不能以数字开头。变量名不能是关键字。

	
	return 0;
}


Min(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		int z = x;
	}
	else
	{
		int z = y;
	}
	return z;
}

*/
//关键词typedef和static
	//typedef是类型定义，应该理解为类型重命名
//
//typedef unsigned int uint;//将unsigned这个类型重命名为uint。只能将类型重命名。
//
//int main(void)
//{
//	unsigned int a = 0;
//	uint b = 0;//与上面179行是一样的，但是名字简化了
//
//	return 0;
//}
//
//

static int g_val = 2024;

