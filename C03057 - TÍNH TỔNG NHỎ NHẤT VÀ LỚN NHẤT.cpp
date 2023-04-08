#include <stdio.h>
#include <math.h>
long long min(long long x){
	long long i = 0, a[20], tmp = 0;
	while (x){
		int t = x % 10;
		if (t == 6) a[i++] = 5;
		else a[i++] = t;
		x /= 10;
	}
	for (int j = i - 1; j >= 0; j--) tmp = tmp*10 + a[j]; 
	return tmp;
}
long long max(long long x){
	long long i = 0, a[20], tmp = 0;
	while (x){
		int t = x % 10;
		if (t == 5) a[i++] = 6;
		else a[i++] = t;
		x /= 10;
	}
	for (int j = i - 1; j >= 0; j--) tmp = tmp*10 + a[j]; 
	return tmp;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long x1, x2;
		scanf("%lld %lld", &x1, &x2);
		printf("%lld %lld\n", min(x1) + min(x2), max(x1) + max(x2));
	}
	return 0;
}
