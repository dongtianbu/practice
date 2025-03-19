# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
// 
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;//都为真则为真，否则为假
//	int d = a || b;//有一个为真则为真，否则为假
//	return 0;
//}


//
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;//从左到右算，a++为0，为假，遇上&&，后面的不算，所以b和d都不变
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	a = 1;
//	i = a++ || ++b || d++;//从左到右算，a++为1，为真，遇上||，后面的不算，所以b和d都不变
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	//&& 左边为假，右边不算
//	//|| 左边为真，右边不算
//
//	return 0;
//}


//条件操作符
//  语法：表达式1 ? 表达式2 : 表达式3
//  如果表达式1为真，则整个表达式的值为表达式2的值，否则为表达式3的值
//int main()
//{
//	int a = 3;
//	int b = 5;
//	b = a > 1 ? 100 : 200;
//	return 0;
//}


//逗号表达式
//从左到右依次计算，整个表达式的值为最后一个表达式的值
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//a>b为假，a = b + 10，a = 12，b = a + 1，b = 13
//	if (a > b, a = b + 10, a, b > a + 1)//真正起判断作用的是最后一个表达式，但是前面的计算不可忽略
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}


//下标引用
//int main()
//{
//	int arr[10] = { 0 };
//	arr[2] = 1;//下标引用操作符[]，操作数分别是arr和0
//	//当然，也可以写成*(arr + 2) = 1;
//	//arr是首元素的地址，+2表示到后两个地址，arr + 2是一个地址，*(arr + 2)是这个地址的值
//	2[arr] = 1;//这样写也是可以的，但是不建议这样写
//	return 0;
//}



//函数调用
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//函数调用操作符()，操作数分别是Add和(a, b)
//	printf("%d\n", sum);
//	return 0;
//}



//结构成员
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//void set_stu(struct Stu* ss)
//{
//
//	//strcpy((*ss).name, "张三");//strcpy是字符串拷贝函数，将后面的字符串拷贝到前面的字符串
//	//(*ss).age = 20;
//	//(*ss).score = 99.9;
//
//
//	//另一种写法
//	//->是结构体指针操作符，用于访问结构体指针的成员，因此不需要*
//	//ss->name等价于(*ss).name
//	strcpy(ss->name, "张三");//ss->name等价于(*ss).name
//	ss->age = 20;
//	ss->score = 99.9;
//
//}
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %.3lf\n", ss.name, ss.age, ss.score);
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//将s的地址传入set_stu函数，否则set_stu函数无法修改s的值，因为传入的是s的临时拷贝拷贝
//	print_stu(s);
//	return 0;
//}

//
//int main()
//{
//	//表达式求值的顺序一部分是由运算符的优先级决定的，一部分是由结合性决定的，有些表达式可能需要转换为其他类型来求值
//	//优先级：() > 单目操作符 > 算术操作符 > 关系操作符 > 逻辑操作符 > 赋值操作符
//	//结合性：左结合 > 右结合
//
//	int b = 2 + 2 + 2;//加法优先级相同，左结合，从左到右
//
//	//隐式类型转换
//	char a = 1;
//	char b = 2;
//	char c = a + b;//a和b都是char类型，char类型在计算时会提升为int类型，所以c是int类型
//
//	//整型提升是按照数据类型的符号位来提升的，如果是有符号数，那么高位补符号位，如果是无符号数，那么高位补0
//	char d = -1;
//	//d的补码是11111111，只有八个比特位
//	//整型提升时，高位补符号位，符号位是1，所以d提升为int类型后是11111111 11111111 11111111 11111111
//	//整型提升后的是补码
//
//	//无符号整型提升，高位补0
//	return 0;
//}



//如果某个操作符的操作数类型不一致，会进行算术转换，是向上转换的
//比如 int + double，int会转换为double，double类型是字节最大的，所以int会转换为double

//问题表达式1：
//a * b + c * d + e * f;
//无法确定其唯一计算路径，可能先a * b 然后c * d 然后这两个相加
//也可能先把乘的先算完再相加，如果abcdef之间的运算先后顺序会互相影响
//那么这两种计算路径会产生不一样的结果
//写代码过程中应该写能够明确唯一计算路径的代码

//
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer = 0;
//	answer = fun() - fun() * fun();//这里无法确定先算哪个fun，只知道先算*后算-，会导致结果不确定
//	printf("%d\n", answer);
//	return 0;
//}
