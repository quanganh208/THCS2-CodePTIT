#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

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
			b[a[i]]++;
		}
		for (int i = 0; i < n; i++)
			if (b[a[i]]){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
	}
	return 0;
}

