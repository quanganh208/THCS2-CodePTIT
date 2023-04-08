#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++) if (check(i)){
			int tmp = i, c = 1;
			while (tmp){
				if (check(tmp % 10) == 0){
					c = 0;
					break;
				}
				tmp /= 10;
			}
			if (c) cnt++;
		};
		printf("%d\n", cnt);
	}
}

