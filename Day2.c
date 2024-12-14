# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//双引号引起的叫做字符串  "abcdef"  C语言没有字符串类型。字符串全名叫字符串字面值。
//
//int main()
//{
//	char arr1[] = "abcdef";//字符串末尾有隐藏的\0
//	char arr2[] = { 'a','b','c','d','e','f','\0'};//末尾添加了\0，打印识别到会自动停止,如果没有，打印时会持续往后找，直到某个位置有\0才停止
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	int len = strlen("abcdef");//求字符串长度函数，求得值后会有一个返回值。string length，这个函数也是库函数。需要#include <string.h>
//	printf("%d\n", len);
//
//	printf("%s\n", arr1);//%s是字符类型
//	printf("%s\n", arr2);
//
//
//	return 0;
//}


//
//转义字符
//	常见转义字符：
//	\?	书写连续多个问号时使用，防止被解析成三字母词，用的较少。
//	\'	表示字符常量'
//	\"	表示一个字符串内部的双引号
//	\\	表示一个反斜杠，防止它被解释为一个转义序列符
//	\a	警告字符，蜂鸣
//	\b	退格符
//	\f	进纸符
//	\n	换行
//	\r	回车
//	\t	水平制表符 相当于键盘上的Tab键
//	\v	垂直制表符
//	\ddd	ddd表示1-3个八进制数字。如\130 X
//	\xdd	dd表示2个十六进制数字。如\x30 0

/*	%d	打印整型
	%c	打印字符
	%s	打印字符串
	%f	打印float类型数据
	%lf	打印double类型数据
	%zu 打印sizeof的返回值
*/

/*
int main()
{

	printf("%s\n", "(are you ok??)");//有些编译器会将??)解析为]，为了防止此解析，可以写成\?\?)

	printf("%c\n", '\'');//当想打印单引号'时，加上\转义，才能被识别为’		\"的作用同理
	printf("%s\n", "\"");
	printf("%s\n", "abcd\\0ef");//要打印abcd\0ef，但是\0是字符串结束标识符，打印遇到会停止，在\0前面加一个\，变为\\0，可将\0前面的\变为普通反斜杠，而非\0的反斜杠
	printf("c:\\test\\test.c");//同理，打印路径时，若遇到了\t，\t是转义字符，需要再在前面加一个\，防止\t被解析为转义字符
	printf("\a");//打印时会有蜂鸣声
	printf("%c\n", '\130');//转义字符也是字符，把斜杠后面的八进制转为对应的十进制后对应的ASCII码对应的符号
	printf("%c\n", '\x60');//将写个后面的十六进制转化为十进制后对应的ASCII码的符号
	printf("%d\n", strlen("qwer t"));//空格也算字符，输出6
	printf("%d\n", strlen("c:\test\628\test.c"));//输出结果为14。\t为一个,\62为一个，这两个都是转义字符，算一个字符。

	return 0;
}
*/

//if 分支选择语句

/*
int main()
{
	int input = 0;
	printf("加入双非大学\n");
	printf("要不要好好学习？（1/0）\n");
	scanf("%d", &input);
	if (input == 1)	
	{
		printf("拿到好OFFER\n");
	}
	else
	{
		printf("滚去捡垃圾\n");
	}

	return 0;
}
*/

/*
int main()
{
	int line = 0;
	printf("开始学习编程");
	while (line <= 20000)
	{
		printf("天天写代码：%d\n", line);
		line = line + 1;
	}
	if (line >= 20000)
	{
		printf("你已经成为大牛！！！\n");
	}
	else
	{
		printf("你还需要好好加油！\n");
	}
}
*/


//函数
//定义一个求两个数的和的函数。
/*
int Add(int x, int y) //返回值是整数，要加int
{
	return x + y;
}
int main()
{
	int n1 = 0;
	int n2 = 0;
	printf("请你输入两个数进行求和:\n");
	scanf("%d\n%d", &n1, &n2);
	int sum = Add(n1, n2);
	printf("%d\n", sum);
	return 0;
}
*/


//数组，数组可以放一组相同类型的值
/*
int main()
{
	int arr1[10] = { 1,2,3,4,5 ,6,7,8,9,10};//数组中每一个元素都有下标，第一个是0，比如如果要访问第二个元素，就是arr[1] 
	char ch[] = "abfd";//中括号前面的是数组名，数组名前面的是数组类型，比如此处是char类型的数组。
	double d[] = { 1.8 };//这个是double类型的数组。
	printf("%d\n", arr1[1]);
	//如果想全部打印出来，可以用循环打印
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr1[i]);
		i++;
	}
	return 0;
}
*/

//C语言中的算术操作符：+ - * / %(取模)
/*
int main()
{
	int a = 7 / 2; //这个除号/得到的是商，不管余数

	//除号  /  两端都是整数会进行整数的除法，两端至少有一个浮点数就会进行浮点数的除法。
	float c = 7.0 / 2.0;
	printf("%.1f\n", c);// %.1f表示小数点后打印一位

	int b = 7 % 2; //取模操作符的两端只能是整数
	printf("%d\n", a);//因此这里会输出3
	printf("%d\n", b);
	return 0;

}
*/
//移位操作符： <<  >>
//位操作符：&		^	

//赋值操作符：=	+=	*=	/=	&=	^=	>>=	<<=
/*
int main(void)
{
	int a = 0;//一个等号就是赋值
	// a = a + 3 与 a += 3 这两种写法是一样的。其它赋值操作符类似

	return 0;
}
*/

//单目操作符
//	！	逻辑反操作
//	-	负值
//	+	正值
//	&	取地址
//	sizeof	操作数的类型长度
//	~   对一个数的二进制按位取反
//	--	前置、后置--
//	++	前置、后置++
//	*	间接访问操作符
//	(类型)	强制类型转换		类似 int a = 3.14  强制将3.14转换为整数
//像a + b 中的+这个算术操作符，它的两边都有操作数，称为双目操作符，同理，只有一个操作数称为单目操作符

//C语言中，0表示假，非0表示真
/*
int main(void)
{
	int flag = 2;//变量flag非0，为真
	if (!flag) //加了！，使flag变为假
	{
		printf("结果为真");
	}
	else
	{
		printf("结果为假\n");//会输出这个结果
	}
	
	int a = 88;
	printf("%d\n", sizeof(a));//求a所占用的字节并打印
	printf("%d\n", sizeof a);//sizeof不是函数，它可以省略圆括号
	printf("%d\n", sizeof (int));//但是如果是求一个类型的内存大小就不可以省略圆括号

	int arr[10] = {0};
	printf("%d\n", sizeof(arr));//输出结果为40，arr里面有10个元素，每个整型元素都占有4个字节


	return 0;
}
*/
