#include <stdio.h>

void swap(int *c, int *d){
	int temp = *c;
	*c = *d;
	*d = temp;

}
int main(){
	int a[100][100];
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);
	int c, d;
	scanf("%d %d", &c, &d);
	c--; d--;
	if (c > d) swap(&c, &d);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			if (j == c) printf("%d ", a[i][d]);
			else if (j == d) printf("%d ", a[i][c]);
			else printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}