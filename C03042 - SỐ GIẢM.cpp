#include <stdio.h>
int check(int n){
	while (n >= 10){
		int tmp = n % 10;
		n /= 10;
		if (n % 10 <= tmp) return 0;
	}
	return 1;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++)
			if (check(i)) cnt++;
		printf("%d\n", cnt);
	}
	return 0;
}
