#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	int cnt = 0;
	for (int i = 1; i <= sqrt(x); i++)
		if (x % i == 0){
			if (i*i == x && i % 2 == 0) cnt++;
			else{
				if ((x / i) % 2 == 0) cnt++;
				if (i % 2 == 0) cnt++;
			}
		}
	return cnt;
}
int main(){
	int t, count = 1;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", check(n));

	}
	return 0;
}