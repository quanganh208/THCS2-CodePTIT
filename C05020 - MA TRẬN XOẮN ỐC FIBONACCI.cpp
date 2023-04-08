#include <stdio.h>
int f[100] = {0};
void fibo(){
	f[1] = 1;
	for (int i = 2; i <= 82; i++) f[i] = f[i - 1] + f[i - 2];
}
void solve(int n){
	int a[100][100];
	int dong = n, cot = n, k = 0, p = 0;
	while (k < n*n){
		for(int i = p; i < cot; i++)
			a[p][i] = f[k++];
		for(int i = p+1; i < dong; i++)
			a[i][cot-1] = f[k++];
		if ( p != dong-1){
			for(int i = cot-2; i >=p; i--)
				a[dong-1][i] = f[k++];
		}	
		if(p!=cot-1){
			for(int i = dong-2; i > p; i--)
				a[i][p] = f[k++];
		}	
		p++; dong--; cot--;
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	fibo();
	solve(n);
	return 0;
}