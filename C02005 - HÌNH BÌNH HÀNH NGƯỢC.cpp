#include <stdio.h>
#include <math.h>
//IT PTIT Club

int main(){
	int n, m, cnt = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i<= n; i++){
		for (int j = 1; j <= cnt; j++) printf("~");
		for (int j = 1; j <= m; j++) printf("*");
		cnt++;
		printf("\n");
	}
	return 0;
}