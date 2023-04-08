#include <stdio.h>

int gthua(int n){
	if (n == 0) return 1;
	return n*gthua(n-1);
}

int giatri(int i, int j){
	return gthua(i) / (gthua(j) * gthua(i-j));
}

void tamgiac(int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++)
			printf("%d ", giatri(i, j));
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	tamgiac(n);
	return 0;
}