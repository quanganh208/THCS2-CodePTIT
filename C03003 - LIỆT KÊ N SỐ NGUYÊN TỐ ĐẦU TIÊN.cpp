#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int p[10000000] = {0};
void snt(){
	p[0] = 1; p[1] = 1;
	for (int i = 2; i <= sqrt(10000000); i++)
		if (p[i] == 0){
			int j = i*i;
			while (j <= 10000000){
				p[j] = 1;
				j += i;
			}
		}
}
int main(){
	long long n;
	scanf("%lld", &n);
	snt();
	int cnt = 0, i = 2;
	while (cnt < n){
		if (p[i] == 0){
			printf("%lld\n", i);
			cnt++;
		}
		i++;
	}
	return 0;
}

