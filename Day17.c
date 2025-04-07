#include <stdio.h>

//int main()
//{
//	int a = 0;//a是整型变量，占用4个字节的空间
//	int* pa = &a; //&会取a的首地址
//
//	//pa是一个指针变量，用来存放地址
//	//本质上。指针就是地址
//
//	//指针大小，在32位机器4字节，在64位机器8字节
//	return 0;
//}
//
//
//int main()
//{
//	char* pc = 0;
//	short* ps = 1;
//	int* pi = 2; 
//
//	//sizeof 返回是无符号整型
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//
//	return 0;
//}




//指针类型的意义
//
//int main()
//{
//	int a = 0x11223344;//a占用4个字节
//	int* pa = &a;
//	*pa = 0;//修改4个字节,都变为0
//
//	char* pc = (char*)&a;
//	*pc = 0;//只能修改一个字节，因为char类型只能访问一个字节
//
//	//结论：
//	//指针类型决定了指针解引用时能够访问几个字节
//	//int* 能访问4个字节
//	//char* 能访问1个字节
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("pa = %p\n", pa);
//	printf("pa + 1 = %p\n", pa + 1);//pa + 1 跳过4个字节
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);//pc + 1 跳过1个字节
//
// 那int和float都是4个字节，是不是可以通用?
// ->不是 它们在内存中的存储不一样
// 
//	//结论2：
//	//指针类型决定了指针运算时按照类型长度跳过的字节数
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <errno.h>
//
//int main() {
//    double num = 16.0;
//    errno = 0; // 重置错误标志
//    double result = sqrt(num);
//
//    if (errno == EDOM) {
//        perror("sqrt error");
//    }
//    else {
//        printf("平方根是：%f\n", result); // 输出：4.000000
//    }
//
//    // 处理负数的情况
//    num = -1.0;
//    result = sqrt(num);
//    if (isnan(result)) {
//        printf("无效输入：负数无法开平方\n");
//    }
//
//    return 0;
//}