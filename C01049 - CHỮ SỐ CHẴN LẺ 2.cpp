#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n;
		scanf("%lld", &n);
		long long even = 0, odd = 0;
		while (n){
			int tmp = n % 10;
			if (tmp % 2 == 0) even++; else odd++;
			n /= 10;
		}
		printf("%lld %lld\n", odd, even);
	}
	return 0;
}
