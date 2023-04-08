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
	int t, cnt = 1;
	scanf("%d", &t);
	while (t--){
		printf("Test %d:\n", cnt++);
		int n, a[101];
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if (check(a[i])) b[a[i]]++;
		}
		for (int i = 1; i <= 100000; i++)
			if (b[i]){
				printf("%d xuat hien %d lan\n", i, b[i]);
				b[i] = 0;
			}
	}
	return 0;
}

