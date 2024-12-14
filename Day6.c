# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//引用这个头文件是为了使用随机函数rand()
//switch可以嵌套使用，就是switch里面在放一个switch

//循环：whlie	for		do whlie
// whlie(表达式);表达式为真就执行，如果执行完后还是为真就继续执行，否则停止。	
//int main(void)
//{
//	
//	printf("欢迎加入霍格沃兹学院！\n");
//	int i = 1;
//	int a = rand();
//	
//	while (i < 11)
//	{
//		//if (i == 5)
//			//break;//break在whlie循环里面可以直接终止循环
//		if (i == 5)
//		{
//			continue;//遇到continue会跳过coutinue后面的代码。直接重新回到开头的判断部分判断是否进行下一次循环。
//		}
//		printf("%d\n",i);
//
//		i++;
//	}
//	
//
//
//	return 0;
//}

//int main()
//{
	//int ch = getchar();//getchar能够获取一个字符并返回这个字符的ASCII码值。因此ch的类型为int
	//printf("%c\n", ch);
	//putchar(ch);//打印
	//while ((getchat()) != EOF);//EOF是end of file，其值是-1，在键盘上输入control+z就可以被读取为EOF
	//{
	//	putchar(ch);
	//}

	//运用getchar的一个例子
	//char password[20] = { "abc"};
	//printf("Please enter your password:\n");
	//scanf("%s", password);//用户在输入完密码后会按回车，回车就是\n
	////并且scanf只会读取用户输入的数据，留下了\n
	//int ret = getchar();//留下的\n被这里的getchar读取，导致后面有错误
	//printf("Make sure your password is right(Y/N)\n");
	//scanf("%s", ret);
	//if ('Y' == ret)
	//{
	//	printf("YES");
	//}
	//else
	//{
	//	printf("NO");
	//}

	//这里对以上例子的代码进行修改
//	char password[20] = { "abc" };
//	printf("Please enter your password:\n");
//	scanf("%s", password);//用户在输入完密码后会按回车，回车就是\n，scanf不会读取空格，读到空格直接停下。
//	
//	
//	int ch = 0;
//	while ((ch = getchar()) != '\n');//这里就是清除用户输入的回车
//	{
//		;
//	}
//
//	printf("Make sure your password is right(Y/N)\n");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}