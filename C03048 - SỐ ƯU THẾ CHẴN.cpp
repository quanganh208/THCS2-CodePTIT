#include <stdio.h>

int check(unsigned long long x){
	int cnt_even = 0, cnt_odd = 0;
	while (x){
		int t = x % 10;
		if (t % 2 == 0) cnt_even++; else cnt_odd++;
		x /= 10;
	}
	if (cnt_even > cnt_odd) return 1; else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		unsigned long long n;
		scanf("%llu", &n);
		if (n % 2 == 0 && check(n)) printf("YES\n"); else printf("NO\n");
	}
	
	return 0;
}
