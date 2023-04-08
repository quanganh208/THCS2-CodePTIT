#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
long long gcd(long long a, long long b){
	int tmp;
	while (b){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long tmp = gcd(a, b);
		printf("%lld %lld\n", a*b/tmp, tmp);
	}
	return 0;
}
