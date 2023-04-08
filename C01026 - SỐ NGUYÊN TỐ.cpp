#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n, i;
		scanf("%lld", &n);
		int check = 1;
		for (i = 2; i <= sqrt(n); i++)
			if (n % i == 0){
				check = 0;
				break;
			}
		if (n < 2) check = 0;
		if (check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
