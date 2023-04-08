#include <stdio.h>

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int main(){
	int n, a[100];;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < n - 1; i++){
		int min_i = i;
		for (int j = i + 1; j < n; j++)
			if (a[min_i] > a[j]) min_i = j;
		swap(&a[min_i], &a[i]);
		printf("Buoc %d: ", i + 1);
		for (int i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
	}
		
	return 0;
}
