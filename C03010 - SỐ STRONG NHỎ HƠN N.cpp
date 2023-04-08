#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int gthua(int x){
	int res = 1;
	for (int i = 2; i <= x; i++) res *= i;
	return res;
}
long long get(long long x){
	int sum = 0;
	while (x){
		int tmp = x % 10;
		x /= 10;
		sum += gthua(tmp);
	}
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	if (i == get(i)) printf("%d ", i);
	return 0;
}
