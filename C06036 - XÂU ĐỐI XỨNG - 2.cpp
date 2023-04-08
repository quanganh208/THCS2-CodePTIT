#include <stdio.h>
#include <string.h>

int main(){
	char s[1000000];
	gets(s);
	printf("%lld", strlen(s) - 1);
	return 0;
}
