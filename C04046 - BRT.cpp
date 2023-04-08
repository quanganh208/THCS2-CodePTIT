#include <stdio.h>
#include <math.h>
void Swap(int *x, int *y){
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void QuickSort(int a[100005], int left, int right){
	int i = left;
	int j = right;
	int key = a[(left + right) / 2];
	while (i <= j){
		while (a[i] < key) i++;
		while (a[j] > key) j--;
		if (i <= j){
			Swap(&a[i], &a[j]);
			i++;
			j--;
		}
		break;
	}
	if (left < j) QuickSort(a, left , j);
	if (i < right) QuickSort(a, i, right);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		int a[100005] = {0};
		int b[100005] = {0};
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		QuickSort(a, 0, n - 1);
		int min = 1e9;
		for (int i = 0; i < n - 1; i++){
			b[i] = abs(a[i] - a[i + 1]);
			min = (b[i] < min) ? b[i] : min;
		}
		int cnt = 0;
		for (int i = 0; i < n - 1; i++)
			if (b[i] == min) cnt++;
		printf("%d %d\n", min, cnt);
	}
	return 0;
}