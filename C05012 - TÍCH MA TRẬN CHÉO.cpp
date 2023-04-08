#include <stdio.h>

void create(int a[20][20], int n){
    for (int i = 0; i < n; i++){
        int c = 1;
        for (int j = 0; j < n; j++)
            if (j <= i) a[i][j] = c++;
            else a[i][j] = 0;
    }
}
void chuyenvi(int a[20][20], int b[20][20], int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) b[j][i] = a[i][j];
}
void nhanmatran(int a[20][20], int b[20][20], int n){
    for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				int sum = 0;
				for (int l = 0; l < n; l++)sum += a[i][l] * b[l][j];
				printf("%d ", sum);
			}
			printf("\n");
		}
}
int main(){
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        printf("Test %d:\n", i);
        int n;
        scanf("%d", &n);
        int a[20][20], b[20][20];
        create(a, n);
        chuyenvi(a, b, n);
        nhanmatran(a, b, n);
    }
}