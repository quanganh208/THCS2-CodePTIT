#include <stdio.h>
#include <math.h>

int ngto(int n){
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0) return 0;
	return 1;
}

int check(int n){
	int sum = 0;
	while (n){
		sum += n % 10;
		n /= 10;
	}
	if (sum % 5 == 0) return 1; else return 0; 
}
int main(){
	int n, cnt = 0;
	scanf("%d", &n);
	for (int i = 5; i <= n; i++)
		if (ngto(i) && check(i)){
			printf("%d ", i);
			cnt++;
		}
	printf("\n%d", cnt);
	return 0;
}
