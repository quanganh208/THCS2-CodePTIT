#include <stdio.h>
#include <math.h>

int main(){
	long long n, sum = 1;
	scanf("%lld", &n);
	
	for (int i = 2; i < sqrt(n); i++)
		if (n % i == 0 && i*i == n) sum+= i;
		else if (n % i == 0) sum += i + n / i;
	if (sum == n) printf("1"); else printf("0");
	return 0;
}
