#include <stdio.h>
#include <math.h>

int main(){
	long long n, cnt = 0;
	scanf("%lld", &n);
	while (n){
		cnt++;
		n /= 10;
	}
	printf("%lld", cnt);
	return 0;
}
