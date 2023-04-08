#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int main(){
	int p[10] = {0}; 
	unsigned long long n;
	scanf("%llu", &n);
	while (n){
		int tmp = n % 10;
		if (check(tmp)) p[tmp]++;
		n /= 10;
	}
	for (int i = 2; i < 10; i++)
		if (check(i) && p[i] > 0) printf("%d %d\n", i, p[i]);
}

