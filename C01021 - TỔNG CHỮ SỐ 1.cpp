#include <stdio.h>
#include <math.h>
int main(){
	long long n, sum = 0;
	scanf("%lld", &n);
	while (n){
		sum += n % 10;
		n /= 10;
	}
	printf("%lld", sum);
	return 0;
}
