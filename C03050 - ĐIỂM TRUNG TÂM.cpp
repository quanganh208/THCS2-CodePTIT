#include <stdio.h>

int p[1000000] = {0};
int a[1000000];
int main(){
	int n, check = 0;
	scanf("%d", &n);
	for (int i = 1; i <= 2*n - 2; i++){
		scanf("%d", &a[i]);
		p[a[i]]++;
		if (p[a[i]] == n - 1) check = 1;
	}
	if (check) printf("Yes"); else printf("No");
	return 0;
}
