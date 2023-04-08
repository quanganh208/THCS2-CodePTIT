#include <stdio.h>
#include <math.h>

int main(){
	long long n, t, tmp, x, cnt = 0;
	scanf("%lld", &n);
	x = n;
	t = n % 10;
	while (n){
		cnt++;
		if (n / 10 == 0) tmp = n;
		n /= 10;
	}
	x -= tmp*(long long)pow(10, cnt - 1);
	if (t) x = (x - t) + t*(long long)pow(10, cnt - 1) + tmp;
	else x = x - t + tmp;
	printf("%lld", x);
	return 0;
}
