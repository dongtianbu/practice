# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>//�������ͷ�ļ���Ϊ��ʹ���������rand()
//switch����Ƕ��ʹ�ã�����switch�����ڷ�һ��switch

//ѭ����whlie	for		do whlie
// whlie(���ʽ);���ʽΪ���ִ�У����ִ�������Ϊ��ͼ���ִ�У�����ֹͣ��	
//int main(void)
//{
//	
//	printf("��ӭ�����������ѧԺ��\n");
//	int i = 1;
//	int a = rand();
//	
//	while (i < 11)
//	{
//		//if (i == 5)
//			//break;//break��whlieѭ���������ֱ����ֹѭ��
//		if (i == 5)
//		{
//			continue;//����continue������coutinue����Ĵ��롣ֱ�����»ص���ͷ���жϲ����ж��Ƿ������һ��ѭ����
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
	//int ch = getchar();//getchar�ܹ���ȡһ���ַ�����������ַ���ASCII��ֵ�����ch������Ϊint
	//printf("%c\n", ch);
	//putchar(ch);//��ӡ
	//while ((getchat()) != EOF);//EOF��end of file����ֵ��-1���ڼ���������control+z�Ϳ��Ա���ȡΪEOF
	//{
	//	putchar(ch);
	//}

	//����getchar��һ������
	//char password[20] = { "abc"};
	//printf("Please enter your password:\n");
	//scanf("%s", password);//�û��������������ᰴ�س����س�����\n
	////����scanfֻ���ȡ�û���������ݣ�������\n
	//int ret = getchar();//���µ�\n�������getchar��ȡ�����º����д���
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

	//������������ӵĴ�������޸�
//	char password[20] = { "abc" };
//	printf("Please enter your password:\n");
//	scanf("%s", password);//�û��������������ᰴ�س����س�����\n��scanf�����ȡ�ո񣬶����ո�ֱ��ͣ�¡�
//	
//	
//	int ch = 0;
//	while ((ch = getchar()) != '\n');//�����������û�����Ļس�
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