#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n, sum = 0;
		scanf("%lld", &n);
		while (n){
			sum += n % 10;
			n /= 10;
		}
		printf("%lld\n", sum);
	}
	return 0;
}
