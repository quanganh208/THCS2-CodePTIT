#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check1(unsigned long long n){
	int cuoi = n % 10;
	int dau;
	while (n){
		if (n / 10 == 0) dau = n;
		n /= 10;
	}
	if (dau*2 == cuoi || cuoi*2 == dau) return 1; else return 0;
}

int check2(unsigned long long n){
	unsigned long long tmp = 0, cnt = 0, t, c = n;
	n /= 10;
	while (n){
		if (n / 10 == 0){
			t = n;
			cnt++;
			break;
		}
		tmp = tmp*10 + n % 10;
		n /= 10;
		cnt++;
	}
	t = (c - t*(unsigned long long)pow(10, cnt)) / 10;
	if (tmp == t) return 1; else return 0;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--){
		unsigned long long n;
		scanf("%llu", &n);
		if (check1(n) && check2(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

