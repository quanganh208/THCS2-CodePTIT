#include <stdio.h>

int main(){
	long long a;
	scanf("%lld", &a);
	printf("%.2f", ((float)a*9/5) + 32);
	return 0;
}
