#include <stdio.h>
#include <math.h>
int check_number4(int x){
	while (x){
		int tmp = x % 10;
		if (tmp == 4) return 0;
		x /= 10;
	}
	return 1;
}

int check_tn(int x){
	int t = x;
	int tmp = 0;
	while (x){
		tmp = tmp*10 + x % 10;
		x /= 10;
	}
	if (t == tmp) return 1; else return 0;
}

int check_10(int x){
	int sum = 0;
	while (x){
		sum += x % 10;
		x /= 10;
	}
	if (sum % 10 == 0) return 1; else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		for (int i = pow(10, n - 1); i < pow(10, n); i++)
			if (check_number4(i) && check_tn(i) && check_10(i)) printf("%d ", i);
		printf("\n");
	}
	return 0;
}
