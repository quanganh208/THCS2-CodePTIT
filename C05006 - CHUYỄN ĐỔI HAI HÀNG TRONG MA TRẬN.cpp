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
		if (i == c)
			for (int j = 0; j < n; j++) printf("%d ", a[d][j]);
		else if (i == d)
			for (int j = 0; j < n; j++) printf("%d ", a[c][j]);
		else
			for (int j = 0; j < n; j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}