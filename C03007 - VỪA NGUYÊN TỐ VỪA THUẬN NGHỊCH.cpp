#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int get(int x){
	int tmp = 0, t = x;
	while (x){
		tmp *= 10;
		tmp += x % 10;
		x /= 10;
	}
	if (tmp == t) return 1; else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d %d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++){
			if (check(i) && get(i)){
				printf("%lld ", i);
				cnt++;
			}
			if (cnt == 10){
				printf("\n");
				cnt = 0;
			}
		}
		printf("\n\n");
	}
	return 0;
}
