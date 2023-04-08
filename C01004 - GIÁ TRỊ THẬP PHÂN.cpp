#include <stdio.h>

int main(){
	long long t;
	scanf("%lld", &t);
	while (t--){
		double n;
		scanf("%lf", &n);
		printf("%.15lf\n", 1/n);
	}
}
