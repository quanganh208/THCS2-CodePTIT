#include <stdio.h>
// IT Club PTIT Hanoi
int get(int x){
	int cnt = 0;
	while (x){
		cnt++;
		x /= 10;
	}
	return cnt;
}
int main() {
	// Your code goes here
	int a, b;
	scanf("%d %d", &a, &b);
	if (get(a) >= get(b)) printf("%d %d", a, b);
	else printf("%d %d", b, a);
	return 0;
}