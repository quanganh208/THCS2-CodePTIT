#include <stdio.h>
#include <math.h>

int main(){
	int a, b, count = 0, i, cnt[10000];
	scanf("%d %d", &a, &b);
	for (i = ceil(sqrt(a)); i <= sqrt(b); i++) count++;
	printf("%lld\n", count);
	for (i = ceil(sqrt(a)); i <= sqrt(b); i++) printf("%lld\n", i*i);
	return 0;
}
