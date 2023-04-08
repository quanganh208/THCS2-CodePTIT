#include <stdio.h>

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (b == 0) printf("0");
	else printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2f", a + b, a - b, a * b, a/b, a % b, (float)a/(float)b);
	return 0;
}