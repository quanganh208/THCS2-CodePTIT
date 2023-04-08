#include <stdio.h>

void printIncreasingNumbers(int n, int lastDigit, int number) {
    if (n == 0) {
        printf("%d ", number);
        return;
    }

    for (int i = lastDigit; i <= 9; i++) {
        printIncreasingNumbers(n - 1, i, number * 10 + i);
    }
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		for (int i = 1; i <= 9; i++) {
			printIncreasingNumbers(n - 1, i, i);
		}
		printf("\n");
	}
    return 0;
}
