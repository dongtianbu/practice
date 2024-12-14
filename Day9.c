# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	char arr1[] = "Welcome to bit";//14
//	char arr2[] = "##############";//14

	//int size = sizeof(arr2) / sizeof(arr2[1]);//利用sizeof求数组大小的时候会将字符串末尾的\0也算入 因此再计算角标的时候要-2
	//这里也可以直接用strlen直接求字符串的长度，这样不会包含\0
	//size = strlen(arr1) - 1; 

	//printf("size%d", sizeof(arr1));
	//int left = 0;
	//int right = size - 2;
	//int i = 0;
	//int j = 0;
	//while (i < size )
	/* {
		for (j = 0; j < 15; j++)
			printf("%c", arr2[j]);
		printf("\n");
		arr2[left] = arr1[left];
		left += 1;
		arr2[right] = arr1[right];
		right -= 1;
		i++;
	}
	
	return 0;
}
*/

//改进代码
#include <windows.h>//引用sleep函数需要包含的头文件
#include <stdlib.h>//system函数
//int main()
//{
//	char arr0[] = "welcome to bit!!!!";
//	char arr1[] = "##################";
//	int left = 0;
//	int right = strlen(arr0) - 1;
//	while (left <= right + 1)
//	{
//		printf("%s", arr1);
//		printf("\n");
//		Sleep(555);//休眠代码，暂停555毫秒
//		system("cls");//system是一个库函数，可以执行系统命令，括号内是需要执行的命令，在这里的cls是执行清空屏幕的命令
//		arr1[left] = arr0[left];
//		arr1[right] = arr0[right];
//		left++;
//		right--;
//	}
//
//	return 0;
//}

//int main()
//{
	//以下是我自己写的代码
	//int password = 0;
	//int i = 0;
	//int arr0[] = {123456, 123};
	//int user = 0;
	//int arr1[] = {88888};
	//printf("arr0[0]=%d\n", arr0[0]);
	//printf("arr0=%d\n", arr0);
	//for (i = 0; i < 3; i++)
	//{
	//	printf("请输入你的用户名：");
	//	scanf("%d", &user);
	//	//printf("password=%d\n", password);
	//	if (user == arr0[0])
	//	{
	//		printf("请输入你的密码：\n");
	//		scanf("%d", &password);//数组名本来就是地址，可以不用&符号
	//		if (password == arr1[0])
	//		{
	//			printf("登录成功！！！");
	//			break;
	//		}
	//		else
	//		{
	//			printf("密码错误，还有%d次机会!!", 2 - i);
	//			continue;
	//		}
	//	}
	//	else
	//	{
	//		printf("用户名不匹配！！请重新输入你的用户名！！(你还有%d次机会！！)", 2 - i);
	//		continue;
	//	}
	//}


	//strcmp(char1,char2) 比较字符串的函数，如果两个字符串相等，就会返回一个0.
	//运用这个函数需要#include <stding.h>
//	int i = 0;
//	char password[100] = {"a"};//假设密码是abcdef
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入您的密码：");
//		scanf("%s", password);//数组本身就是地址，这个地方就不需要&
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("登录成功！");
//			break;
//		}
//		else
//		{
//			printf("密码错误，还有%d次机会！", 2 - i);
//			continue;
//		}
//	}
//	if (i == 3)
//	{
//		printf("机会已用完，将退出程序！");
//	}
//
//	return 0;
//}


//
////一个小游戏，猜数字
////电脑随机生成一个随机数，让人来猜
//void menu()//定义一个菜单函数
//{
//	printf("********************************\n");
//	printf("***********猜数字游戏*************\n");
//	printf("***********1.玩游戏**************\n");
//	printf("***********0.退出游戏************\n");
//	printf("********************************\n");
//}
//
//#include <stdlib.h>//srand函数所需
//#include <time.h>//time函数所需
//void game()
//{
//	int input = 0;
//	int random_num = 0;
//	//int rand(void)函数会返回一个随机值，其大小为0~RAND_MAX(32767)
//	//但是需要先用srand设置其随机值起点，否则每一轮随机数都会相同
//	//void srand(unsigned int seed)
//	//而srand()函数又需要传入一个无符号整型的随机数，因为一个数决定一个随机数起点，需要事实传入随机数
//	//这里运用时间戳，运用time_t time(time_t *time)这个函数，它会根据时间生成一个时间戳，它里面是一个指针变量,time_t实际上就是整型，这里代表的是返回一个时间戳
//
//	RAND_MAX;
//	random_num = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入你猜的数字:>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了，请继续猜\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了，请继续猜\n");
//		}
//		else
//		{
//			printf("猜对了，游戏结束\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//(unsigned int)表示强制转换类型，因为time函数返回的是time_t类型的数，这里不需要给time函数参数，因此输入NULL，表示不需要参数
//	//将srand函数放在这里，因为它只需要调用一次就可以了
//	int option = 1;
//	//先写一个菜单
//	do
//	{
//		menu();
//		printf("请选择：->");
//		scanf("%d", &option);
//		switch (option)
//		{
//		case 1:
//			printf("开始玩游戏！\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("请你重新选择！\n");
//			break;
//		}
//	} while (option);
//	return 0;
//}

//goto语句,可以一次从深层循环中跳出来，使用方法如下
//int main()
//{
//again:
//	printf("nihao");
//	printf("nihao");
//	printf("nihao");
//	goto again;//again就是一个随意定义的词可以替换成其他的
//	//goto 不能跨函数跳跃
//	return 0;
//}


//写一个关机程序
//运用库函数system()执行系统命令
//system()里面放入一个字符串代表需要执行的命令
#include <string.h>//strcmp所需
//int main()
//{
//	//char类型是存储单个字符的，如：char input = '1';
//	//要存储字符串需要用字符数组
//	char input[20] = { 0 };//字符数组
//	system("shutdown -s -t 666");
//	printf("请注意，你的电脑将会在666秒内关机，输入：fucku来取消关机:>");
//again:
//	scanf("%s", input);
//	printf("input=%s\n", input);
//	if (strcmp(input, "fucku") == 0 )//strcmp判断两个字符串的大小，相等返回0
//	{
//		printf("取消关机。\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("请重新输入:>");
//		goto again;
//	}
//	return 0;
//}
