#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n, tmp, t;
		scanf("%lld", &n);
		tmp = n % 10;
		while (n){
			if (n / 10 == 0) t = n;
			n /= 10;
		}
		if (t == tmp) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}
