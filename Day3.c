# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//дһ�����������������Ľϴ�ֵ
/*
Max(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}

int main(void)
{
	printf("�������������������ǵĽϴ�ֵ:\n");
	int n1 = 0;
	int n2 = 0;
	scanf("%d %d", &n1, &n2);
	printf("%d\n", Max(n1, n2));
	return 0;
}
*/

//����������Ŀ������ sizeof
/*
int main()
{
	int arr[18] = {0};
	printf("%zd\n", sizeof(arr));//arr��ʮ�˸�Ԫ�أ�ÿ��ռ4byte,�ܹ�4*18=72
	printf("%d\n", sizeof(arr[0]));//����Ԫ�� 4
	printf("%lld\n", sizeof(arr) / sizeof(arr[0]));//18


	int a = 98;
	int b = 327;
	b = a++;//a++ ����++������ʹ�ú�++
	//b = a		a = a + 1
	printf("%d\n", a);//99
	printf("%d\n", b);//98

	int c = 238;
	int d = 37;
	d = ++c;//ǰ��++����++��ʹ��
	//b = b + 1		c = b
	printf("%d\n", c);//239
	printf("%d\n", d);//239
	//ǰ��--�����--�÷�ͬ��

	return 0;
}
*/


//��ϵ��������
//>
//>=
//<
//<=
//!=	������
//==	����
//
//int main(void)
//{
//	int a = 293;
//	if (a = 29)//ֻҪ����if (ture)�ͻ��������ִ�У������Ǹ�a��ֵ��29,a��0�����棬�ͻ�ִ��
//	{
//		printf("��");//���ӡ���
//	}
//	else
//	{
//		printf("��");//����������if (a == 29)��==���жϵ��ڣ��ͻ�Ϊ�٣���ӡ���
//	}
//	return 0;
//}

//
//int main()
//{
//	//&& �߼��� - ����
//	//|| �߼��� - ����
//
//	int a = 0;
//	int b = 3;
//	if (a && b)//&&Ҫ����ȫ��Ż�ִ��
//	{
//		printf("ȫ�����");
//	}
//	else
//	{
//		printf("һ�����");
//	}
//
//	return 0;
//}


//��������������Ŀ����������exp1 ? exp2 : exp3 --> ���exp1Ϊ�棬��Ҫexp2,����Ҫexp3
/*
int main(void)
{
	//int a = 384;
	//int b = 261;
	//int r = a > b ? a : b;
	//int p = a < b ? a : b;
	//printf("%d\n", r);//384
	//printf("%d\n", p);//261


	//		//���ű��ʽ��exp1,exp2,exp3,......,expN�����Ÿ�����һ�����ʽ�����ص��Ǵ����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ����
	//int a = 18;
	//int b = 4;
	//int c = 23;
	//int p = (c = a - 2, a = b + c, c - 3);
	//printf("%d\n", p);//13


	//		//�±����á��������úͽṹ��Ա������
	//		//  []  ()  .  ->
	//int arr[] = { 1,2,3,4 };
	//arr[3] = 346;//[]�����±����ò�������arr��3����[]�Ĳ�����
	//printf("a=%d\n", a);
	//printf("b=%d\n", b);
	//int z = Min(a, b);//�����Բ���ž��Ǻ������ò�����
	//printf("x*y=%d\n", Min(a, b));

	//�����ؼ��֣�auto break case char const continue default do double else 
	//auto�����Զ����ɱ������Զ����ٱ������ھֲ�������һ��ʡ�ԡ�
	//break����ѭ��		for  while  do while
	//case����switchһ��ʹ��
	//continue����ѭ��
	//do while
	//enum struct union ��ö��-�ṹ��-�����壩
	//extern �����ⲿ����
	//goto ��ת���
	//register  �Ĵ���
	//signed �з��ŵ�
	//static ��̬�� ����register
	//typedef ����������
	//unsigned �޷��ŵ�
	//void �� ���ں����ķ�������
	//while
	
		//1.�������ֱ�������ĸ�����֡��»�����ɣ������������ַ������������ֿ�ͷ�������������ǹؼ��֡�

	
	return 0;
}


Min(int x, int y)
{
	int z = 0;
	if (x > y)
	{
		int z = x;
	}
	else
	{
		int z = y;
	}
	return z;
}

*/
//�ؼ���typedef��static
	//typedef�����Ͷ��壬Ӧ�����Ϊ����������
//
//typedef unsigned int uint;//��unsigned�������������Ϊuint��ֻ�ܽ�������������
//
//int main(void)
//{
//	unsigned int a = 0;
//	uint b = 0;//������179����һ���ģ��������ּ���
//
//	return 0;
//}
//
//

static int g_val = 2024;

