#include <stdio.h>
#include <stdlib.h>
//void test_a();//函数声明
#include "a.h"
#include <curl/curl.h>
#include <curl/easy.h>
#include <curl/curlbuild-64.h>
#include <curl/multi.h>

void test_b() {
	printf("test_b()方法开始执行\n");
	printf("准备调用include指令包含入来的test_a()方法\n");
	test_a();//由于上面已经声明，所以可以直接使用
	return;
}
void test_param(int x, int y) {
	x ++;
	y ++;
	printf("只改变型参的值,不改变实参的值x->%d\n", x);
	printf("只改变型参的值,不改变实参的值y->%d\n", y);
}
void test_param1(int *x, int *y) {
	printf("通过指针赋值,改变实参的值*x->%d\n", *x);
	printf("通过指针赋值,改变实参的值*y->%d\n", *y);
}
void main() {
	char *s;
	printf("请输入需要循环的次数:");
	scanf("%s", &s);
	printf("你输入了:%s\n", &s);
	//itoa i -> s
	//atoi s -> i
	int times = atoi(&s);
	int i;
	for (i = 0; i < times; i ++) {
		printf("循环->%d\n", i);
	}
	printf("主函数开始执行\n");
	printf("准备调用test_b()函数\n");
	test_b();
	
	int x;
	int y;
	x = 100;
	y = 101;
	test_param(x, y);
	test_param1(&x, &y);
	printf("x的内存地址x->%d\n", x);
	printf("y的内存地址y->%d\n", y);
	//int *pointer;
	//pointer = &x;
	//printf("第一次输出指针变量x->%d\n", *pointer);
	//pointer = &y;
	//printf("第二次输出指针变量y->%d\n", *pointer);


	//char *curl_version_info = curl_version_info();
	//printf("%s", &curl_version_info);


	//CURLUcode rc;
  	//CURLU *url = curl_url();
  	//rc = curl_url_set(url, CURLUPART_URL, "https://www.baidu.com", 0);
  	//if(!rc) {
    	//	char *scheme;
    	//	rc = curl_url_get(url, CURLUPART_SCHEME, &scheme, 0);
    	//	if(!rc) {
      	//		printf("the scheme is %s\n", scheme);
      	//		curl_free(scheme);
    	//	}
    	//	curl_url_cleanup(url);
  	//}


}
