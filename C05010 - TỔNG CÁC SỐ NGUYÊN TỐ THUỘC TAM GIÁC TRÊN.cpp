#include <stdio.h>
#include <math.h>

int ngto(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int main(){
	int n, a[50][50], sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
			if (j >= i && ngto(a[i][j])) sum+= a[i][j];
		}
	printf("%d", sum);
	return 0;
}