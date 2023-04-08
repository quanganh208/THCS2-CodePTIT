#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(long long x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
int main(){
	long long n;
	scanf("%lld", &n);
	for (int i = 2; i <= n; i++)
		if (check(i)) printf("%lld\n", i);
	return 0;
}

