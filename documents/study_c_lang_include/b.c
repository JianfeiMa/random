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

void file_read() {
	FILE *fp = NULL;
	char buff[1024];
	
	fp = fopen("/opt/a.txt", "r");
	fscanf(fp, "%s", buff);
	printf("1:%s\n", buff);
	char thisIsCharA = 'A';
	char thisIsChar0 = '0';
	printf("thisIsCharA->%c\n", thisIsCharA);
	printf("thisIsChar0->%c\n", thisIsChar0);
	short thisIsShortA = 'A';
	short thisIsShort0 = '0';
	printf("thisIsShortA->%d\n", thisIsShortA);
	printf("thisIsShort0->%d\n", thisIsShort0);
}

void operateArray() {
	char myCharArray[2];//声明数组的时候要写明数组的大小
	myCharArray[0] = 'o';//数组初始化
	myCharArray[1] = 'k';
	printf("myCharArray->%s\n", myCharArray);
	char myCharArray1[] = {'n', 'o'};//声明的同时并初始化，一步完成就不用标明数组的大小
	printf("myCharArray1->%s\n", myCharArray1);
	char str1[] = "我是字符串1";
	char *str2 = "我是字符串2";
	printf("str1->%s\n", str1);
	printf("str2->%s\n", str2);
}

void main() {
	char thisIsChar = 'a';
	short thisIsShort = 10;
	unsigned int thisIsInt = 78;
	long thisIsLong = 99;
	unsigned int thisIsUnsignedInt = 1;
	//\r 是carrige return的缩写
	printf("thisIsChar->%d\n", thisIsChar);
	printf("thisIsShort->%d\n", thisIsShort);
	printf("thisIsLong->%d\n", thisIsLong);
	printf("thisIsInt->%u\n", thisIsInt);
	printf("thisIsUnsignedInt->%u\n", thisIsUnsignedInt);
	file_read();
	operateArray();
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
	//printf("打印curl的版本信息->%s", &curl_version_info);


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
