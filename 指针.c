#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	//����һ��ָ�����
	int* p = &a;//int*       ��˼��int���͵�ָ��   
	char* p1 = &b;
	int c = *p;// p��a�ĵ�ַ     ��ô *p  �� a
	printf("%d", c);
	return 0;
}