#include <stdio.h>
#include <math.h>
unsigned long long f[100];
void sang_fibo(){
	f[0] = 0; f[1] = 1;
	for (int i = 2; i <= 92; i++) f[i] = f[i-1] + f[i-2];
}
int main(){
	sang_fibo();
	int t;
	scanf("%d", &t);
	while (t--){
		unsigned long long n;
		scanf("%llu", &n);
		for (int i = 0; i <= 92; i++)
			if (f[i] < n && f[i + 1] > n){
				printf("NO\n");
				break;
			}else if (f[i] == n){
				printf("YES\n");
				break;
			}
	}
	return 0;
}
