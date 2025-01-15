#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	//定义一个指针变量
	int* p = &a;//int*       意思是int类型的指针   
	char* p1 = &b;
	int c = *p;// p是a的地址     那么 *p  是 a
	printf("%d", c);
	return 0;
}