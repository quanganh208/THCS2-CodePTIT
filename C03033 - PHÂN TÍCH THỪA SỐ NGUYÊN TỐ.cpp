#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int main(){
	int t, count = 1;
	scanf("%d", &t);
	while (t--){
		long long n;
		scanf("%lld", &n);
		printf("%d = ", n);
		int i = 2, c = 0;
		while (n > 1){
			if (n % i == 0){
				c++;
				n /= i;
			}
			else if (c != 0){
				printf("%d^%d * ", i++, c);
				c = 0;
			}else i++;
		}
		if (c != 0) printf("%d^%d", i, c);
		printf("\n");
	}
	return 0;
}

