#include <stdio.h>
#include <math.h>
//IT PTIT Club
int ngto(long long x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long a, b, count = 0;
		scanf("%lld %lld", &a, &b);
		for (long long i = ceil(sqrt(a)); i <= sqrt(b); i++)
			if (ngto(i)) count++;
		printf("%lld\n", count);
	}
	
	return 0;
}

