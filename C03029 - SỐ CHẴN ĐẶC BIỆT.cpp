#include <stdio.h>
// IT Club PTIT Hanoi
int check(unsigned long long x){
	while (x){
		if (x % 2 != 0) return 0;
		x /= 10;
	}
	return 1;
}
int main() {
	// Your code goes here
	int t;
	scanf("%d", &t);
	while (t--){
		unsigned long long n;
		scanf("%llu", &n);
		if (check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

