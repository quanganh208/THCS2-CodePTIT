#include <stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int test = 1; test <= t; test++){
		printf("Test %d:\n", test);
		int n, m;
		scanf("%d %d", &n, &m);
		int a[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		for (int i1 = 0; i1 < n; i1++)
		{
			for (int j1 = 0; j1 < m; j1++)
			{
				for (int i2 = i1; i2 < n; i2++)
					for (int j2 = j1; j2 < m; j2++)
						if (a[i1][j1] > a[i2][j2])
							swap(&a[i1][j1], &a[i2][j2]);
				printf("%d ", a[i1][j1]);
			}
			printf("\n");
		}
	}
	return 0;
}