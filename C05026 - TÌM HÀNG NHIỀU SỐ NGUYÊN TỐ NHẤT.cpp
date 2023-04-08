#include <stdio.h>
#include <math.h>
int ngto(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
void reset(int a[31][31], int n){
	for (int i = 0; i < n; i++) a[i][n] = 0;
}
int main(){
	int n, a[31][31];
	scanf("%d", &n);
	reset(a, n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
			if (ngto(a[i][j])) a[i][n]++;
		}
	int max = 0, vt = 1;
	for (int i = 0; i < n; i++)
		if (max < a[i][n]){
			max = a[i][n];
			vt = i;
		}

	printf("%d\n", vt + 1);
	for (int i = 0; i < n; i++)
		if (ngto(a[vt][i])) printf("%d ", a[vt][i]);
	return 0;
}