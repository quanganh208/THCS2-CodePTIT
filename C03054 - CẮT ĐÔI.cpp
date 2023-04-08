#include <stdio.h>
#include <math.h>
//IT PTIT Club
int check(unsigned long long x){
	while (x){
		int tmp = x % 10;
		if (tmp == 2 || tmp == 3 || tmp == 4 || tmp == 5 || tmp == 6 || tmp == 7) return 0;
		x /= 10;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		unsigned long long n;
		scanf("%llu", &n);
		if (check(n)){
			unsigned long long ans = 0;
			int cnt = 0;
			while (n){
				int tmp = n % 10;
				if (tmp == 8 || tmp == 9) tmp = 0;
				ans += (unsigned long long)pow(10, cnt++)*tmp;
				n /= 10;
			}
			if (ans == 0) printf("INVALID\n");
			else printf("%llu\n", ans);
		}else printf("INVALID\n");
	}
	
	return 0;
}