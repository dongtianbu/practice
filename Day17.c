#include <stdio.h>

//int main()
//{
//	int a = 0;//a�����ͱ�����ռ��4���ֽڵĿռ�
//	int* pa = &a; //&��ȡa���׵�ַ
//
//	//pa��һ��ָ�������������ŵ�ַ
//	//�����ϡ�ָ����ǵ�ַ
//
//	//ָ���С����32λ����4�ֽڣ���64λ����8�ֽ�
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
//	//sizeof �������޷�������
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//
//	return 0;
//}




//ָ�����͵�����
//
//int main()
//{
//	int a = 0x11223344;//aռ��4���ֽ�
//	int* pa = &a;
//	*pa = 0;//�޸�4���ֽ�,����Ϊ0
//
//	char* pc = (char*)&a;
//	*pc = 0;//ֻ���޸�һ���ֽڣ���Ϊchar����ֻ�ܷ���һ���ֽ�
//
//	//���ۣ�
//	//ָ�����;�����ָ�������ʱ�ܹ����ʼ����ֽ�
//	//int* �ܷ���4���ֽ�
//	//char* �ܷ���1���ֽ�
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
//	printf("pa + 1 = %p\n", pa + 1);//pa + 1 ����4���ֽ�
//	printf("pc = %p\n", pc);
//	printf("pc + 1 = %p\n", pc + 1);//pc + 1 ����1���ֽ�
//
// ��int��float����4���ֽڣ��ǲ��ǿ���ͨ��?
// ->���� �������ڴ��еĴ洢��һ��
// 
//	//����2��
//	//ָ�����;�����ָ������ʱ�������ͳ����������ֽ���
//
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//#include <errno.h>
//
//int main() {
//    double num = 16.0;
//    errno = 0; // ���ô����־
//    double result = sqrt(num);
//
//    if (errno == EDOM) {
//        perror("sqrt error");
//    }
//    else {
//        printf("ƽ�����ǣ�%f\n", result); // �����4.000000
//    }
//
//    // �����������
//    num = -1.0;
//    result = sqrt(num);
//    if (isnan(result)) {
//        printf("��Ч���룺�����޷���ƽ��\n");
//    }
//
//    return 0;
//}