#include <stdio.h>
void solve(int n){
	int a[20][20];
	int dong = n, cot = n, k = n*n, p = 0;
	while (k){
		for(int i = p; i < cot; i++)
			a[p][i] = k--;
		for(int i = p+1; i < dong; i++)
			a[i][cot-1] = k--;
		if ( p != dong-1){
			for(int i = cot-2; i >=p; i--)
				a[dong-1][i] = k--;
		}	
		if(p!=cot-1){
			for(int i = dong-2; i > p; i--)
				a[i][p] = k--;
		}	
		p++;dong --; cot --;
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		printf("Test %d:\n", i);
		int n;
		scanf("%d", &n);
		solve(n);
	}
	return 0;
}