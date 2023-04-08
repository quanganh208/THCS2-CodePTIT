#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
long long gcd(long long a, long long b){
	if (b == 0) return a;
	return gcd(b, a % b);
}

long long lcm(long long a, long long b){
	return a*b/gcd(a, b);
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n%lld", gcd(a, b), lcm(a, b));
}

