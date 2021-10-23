#include <stdio.h>
int main() {
	char str[800];
	int i;
	printf("Please input description:");
	scanf("%[^\n]", str);
	printf("Please input years old:");
	scanf("%d", &i);
	printf("Your Description:%s,and you was %dyears old\n", str, i);
}
