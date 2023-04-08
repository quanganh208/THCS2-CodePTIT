#include <stdio.h>

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (b == 0) printf("0");
	else printf("%lld %lld %lld %.2f %lld", a + b, a - b, a * b, (float)a/(float)b, a % b);
	return 0;
}
