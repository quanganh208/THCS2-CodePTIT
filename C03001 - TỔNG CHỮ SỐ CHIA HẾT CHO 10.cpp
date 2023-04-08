#include <stdio.h>
// IT Club PTIT Hanoi

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n;
		scanf("%lld", &n);
		long long cnt = 0;
		while (n){
			cnt += n % 10;
			n /= 10;
		}
		if (cnt % 10 == 0) printf("YES\n"); 
		else printf("NO\n");
	}
	return 0;
}

