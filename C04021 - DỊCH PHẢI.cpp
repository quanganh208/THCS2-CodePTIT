#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main(){
	int n, a[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	int vt;
	scanf("%d", &vt);
	for (int i = n - vt; i < n; i++) printf("%d ", a[i]);
	for (int i = 0; i < n - vt; i++) printf("%d ", a[i]);
	return 0;
}

