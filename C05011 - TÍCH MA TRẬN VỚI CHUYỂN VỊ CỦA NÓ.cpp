#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for (int k = 1; k <= t; k++){
		printf("Test %d:\n", k);
		int n, m, a[101][101], b[101][101];
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
				b[j][i] = a[i][j];
			}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				int sum = 0;
				for (int l = 0; l < m; l++)sum += a[i][l] * b[l][j];
				printf("%d ", sum);
			}
			printf("\n");
		}
	}	
	return 0;
}