#include <stdio.h>
#include <math.h>

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", (b + a) *(abs(b - a) + 1) / 2);
	return 0;
}
