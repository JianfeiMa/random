#include <stdio.h>
int main() {
	int a = 1;
	int *p;
	p = &a;
	printf("直接访问：a=%d\n", a);
	printf("间接访问：a=%d\n", *p);
	printf("指针地址->%d\n", p);
	return 0;
}
