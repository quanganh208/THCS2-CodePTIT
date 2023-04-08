#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		int i = 2, ans = 1;
		while (n > 1){
			if (n % i == 0){
				if (ans % i != 0) ans*= i;
				n /= i;
			}else i++;
		}
		printf("%d\n", ans);
	}
	return 0;
}
