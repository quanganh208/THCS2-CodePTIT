#include <stdio.h>
#include <math.h>
int check(long long n){
	long long tmp = n, t = 0, sum = 0, c = 0;
	while (n){
		if (n % 10 == 6) c++; 
		t = t * 10 + n % 10;
		sum += n % 10;
		n /= 10;
	}
	if (c && t == tmp && sum % 10 == 8) return 1; else return 0;
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if (a > b){
		long long t = a;
		a = b;
		b = t;
	}
	for (long long i = a; i <= b; i++)
		if (check(i)) printf("%lld ", i);
	return 0;
}
