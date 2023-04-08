#include <stdio.h>

int main(){
	int m, n, p, q;
	int a[100][100], b[100][100], c[100][100], ans[100][100];
	scanf("%d %d %d %d", &m, &n, &p, &q);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < p; j++) scanf("%d", &b[i][j]);	
	for (int i = 0; i < p; i++)
		for (int j = 0; j < q; j++) scanf("%d", &c[i][j]);
	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < p; j++){
			int sum = 0;
			for (int k = 0; k < n; k++) sum += a[i][k] * b[k][j];
			ans[i][j] = sum;
		}
	
	for (int i = 0; i < m; i++){
		for (int j = 0; j < q; j++){
			int sum = 0;
			for (int k = 0; k < p; k++) sum += ans[i][k] * c[k][j];
			printf("%d ", sum);
		}
		printf("\n");
	}
	return 0;
}
