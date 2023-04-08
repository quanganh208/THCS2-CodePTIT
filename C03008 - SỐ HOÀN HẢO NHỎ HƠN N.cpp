#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int get(int x){
	int sum = 1;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0 && i*i == x) sum += i;
		else if (x % i == 0) sum+= i + x / i;
	return sum;
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
	if (i == get(i)) printf("%d ", i);
	return 0;
}
