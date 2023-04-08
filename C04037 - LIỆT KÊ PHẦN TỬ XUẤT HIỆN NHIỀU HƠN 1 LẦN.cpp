#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int b[1000000] = {0};
int main() {
	int n, a[101], ans[101];
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[a[i]]++;
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		if (b[a[i]] > 1){
			ans[cnt++] = a[i];
			b[a[i]] = 0;
		}
		
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++) printf("%d ", ans[i]);
	return 0;
}


