#include <stdio.h>
long long gcd(long long a, long long b){
	if (b == 0) return a;
	return gcd(b, a % b);
}
long long lcm(long long a, long long b){
	return a * b / gcd(a, b);
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, ans = 1;
		scanf("%lld", &n);
		for (int i = 2; i <= n; i++) ans = lcm(i, ans);
		printf("%lld\n", ans);
	}
	return 0;
}