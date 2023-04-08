#include <stdio.h>
#include <math.h>
long long gthua(long long x){
	long long gt = 1;
	for (int i = 2; i <= x; i++) gt *= i;
	return gt;
}
int main(){
	long long n, sum = 0, tmp;
	scanf("%lld", &n);
	tmp = n;
	while (n){
		sum += gthua(n % 10);
		n /= 10;
	}
	if (sum == tmp) printf("1"); else printf("0");
	return 0;
}
