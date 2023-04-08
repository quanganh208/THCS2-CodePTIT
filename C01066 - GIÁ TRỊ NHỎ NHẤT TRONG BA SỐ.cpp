#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	long long min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	printf("%lld", min);
	return 0;
}
