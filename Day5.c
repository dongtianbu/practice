# define _CRT_SECURE_NO_WARNINGS
//C������you������䣺
//1.���ʽ���
//2.�����������
//3.�������
//4.�������
//5.�����
//C�����ǽṹ���ĳ���������ԣ�1.˳��ṹ 2.ѡ��ṹ 3.ѭ���ṹ
//C�������о��ֿ�����䣺
	/*1.����������䣬Ҳ�з�֧��䣺if���   switch���
	2.ѭ��ִ����䣺do while��� while��� for���
	3.ת����䣺break��䡢goto��䡢continue��䡢return���*/

//if���
#include <stdio.h>
//int main()
//{
//	int age = 18;
//	printf("������������䣺\n");
//	scanf("%d", &age);
//
//	if (age < 18)//if���������ֵΪ��ͻ�ִ�С�������治����;0��ʾ�١���0��ʾ��
//	{//if�������֧�Ͳ��ü�{}
//		printf("����δ����\n");
//	}
//	else if (age >= 18 && age < 28)//���ﲻ��д��else if (18 <= age < 28)�����18 <= age Ϊ�٣������0 < 28,���Ľ����Ϊ�棬���´���
//	{
//		printf("С�ƣ�\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("�еƣ���");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("�ϵƣ�����");
//	}
//	else
//	{
//		printf("�϶������ұ���ң�\n");
//	}
//
//	return 0;
//}

//if��else�������{}��ֻ�ܿ���һ�����
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//		if (b == 1)//�����ƥ��
//			printf("a");
//	else//else���������ifƥ�䣬�����ǿ���˭����ͺ�˭ƥ��
//			printf("b");
//	return 0;
//}

//
//1.������Ҫ�����壬�淶
//2.�ո񣬿��У�����
//
//int main()
//{
//	int num = 3;
//	if (5 == num)//����д����if (num == 5)��һ���ģ��������д�����©��һ���ȺŻᱨ����if (num == 5) ©�ȺŲ��ᱨ���������Է�ֹ©�Ⱥ�
//	{
//		printf("xixi\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 2;
//	printf("������������ǣ�%d\n", a);
//	if (b == 0)
//	{
//		printf("ż��");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	printf("1-100֮��������ǣ�");
//	while (i < 100)
//	{
//		i++;
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//switch���
//switch(���ͱ��ʽ)
//{
//	�����;
//}
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//����switch()����ı��ʽƥ����Ӧ��caseִ�С����ʽ���������͡�
//	{
//	//case������Է��ַ�����Ϊ�ַ�Ҳ�����ͣ����洢ʱ����ASCII��ֵ�洢�ġ�
//	case 1:
//		printf("Monday");
//		break;//������ֹͣ����ִ��
//	case 2:
//		printf("Thuseday");
//		break;
//	case 3:
//		printf("day");
//		break;
//	case 4:
//		printf("Thuseday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Staday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default://������ֵ����ƥ��ʱִ������
//		printf("��������1~7������\n");
//		break;
//	}
//	//case ���ͳ������ʽ:
//	//	���;
//	return 0;
//}
// 
// 
// 
// ţ�����ϵ���ϰ��
//int main()
//{
//	//�ɻ�ͷ
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2; k++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�ɻ���
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 12; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�ɻ�β
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2; k++)
//		{
//			printf("*  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}