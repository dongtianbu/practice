# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������n�Ľ׳ˣ�������1!+2!+3!+....+n!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", ret);
//	printf("%d", sum);
//	return 0;
//}

//
//int main()
//{
//	int i = 1;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//		i++;//����
//	}
//	return 0;
//}

//forѭ��  for(���ʽ1;���ʽ2;���ʽ3)
			//ѭ�����;
//���ʽ1�ǳ�ʼ��ѭ�������� ���ʽ2���жϲ��� ���ʽ3�ǵ�������


//int main()
//{
	//int i = 0;
	//for (i = 1; i < 10; i++)//forѭ������ �������� ���ڿ���
	//{
	//	printf("%d ", i);
	//}
	//�����߼����ȳ�ʼ�� ���ж� ����ѭ����� �����������г�ʼ��ֻ�ڵ�һ��ִ�У��������費ִ�У�

	//forѭ���е�break ������ֱ������ѭ�� breakֻ���������ڵ���һ���ѭ��

	//forѭ��������continue ֱ��ִ����һ�� ��������

	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//	{
	//		continue;//������ֱ��ȥ���������� ����i++����
	//	}

	//	printf("%d ", i);//������Ϊ12346789

	//}

	//Ϊ����ߴ���ɶ��ԣ���ȡ����д��
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	//for (i = 0; i < 10; i++)//�˴���10Ϊѭ��10�ε���˼
	//{
	//	printf("%d ", arr[i]);
	//}

	//forѭ���жϲ���ʡ����ζ�жϺ����,ʵ�ʱ���в�Ҫʡ�Ա����鷳
	/*int i = 0;
	int j = 0;*/

	/*for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("congratulation");
		}
	}*/
	//������δ�����ӡ9��conguatulation
	//����ʡ�Գ��������ӣ��Ͳ���9����

	//int i = 0;
	//int j = 0;
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("congratulation\n");
	//	}
	//	//ԭ�򣺵�ѭ����j=3ʱ�������ڲ�ѭ��ִ��i++��Ȼ���ٽ����ڲ�ѭ��������ʡ�ԣ���ʱj=3�����������������ѭ����ӡ
	//}

	//����int i = 0 �����ʼ�����費Ҫд��forѭ�����ʽһ�У���Щ�������޷�ʶ��ģ�Ӧ�����ⲿ��ʼ����ã��ڴ�û�б仯��

	//�����ö������������ѭ��
	/*int x = 0;
	int y = 0;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
		printf("nihao\n");
*/
	//����
	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 0; i++, k++)
	//	printf("nihao");//ʵ��ѭ��0�Σ���Ϊ�жϲ����Ǹ�ֵ��0Ϊ�٣���0��Ϊ��




	/*do
		ѭ�����;
	while(���ʽ);  �ӱ��ʽ�ص�������֪������ѭ��һ��(��do���ж�)   ע��while�����зֺ�*/
	/*int i = 0;
	do
	{
		if (i == 4)
		{
			continue;
		}
		printf("%d ", i);
		i++;
		
	}
	while (i < 10);*/


	//����n�Ľ׳ˣ�д����Ҫ���뵽�취�ڽ���д���룩,˼·���Ǵ�n��ʼ�˷�����һ�μ�һ��ֱ���˵���һ
	/*int i = 1;
	int n = 1;
	int result = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}
	printf("%d ", result);*/


	//����1!+2!+3!+......+n!
	//����������������޸ľͺ���
	/*int i = 1;
	int n = 1;
	int result = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
		sum = sum + result;
	}
	printf("%d ", result);
	printf("%d ", sum);*/


	//�����������в��Ҿ�������
	/*int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int i = 0;
	int input = 1;
	scanf("%d", &input);
	printf("���������С:%d\n", sizeof(arr));
	printf("����Ԫ�ش�С��%d\n", sizeof(arr[0]));
	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= size; i++)
	{
		if (arr[i] == input)
		{
			printf("%d ", arr[i]);
			printf("���ҵ���Ӧ���֣��±��ǣ�%d\n", i);
			break;
		}
		else if (i == size)
		{
			printf("�Ҳ���������");
		}
	}*/



	//������ֽϴ�ʱ���÷������� �����ö��ֲ鷨����
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int size = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;//��������ߵĽǱ�
//	int right = size - 1;//�������ұߵ�Ԫ�صĽǱ�
//	int input = 666;
//	printf("��������ҪѰ�ҵ����֣�");
//	scanf("%d", &input);
//	//int middle = left + (right - left) / 2;
//	while(left <= right)
//	{
//		int middle = (right + left) / 2;//�м�Ԫ�ؽǱ�
//		if (input < arr[middle])//�ж�ҪѰ���������м����ֵĴ�С�Ӷ�����С��Χ
//		{
//			right = middle - 1;
//		}
//		else if (input > arr[middle])
//		{
//			left = middle + 1;
//		}
//		else if(input == arr[middle])
//		{
//			printf("�ҵ��������ˣ��±�Ϊ��%d", middle);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ��������֣���");
//	}
//
//
//	return 0;
//}