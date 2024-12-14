# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
//void test()//这里加个void表示这个函数没有返回值。如果写成test(void)表示这个函数不需要传入任何参数。
//{
//	static int a = 1;//static修饰局部变量，局部变量出了作用域，不销毁。本质上，static修饰局部变量时改变了变量的存储位置。
//	//内存会被划分成栈区，堆区，静态区。局部变量存放在栈区，栈区进入创建变量，出了栈区就销毁。静态变量放在静态区，静态变量的生命周期就是程序的生命周期。
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}               
//	return 0;
//}
//全局变量具有链接属性，
	//static修饰全局变量时，这个全局变量的外部链接属性就变成了内部链接属性，其他源文件（.c）就不能使用这个全局变量
//extern int g_val;//g_val这个全局变量在Day3,但是它被static修饰了，因此会报错
//int main(void)
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static修饰函数与修饰全局变量一样，也是将其外部连接属性变为内部连接属性。

//register - 寄存器
//电脑上的存储设备：寄存器(集成在CPU上)，高速缓存(cache)，内存，硬盘（从右到左速度越来越快，空间越来越小，造价越来越高）
//
//int main(void)
//{
//	//寄存器变量
//	register int num1 = 892;//建议num1放在寄存器中，不一定会放入，是否放入取决于编译器。
//	return 0;
//}

//
////#define定义常量，define不是关键字，是预处理指令
//#define MAX 1000
////#define 定义宏
//#define ADD(x, y) ((x) + (y))//#define 宏名（宏参数） 宏体		宏参数无类型，宏可以用来完成替换
//int main(void)
//{
//	printf("%d\n", MAX);
//	int arr[MAX] = { 0 };
//	int n = MAX;
//	printf("%d\n", n);
//
//	int a = 54;
//	int b = 6;
//	int c = ADD(a, b);//这里相当于： int c = ((a) + (b));
//
//	return 0;
//}


//
////电脑中的内存会被划分为一个个的内存单元，一个内存单元的大小是1byte,每一个内存单元都有编号
////32位的电脑有2^32个地址序列，则能管理2^32个字节，经过计算可以得到32位电脑最多管理4GB的内存。
//int main()
//{
//	int a = 10;//int类型占4个字节。这句就是向内存申请4个字节，存储a这个变量。每个字节都有地址，而a的地址就是这四个字节的首字节的地址。
//	printf("%p\n", &a);//%p意思是以地址格式打印数据
//	int* p = &a;//把地址a存在指针变量p里面。int说明p指向的对象a是int类型。而*说明p是指针。
//	//p就是指针变量。内存单元有编号，而编号就是地址，地址也被称为指针。存放指针或者地址的变量就是指针变量。换句话说，指针变量就是用来存放地址的。
//	*p = 77;//*是解引用操作符，意思是通过p中存放的地址，找到p指向的对象，*p就是p指向的对象。这里*p=a
//	printf("%d\n", a);//77
//	//指针就是地址，指针变量用来存放地址。口语上说p是指针实际上说p是指针变量。
//	return 0;
//}

//指针的大小
//int main(void)
//{
//	//不管是什么类型的指针，都是在创建指针变量。
//	//指针变量是用来存放地址的，一个指针变量的大小取决于一个地址存放需要多大空间。32位机器上的地址：32bit位  - 4byte  64位机器：64bit位 - 8byte
//	printf("%d\n", sizeof(char*));//8
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//
//int main()
//{
//	int* p1, * p2, * p3;//当定义多个指针变量时需要每个变量都有一个*
//	return 0;
//}



//struct结构体，结构体是吧一些单一类型组合在一起的做法。比如：书是由：书名+作者+出版社+定价+书号

//学生
//struct Stu//定义一个类型Stu,定义此类型不占空间，只有通过此类型创建变量是才占用空间
//{
//	//以下是成员变量
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
////这里定义的Stu就像int float的用法:struct Stu c
//
//void print(struct Stu* ps)
//{
//	printf("name:%s age:%d sex:%s tale:%s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//上面的操作符：结构体指针变量->成员名
//	printf("name:%s age:%d sex:%s tale:%s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = {"Mark",18,"male","12345678910"};//拿Stu这个类型创建了一个结构体变量s，并且给这个变量进行初始化
//	//访问内容：结构体对象.成员名
//	printf("name:%s age:%d sex:%s tale:%s\n", s.name, s.age, s.sex, s.tele);//打印结构体变量s的内容
//	print(&s);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b); 
//	printf("%d %d", a / b, a % b);
//	return 0;
//}
