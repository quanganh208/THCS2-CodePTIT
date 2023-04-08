#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n, a[101];
		scanf("%d", &n);
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		int sum = 0;
		for (int i = 1; i < n; i++)
			if (a[i-1] == a[i]) sum++;
		printf("%d\n", sum);	
	}
	return 0;
}

