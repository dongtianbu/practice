# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//scanf的%m可以控制域宽
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year,&month,&date);//&4%2%2表示先取4位再取2位再取2位。
//	printf("year=%d\n",year);
//	printf("month=%02d\n",month);//%0格式控制符  %02表示用0补齐输出的数字为两位,在输出数字的左边补齐。
//	printf("date=%02d\n",date);
//
//	return 0;
//}

//
//int main()
//{
//    /*char 变量在内存中存储的是字符对应的 ASCII 码值。
//    如果以 %c 输出，会根据 ASCII码表转换成对应的字符，如果以 %d 输出，那么还是整数。
//    所以本题只需以循环并且以%c的形式输出即可
//    */
//    char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//
//    //求数组长度
//    int length = sizeof(ch) / sizeof(ch[1]);
//    printf("length=%d\n", length);
//    printf("ch=%d\n", sizeof(ch));
//    int i;
//    for (i = 0; i < length; i++)
//    {
//        printf("%c", ch[i]);
//    }
//
//    return 0;
//}

