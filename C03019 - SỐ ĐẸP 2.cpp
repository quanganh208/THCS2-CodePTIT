#include <stdio.h>
#include <math.h>
int check(long long n){
	long long tmp = n, t = 0, sum = 0;
	while (n){
		t = t * 10 + n % 10;
		sum += n % 10;
		n /= 10;
	}
	if (t == tmp && sum % 10 == 0) return 1; else return 0;
}

long long mu(int n){
	long long fac = 1;
	for(int i=0; i<n; i++){
		fac *= 10;
	}
	return fac;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, cnt = 0;
		scanf("%d", &n);
		for (long long i = mu(n - 1); i < mu(n); i++)
			if (check(i)) cnt++;
		printf("%lld\n", cnt);
	}
	return 0;
}
