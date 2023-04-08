#include <stdio.h>

int main(){
	int t, c = 1;
	scanf("%d", &t);
	while (t--){
		printf("Test %d:\n", c++);
		int a[101][101], n, m;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
				
		for (int i = 1; i < n; i++){
			for (int j = 1; j < m; j++)
				printf("%d ", a[i][j]);
		printf("\n");
		}
	}
	return 0;
}
