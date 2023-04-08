#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int tn(unsigned long long n){
	unsigned long long tmp = n, t = 0;
	while (n){
		t = t * 10 + n % 10;
		n /= 10;
	}
	if (tmp == t) return 1; else return 0;
}

int tong(unsigned long long n){
	int sum = 0;
	while (n){
		sum += n % 10;
		n /= 10;
	}
	if (sum % 2 == 0) return 0; else return 1;
}

int chuso(unsigned long long n){
	while (n){
		int t = n % 10;
		if (t % 2 == 0) return 0;
		n /= 10;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		unsigned long long n;
		scanf("%llu", &n);
		if (tn(n) && chuso(n) && tong(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

