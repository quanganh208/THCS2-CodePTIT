#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int max = a;
	if (max < b) max = b;
	int m;
	for (int i = 0; i < a; i++){
		m = max;
		for (int j = 0; j < b; j++)
			if (j < i) printf("%c", m-- + 96);
			else printf("%c", m + 96);
		printf("\n");
	}
	return 0;
}
