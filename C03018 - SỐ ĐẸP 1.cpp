#include <stdio.h>
#include <math.h>
// IT Club PTIT Hanoi

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int ngto(int x){
	if (x < 2) return 0;
	for (int i = 2; i <= sqrt(x); i++)
		if (x % i == 0) return 0;
	return 1;
}

int c[100000] = {0};
void fibo(){
	int f0 = 0, f1 = 1, fn = 1;
	c[0] = 1; c[1] = 1;
	for (int i = 3; i <= 20; i++){
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
		c[fn] = 1;
	}
}

int get(int x){
	int sum = 0;
	while (x){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b) swap(&a, &b);
	fibo();
	for (int i = a; i <= b; i++)
		if (ngto(i) && c[get(i)]) printf("%d ", i);
	return 0;
}