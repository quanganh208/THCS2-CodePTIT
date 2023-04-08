#include <stdio.h>

int main(){
	int n, mina = 1e6, minb = 1e6;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		mina = (mina > a) ? a : mina;
		minb = (minb > b) ? b : minb;
	}
	printf("%lld",(long long) mina * minb);
	return 0;
}