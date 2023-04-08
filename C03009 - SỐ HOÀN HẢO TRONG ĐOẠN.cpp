#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi
int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int get(int x){
	if (x == 1) return 0;
	int sum = 1;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0 && i*i == x) sum += i;
		else if (x % i == 0) sum+= i + x / i;
	return sum;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(a > b) swap(&a, &b);
	for (int i = a; i <= b; i++)
	if (i == get(i)) printf("%d ", i);
	return 0;
}
