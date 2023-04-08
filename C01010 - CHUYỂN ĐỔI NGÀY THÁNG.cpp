#include <stdio.h>

int main(){
	long long a;
	scanf("%lld", &a);
	long long nam, tuan;
	nam = a / 365;
	a %= 365;
	tuan = a / 7;
	a %= 7;
	printf("%lld %lld %lld", nam, tuan, a);
	return 0;
}
