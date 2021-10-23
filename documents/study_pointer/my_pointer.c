#include <stdio.h>
void myFunction(int a, ...) {

}
void main() {
	printf("主函数开始\n");
	//指针变量定义
	int *p;
	float *p1;
	int x = 5;
	p = &x;
	printf("x->%d\n", *p);
	float y = 10;
	myFunction(5, y);
}
