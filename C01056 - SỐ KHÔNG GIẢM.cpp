#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		unsigned long long n;
		scanf("%llu", &n);
		int max = 9;
		int check = 1;
		while (n){
			int tmp = n % 10;
			if (tmp <= max) max = tmp;
			else{
				check = 0;
				break;
			}
			n /= 10;
		}
		if (check) printf("YES\n"); else printf("NO\n");
	}
	return 0;
}
