# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//计算数字n的阶乘，并计算1!+2!+3!+....+n!
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
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}

//for循环  for(表达式1;表达式2;表达式3)
			//循环语句;
//表达式1是初始化循环变量的 表达式2是判断部分 表达式3是调整部分


//int main()
//{
	//int i = 0;
	//for (i = 1; i < 10; i++)//for循环变量 调整集中 便于控制
	//{
	//	printf("%d ", i);
	//}
	//运行逻辑：先初始化 再判断 进行循环语句 最后调整（其中初始化只在第一次执行，后续步骤不执行）

	//for循环中的break 遇到了直接跳出循环 break只能跳出所在的那一层的循环

	//for循环中遇到continue 直接执行下一步 调整部分

	//for (i = 1; i <= 10; i++)
	//{
	//	if (i == 5)
	//	{
	//		continue;//到这里直接去到调整部分 即到i++部分
	//	}

	//	printf("%d ", i);//输出结果为12346789

	//}

	//为了提高代码可读性，采取以下写法
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	//for (i = 0; i < 10; i++)//此处的10为循环10次的意思
	//{
	//	printf("%d ", arr[i]);
	//}

	//for循环判断部分省略意味判断恒成立,实际编程中不要省略避免麻烦
	/*int i = 0;
	int j = 0;*/

	/*for (i = 0; i < 3 ; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("congratulation");
		}
	}*/
	//以上这段代码会打印9次conguatulation
	//倘若省略成以下样子，就不是9次了

	//int i = 0;
	//int j = 0;
	//for (; i < 3; i++)
	//{
	//	for (; j < 3; j++)
	//	{
	//		printf("congratulation\n");
	//	}
	//	//原因：当循环到j=3时候跳出内层循环执行i++，然后再进入内层循环，由于省略，此时j=3不符合条件不会继续循环打印
	//}

	//建议int i = 0 这个初始化步骤不要写进for循环表达式一中，有些编译器无法识别的，应该在外部初始化最好，内存没有变化的

	//可以用多个变量来控制循环
	/*int x = 0;
	int y = 0;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
		printf("nihao\n");
*/
	//例题
	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 0; i++, k++)
	//	printf("nihao");//实际循环0次，因为判断部分是赋值，0为假，非0才为真




	/*do
		循环语句;
	while(表达式);  从表达式特点来看可知其至少循环一次(先do后判断)   注意while后面有分号*/
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


	//计算n的阶乘（写代码要先想到办法在进行写代码）,思路就是从n开始乘法，乘一次减一，直至乘到了一
	/*int i = 1;
	int n = 1;
	int result = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		result = result * i;
	}
	printf("%d ", result);*/


	//计算1!+2!+3!+......+n!
	//在上述代码基础上修改就好了
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


	//在有序数组中查找具体数字
	/*int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int i = 0;
	int input = 1;
	scanf("%d", &input);
	printf("整个数组大小:%d\n", sizeof(arr));
	printf("单个元素大小：%d\n", sizeof(arr[0]));
	int size = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i <= size; i++)
	{
		if (arr[i] == input)
		{
			printf("%d ", arr[i]);
			printf("已找到相应数字，下标是：%d\n", i);
			break;
		}
		else if (i == size)
		{
			printf("找不到该数字");
		}
	}*/



	//如果数字较大时，该方法较慢 以下用二分查法查找
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
//	int size = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;//数组最左边的角标
//	int right = size - 1;//数组最右边的元素的角标
//	int input = 666;
//	printf("请输入您要寻找的数字：");
//	scanf("%d", &input);
//	//int middle = left + (right - left) / 2;
//	while(left <= right)
//	{
//		int middle = (right + left) / 2;//中间元素角标
//		if (input < arr[middle])//判断要寻找数字与中间数字的大小从而逐渐缩小范围
//		{
//			right = middle - 1;
//		}
//		else if (input > arr[middle])
//		{
//			left = middle + 1;
//		}
//		else if(input == arr[middle])
//		{
//			printf("找到该数字了，下标为：%d", middle);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到该数字！！");
//	}
//
//
//	return 0;
//}