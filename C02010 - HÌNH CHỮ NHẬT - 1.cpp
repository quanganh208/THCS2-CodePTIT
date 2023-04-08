#include <stdio.h>
// IT Club PTIT Hanoi

int main(){
	int a, b, cnt = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++){
		printf("%d", i);
		
		for (int j = 1; j <= b; j++)
			if (j > i) printf("%d", j);
		
		for(int j = b - 1; j >= 1; j--){
			if (j < i) printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}