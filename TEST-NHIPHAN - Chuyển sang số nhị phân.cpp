#include <stdio.h>

int main(){
	int a, n = 0;
	char s[1000];
	scanf("%d", &a);
	if (a == 0){
		n = 1;
		s[0] = '0';
	}
	while (a){
		int t = a % 2;
		s[n++] = t + '0';
		a /= 2;
	}
	for (int i = n - 1; i >= 0; i--) printf("%c", s[i]);
	return 0;
}
