#include <stdio.h>
#include <math.h>
int ngto(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}
int check(int x){
	int sum = 0;
	while (x){
		int tmp = x % 10;
		if (!ngto(tmp)) return 0;
		sum += tmp;
		x /= 10;
	}
	if (!ngto(sum)) return 0;
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
			if (check(i) && ngto(i)) cnt++;
		printf("%d\n", cnt);
	}
	
	return 0;
}