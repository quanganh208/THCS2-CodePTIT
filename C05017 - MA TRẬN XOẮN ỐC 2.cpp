#include <stdio.h>
void Solve(int a[100][100], int n, int m){
	int b[100][100];
		int dong = n, cot = m, k = 1, p = 0;
		while (k <= n*m){
			for(int i = p; i < cot; i++){
				b[p][i] = k++;
				printf("%d ", a[p][i]);
			}
			for(int i = p+1; i < dong; i++){
				b[i][cot - 1] = k++;
				printf("%d ", a[i][cot - 1]);
			}
			if ( p != dong-1){
				for(int i = cot-2; i >=p; i--){
					b[dong - 1][i] = k++;
					printf("%d ", a[dong - 1][i]);
				}
			}	
			if(p!=cot-1){
				for(int i = dong-2; i > p; i--){
					b[i][p] = k++;
					printf("%d ", a[i][p]);
				}
			}	
			p++; dong--; cot--;
		}
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, m;
		scanf("%d %d", &n, &m);
		int a[100][100];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &a[i][j]);
		Solve(a, n, m);
		printf("\n");
	}
	
	return 0;
}