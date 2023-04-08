#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long a;
		scanf("%lld", &a);
		int i = 2;
		while (a > 1){
			if (a % i == 0){
				printf("%lld ", i);
				a /= i;
			}
			else i++;
		}
		printf("\n");
	}
	return 0;
}
