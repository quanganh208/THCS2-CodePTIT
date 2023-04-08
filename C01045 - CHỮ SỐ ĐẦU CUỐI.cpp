#include <stdio.h>
#include <math.h>

int main(){
	long long n;
	scanf("%lld", &n);
	long long l, r;
	r = n % 10;
	while (n){
		if (n / 10 == 0) l = n;
		n /= 10;
	}
	printf("%lld %lld", l, r);
	return 0;
}
