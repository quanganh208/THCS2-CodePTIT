#include <stdio.h>
#include <math.h>
int ngto(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
int get(int k){
	while (1){
		if (ngto(k)) return k;
		else k++;
	}
}
void solve(int n){
	int a[100][100];
	int dong = n, cot = n, k = 1, p = 0, ans = 2;
	while (k <= n*n){
		for(int i = p; i < cot; i++){
			ans = get(ans);
			a[p][i] = ans++;
			k++;
		}
		for(int i = p+1; i < dong; i++){
			ans = get(ans);
			a[i][cot-1] = ans++;
			k++;
		}
		if ( p != dong-1){
			for(int i = cot-2; i >=p; i--){
				ans = get(ans);
				a[dong-1][i] = ans++;
				k++;
			}
		}	
		if(p!=cot-1){
			for(int i = dong-2; i > p; i--){
				ans = get(ans);
				a[i][p] = ans++;
				k++;
			}
		}	
		p++; dong--; cot--;
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for (int test = 1; test <= t; test++){
		printf("Test %d:\n", test);
		int n;
		scanf("%d", &n);
		solve(n);
	}
	return 0;
}