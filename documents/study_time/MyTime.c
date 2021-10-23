#include <stdio.h>
#include <time.h>
void main() {
	printf("主函数开始\n");
	time_t now;
	struct tm *time_now;
	time(&now);
	//time_now = localtime(now);
	printf("->%s\n", ctime(&now));
}
