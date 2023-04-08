#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int check(int x){
	int f0, f1 = 0, fn = 1;
	if (x == 0 || x == 1) return 1;
	while (fn <= x){
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
		if (fn == x) return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	if (check(n)) printf("1"); else printf("0");
	return 0;
}
