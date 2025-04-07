# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//野指针：指针指向位置是随机的
//1.未初始化形成
//2.指针越界访问数组
//3.指针指向空间释放

//int main()
//{
//	int* p;
//	*p = 10;
//	//这个p就是野指针，原因是p未正确初始化，使得其存放的是一个随机值
//
//	int arr[10] = {0};
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = 1;
//		p++;
//		//这里会进行十一次循环访问arr十一次，在第十一次访问时越界导致野指针
//	}
//
//	//空指针
//	//指针不指向任何一个空间
//
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a; // 返回局部变量的地址
//}
//
//int main()
//{
//	int* p = test();
//	printf("HaHa\n");
//	/* 这里的指针 p 指向的空间已经被释放，形成了野指针。
//    原因是 a 是 test 函数的局部变量，当 test 函数执行完毕后，
//    a 的内存空间被释放。随后的 printf 函数调用可能会覆盖
//    test 函数栈帧中的数据，从而改变 p 所指向位置的值。 */
//	printf("%d", *p); // 未定义行为，可能会打印垃圾值或导致程序崩溃
//	
//	return 0;
//}

//避免野指针的方法
//1.初始化指针
//2.指针指向空间释放时及时置为NULL
//3.避免越界访问数组
//4.避免指针指向局部变量
//5.检查 指针有效性

//关于内存的销毁
//实际上就是将内存还给操作系统，程序失去对内存的控制权


//指针运算：
//int main()
//{
//	//指针+-整数
//	int arr[10] = {10};
//	int* p = arr;
//	printf("%d\n", *p); // 10
//	p++;
//	printf("%d\n", *p); // 0
//
//	//2.指针-指针
//	//只有指向同一块空间的指针才能进行相减
//	//指针相减的绝对值结果是两个指针之间的元素个数
//
//	int* p1 = arr;
//	int* p2 = arr + 5;
//	printf("%d\n", p2 - p1); // 5
//	return 0;
//
//}

////指针相减的运用,模拟strlen函数
//int my_strlen(char* str)
//{
//	char* start = str; // 保存起始地址
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//末地址和首地址相减
//}
//
//
//int main()
//{
//	//字符串当参数传参时，传的是首地址
//	//指针相减运用：
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	//指针的关系运算
//	int arr[10] = { 0 };
//	int* p = arr;
//	int* end = arr + 10;
//	int i = 0;
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	for (p = arr; p < end; p++)//在数组中，指针与指针可以比较内存的先后的
//	{
//		*p = 1;
//	}
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//可以通过指针来访问数组
//	int arr[10] = { 0 };
//	int* p = 0;
//	p = arr; // p指向数组的首地址
//	for (size_t i = 0; i < 10; i++)
//	{
//		printf("%p------%p\n", &arr[i], p + i);
//	}
//
//	return 0;
//}

//二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;
//	//这里int* 表示指向的对象的类型，后面的*表示ppa是一个指针
//  //二级指针就是存放一级指针的地址的，但不是地址的地址
//
//	return 0;
//}

//指针数组
//存放指针的数组
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//
//	int* parr[10] = { pa, pb, pc };
//
//	//可以用指针数组来模拟二维数组
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,2,3,4 };
//	int arr3[4] = { 3,2,3,4 };
//	int* parr1[3] = { arr1, arr2, arr3 };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(parr1[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//结构体的声明
//结构体是一些值的集合，用来存放不同类型的数据，结构体的成员可以是不同类型的数据
int main()
{
	//结构体的声明
	struct Student
	{
		int id;
		char name[20];
		float score;
	};
	//sturt 是一个关键字，表示结构体的定义
	//Student 是结构体的名字
	//这里的结构体的声明其实相当于创建了一个模版，实际不占用内存空间
	//只有当我们创建结构体变量时，才会占用内存空间

	//如果是这样命名的话：
	struct Student2
	{
		int id;
		char name[20];
		float score;
	}stu1, stu2;
	//那么stu1和stu2都是结构体变量，但是这里的结构体变量是没有初始化的
	//还可以：
	struct Student stu3 = { 1, "zhangsan", 99.5 };

	//结构体可以嵌套
	struct people
	{
		int id;
		float f;
		struct Student stu; // 结构体嵌套
	};

	struct people p1 = { 1, 3.14f, { 1, "lisi", 99.5 } };
	//嵌套结构体的初始化需要再加一层大括号

	//结构体访问
	//可以通过.来访问结构体的成员，此时左边是结构体变量，右边是成员名
	printf("id = %d\n", p1.id);
	//还可以用指针来访问结构体的成员
	struct people* p = &p1;
	printf("id = %d\n", p->id);

	return 0;
}