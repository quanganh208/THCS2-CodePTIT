#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
long long check(int x){
	long long c = 0, res = 1;
	for (int i = 2; i <= x; i+=2){
		int j = i;
		while (j % 2 == 0){
			j /= 2;
			c++;
		}
	}
	return c;
}

int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	if (check(n) >= k) printf("Yes");
	else printf("No");
	return 0;
}

