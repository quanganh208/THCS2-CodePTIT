#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int main(){
	int n;
	scanf("%d", &n);
	int f0, f1 = 0, fn = 1;
	if (n >= 1) printf("0 ");
	if (n >= 2) printf("1 ");
	for (int i = 3; i <= n; i++){
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
		printf("%d ", fn);
	}
	return 0;
}
