#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
long long a[100];
void fibo(){
	a[0] = 0; a[1] = 1;
	for (int i = 2; i <= 92; i++) a[i] = a[i-1] + a[i-2];
}
int main() {
	int t;
	scanf("%d", &t);
	fibo();
	while (t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", a[n]);
	}
	return 0;
}

