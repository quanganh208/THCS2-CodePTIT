#include <stdio.h>

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
void Sort1(int x[100], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++)
			if (x[i] > x[j]) swap(&x[i], &x[j]);
	}
}

void Sort2(int x[100], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++)
			if (x[i] < x[j]) swap(&x[i], &x[j]);
	}
}
int main(){
	int t, c = 1;
	scanf("%d", &t);
	while (t--){
		printf("Test %d:\n", c++);
		int n, a[100], b[100];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) scanf("%d", &b[i]);
		Sort1(a, n);
		Sort2(b, n);
		for (int i = 0; i < 2*n; i++)
			if (i % 2 == 0) printf("%d ", a[i / 2]);
			else printf("%d ", b[i / 2]);
		printf("\n");
	}
		
	return 0;
}

