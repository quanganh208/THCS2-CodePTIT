#include <stdio.h>
#include <math.h>
long long gcd(long long a, long long b){
	if (!b) return a;
	return gcd(b, a % b);
}
long long lcm(long long a, long long b){
	return a*b/gcd(a, b);
}
int main(){
	long long t;
	scanf("%lld", &t);
	while (t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long answer = a;
		for (long long i = a + 1; i <= b; i++)
			answer = lcm(answer, i);
		printf("%lld\n", answer);
	}
	return 0;
}