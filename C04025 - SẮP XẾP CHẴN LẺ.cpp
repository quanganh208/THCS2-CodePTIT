#include <stdio.h>

void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int main(){
	int n, a[100], b[100], cnta = 0, cntb = 0, tmp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &tmp);
		if (tmp % 2 == 0) a[cnta++] = tmp;
		else b[cntb++] = tmp;
	}
	for (int i = 0; i < cnta - 1; i++)
		for (int j = i + 1; j < cnta; j++)
			if (a[i] > a[j]) swap(&a[i], &a[j]);
	
	for (int i = 0; i < cntb - 1; i++)
		for (int j = i + 1; j < cntb; j++)
			if (b[i] > b[j]) swap(&b[i], &b[j]);
			
	for (int i = 0; i < cnta; i++) printf("%d ", a[i]);
	for (int i = 0; i < cntb; i++) printf("%d ", b[i]);
	return 0;
}
