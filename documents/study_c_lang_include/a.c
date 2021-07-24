#include <stdio.h>
void test_a() {
	printf("test_a()方法开始执行\n");
	printf("这个方法将会被导出到a.h头文件,然后a.h头文件被其他C语言代码文件引用\n");
	return;
}
