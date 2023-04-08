#include <stdio.h>

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Sort(int a[1000], int n){
	int flag = 1;
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1]){
				swap(&a[j], &a[j + 1]);
				flag = 1;
			}
		if (!flag) break;
		flag = 0;
		printf("Buoc %d:", i + 1);
		for (int j = 0; j < n; j++) printf(" %d", a[j]);
		printf("\n");
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int a[1000];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	Sort(a, n);
	return 0;
}