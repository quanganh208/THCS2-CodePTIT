#include <stdio.h>
#include <math.h>
int check(long long n){
	long long tmp = n, t = 0;
	while (n){
		if (n % 10 == 9) return 0;
		t = t * 10 + n % 10;
		n /= 10;
	}
	if (t == tmp) return 1; else return 0;
}

int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	for (long long i = 2; i <= n; i++)
		if (check(i)){
			cnt++;
			printf("%d ", i);
		}
	printf("\n%d", cnt);
	return 0;
}

