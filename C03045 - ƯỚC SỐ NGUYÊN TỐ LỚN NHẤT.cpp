#include <stdio.h>
#include <math.h>

int main(){
	long long t;
	scanf("%lld", &t);
	while (t--){
		long long n;
		scanf("%lld", &n);
		long long max;
		for (long long i = 2; i <= sqrt(n); i++)
			if (n % i == 0){
				max = i;
				while (n % i == 0) n /= i;	
			}
		if (n > 1) max = n;
		printf("%lld\n", max);
	}
	return 0;
}

