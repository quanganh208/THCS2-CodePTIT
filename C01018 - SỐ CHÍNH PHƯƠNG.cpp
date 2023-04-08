#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		if (pow((int)sqrt(n), 2) == n) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
