#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, max = 0, a[100] = {0};
		int d[30001] = {0};
		scanf("%d", &n);
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			d[a[i]]++;
			max = (d[a[i]] > max) ? d[a[i]] : max;
		}
		for (int i = 0; i < n; i++)
			if (d[a[i]] == max){
				printf("%d ", a[i]);
				d[a[i]] = 0;
			}
		printf("\n");

	}
	return 0;
}