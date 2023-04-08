#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n, cnt = 0;
		scanf("%lld", &n);
		for (int i = 1; i <= sqrt(n); i++)
			if (n % i == 0){
				if (i % 2 == 0 && (n / i) % 2 == 0 && n / i != i) cnt+= 2;
				else if (i % 2 == 0 || (n / i) % 2 == 0) cnt++;
			}
		printf("%lld\n", cnt);
	}
	return 0;
}
