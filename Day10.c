# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//c语言中有库函数和自定义函数两类函数	
	//c语言中常用的库函数有：
	//IO函数
	//字符操作函数
	//内存操作函数
	//时间/日期函数
	//数学函数
	//其他库函数

//写一个函数，交换两个变量的值
//void swap(int x, int y)//自定义函数这里的事形式参数
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = x;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 1;
//	printf("改变前的变量值：a=%d b=%d", a, b);
//	swap(a, b);//这里的a和b是实际参数
//	printf("改变后的变量值：a=%d b=%d", a, b);
//	//如果采取以上的写法，会发现自定义函数swap()无法实现功能。原因：swap()在执行时是将传入的实际参数临时拷贝一份放入形式参数中的，形式参数在用完后会被销毁，而形式参数又是独立创建出来的，其内存地址与实际参数地址不同，因此这个函数无法对实际参数a和b产生影响。
//
//	return 0;
//}



//有关内存地址，运用指针来解决
//void swap(int* x, int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main(void)
//{
//	int a = 888;
//	int b = 666;
//	printf("变换前a=%d b=%d", a, b);
//	swap(&a, &b);
//	printf("变换后a=%d b=%d", a, b);
//	return 0;
//}
//

//什么时候需要传地址？
//答：需要对实际参数做修改的时候
//以下这个add函数就不会对实际参数做出改变，因此不需要传地址
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	add(a, b);
//	return 0;
//}


//函数的参数：实际参数 形式参数
//实参：真实传递给函数的参数，实参可以是：常量 变量 表达式 函数
//无论是参数是何种类型的变量，在进行函数调用时，他们都必须有确定的值。
//形参：是函数名后括号中的变量，因为形式参数在函数被调用中才会被实例化，所以叫形参，在调用完后会自动销毁。
//形参实例化之后可以认为它是实参的拷贝。

//函数调用
//传值调用：上例中swap(a, b)就是传值调用，形参和实参占有不同的内存，对形参的修改不会对实参造成影响
//传地址调用：上例中swap(&a, &b)就是传地址调用，使函数内部可以直接操作函数外部的变量。

//打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int num = 100;
//	printf("100~200之间的素数是：");
//	for (i = 0; i < 100; i++)
//	{
//		if (num % 2 != 0)
//		{
//			printf("%d ", num);
//			num++;
//		}
//		else
//		{
//			num++;
//		}
//	}
//	return 0;
//}



//判断100~200之间的素数的个数。
//int main()
//{
//	int i = 100;
//	int j = 200;
//	int count = 0;
//	int k = 0;
//
//	for (i = 100; i < 200; i++)
//	{
//		int flag = 1;//flag是1表示素数
//		for (j = 2; j <= i - 1; j++)//将这里的i-1改为sqrt(i) 也可以 
//		{
//			if (i % j == 0)//被整除，不是素数
//			{
//				flag = 0;//改为0
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}

//以下是运用函数判断
#include <math.h>
//int is_prime(int x)
//{
//	int i0 = 0;
//	int flag = 1;
//	for (i0 = 2; i0 <= sqrt(x); i0++)//之所以通过判断到 sqrt(num) （ num 的平方根）能减少循环次数，是因为对于一个非素数 n ，它可以分解成两个因数 a 和 b （ n = a * b ），假设 a <= b ，那么必然存在 a <= sqrt(n) ， b >= sqrt(n) 。
//	{
//		if (x % i0 == 0)//如果不是素数
//		{
//			flag = 0;
//		}
//	}
//	if (flag == 1)
//	{
//		printf("%d ", x);
//	}	
//	return flag;
//}
//int main()
//{
//	int i = 100;
//	int j = 200;
//	int count = 0;
//	int n = 0;
//
//	for (i = 101; i < 200; i++)
//	{
//		count += is_prime(i);
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}