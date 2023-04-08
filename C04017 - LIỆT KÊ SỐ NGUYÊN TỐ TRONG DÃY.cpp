#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int b[10000000] = {0};
int main(){
	int n, a[101], cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (check(a[i])) {
			b[a[i]]++;
			cnt++;
		}
	}
	printf("%d ", cnt);
	for (int i = 0; i < n; i++)
		if (b[a[i]]){
			printf("%d ", a[i]);
			//b[a[i]] = 0;
		}
	return 0;
}

