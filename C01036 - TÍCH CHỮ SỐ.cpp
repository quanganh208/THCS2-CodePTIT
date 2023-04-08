#include <stdio.h>
#include <math.h>

int main(){
	int n;
	long long res = 1;
	scanf("%d", &n);
	while (n){
		res *= n % 10;
		n /= 10;
	}
	printf("%lld", res);
	return 0;
}
