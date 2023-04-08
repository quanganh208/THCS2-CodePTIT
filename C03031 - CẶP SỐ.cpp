#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
long long gcd(long long a, long long b){
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long a, b, c, d;
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		if (gcd(a, b) == gcd(c, d)) printf("YES\n");
		else printf("NO\n");
	}
}

