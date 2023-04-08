#include <stdio.h>
#include <math.h>
int p[2000005] = {0};
void snt(){
	p[0] = 1; p[1] = 1;
	for (int i = 2; i <= sqrt(2000005); i++)
		if (p[i] == 0)
			for (int j = i*i;j <= 2000005; j += i) p[j] = i;
			
	for (int i = 2; i <= 2000005; i++)
		if (p[i] == 0) p[i] = i;
}

int main(){
	snt();
	long long n, a, sum = 0;
	scanf("%lld", &n);
	for (int i = 0; i < n; i++){
		scanf("%lld", &a);
		while (a > 1){
			sum += p[a];
			a /= p[a];
		}
	}
	printf("%lld", sum);
	return 0;
}
