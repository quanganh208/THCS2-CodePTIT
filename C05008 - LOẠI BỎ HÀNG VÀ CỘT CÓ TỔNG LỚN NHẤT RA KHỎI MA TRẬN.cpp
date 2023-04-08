#include <stdio.h>
void reset(int a[10][10], int m, int n){
	for (int i = 0; i <= m; i++)
		for (int j = 0; j <= n; j++) a[i][j] = 0;
}
int main(){
	int t;
	scanf("%d", &t);
	for (int k = 1; k <= t; k++){
		printf("Test %d:\n", k);
		int m, n, max1 = 0, max2 = 0, flag1, flag2;
		scanf("%d %d", &m, &n);
		int a[10][10];
		reset(a, m, n);
		for (int i = 0; i < m; i++){
			for (int j = 0; j < n; j++){
				scanf("%d", &a[i][j]);
				a[i][n] += a[i][j];	
			}
			max1 = (max1 < a[i][n]) ? a[i][n] : max1;
		}
		for (int i = 0; i < m; i++)
			if (a[i][n] == max1){
				for (int j = 0; j <= n; j++) a[i][j] = 0;
				flag1 = i;
			}
		
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				a[m][j] += a[i][j];
		for (int i = 0; i < n; i++)
			max2 = (max2 < a[m][i]) ? a[m][i] : max2;
		for (int i = 0; i < n; i++)
			if (a[m][i] == max2)
				flag2 = i;
		for (int i = 0; i < m; i++){
			if (flag1 == i) continue;
			for (int j = 0; j < n; j++)
				if (flag2 != j) printf("%d ", a[i][j]);
			printf("\n");
		}
	}
	
	return 0;
}