#include <stdio.h>

int main(){
	int n, a[50][50];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	int left = 0, right = n  - 1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			if (j == left) printf("%d ", a[i][right]);
			else if (j == right) printf("%d ", a[i][left]);
			else printf("%d ", a[i][j]);
			left++;right--;
		printf("\n");
	}
	return 0;
}