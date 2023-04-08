#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int tongchuso(long long n){
	int sum = 0;
	while (n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int tongnhantu(long long n){
	int i = 2, sum = 0;
	while (n > 1){
		if (n % i == 0){
			sum += tongchuso(i);
			n /= i;
		}else i++;
	}
	return sum;
}
int main(){
	long long n;
	scanf("%lld", &n);
	if (tongchuso(n) == tongnhantu(n)) printf("YES");
	else printf("NO");
	return 0;
}

