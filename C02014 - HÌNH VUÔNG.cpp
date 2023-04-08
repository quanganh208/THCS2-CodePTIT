#include <stdio.h>
// IT Club PTIT Hanoi

int main() {
	// Your code goes here
	int n, check = 1, c = 2;
	scanf("%d",&n);
	for (int i = 1; i <=(n-1)*2+1;i++){
		if (i == 1 || i == (n-1)*2+1){
			for (int j = 1; j <=(n-1)*2+1;j++){
				printf("%d",n);
			}
		}else{
			if (check){
				for (int j = 1; j < i;j++){//in so dau
					printf("%d",n-j+1);
				}
				for (int j = i; j <=(n-1)*2+2-i;j++){//in so giua
					printf("%d",n-i+1);
				}
				int cnt = 2;
				for (int j = (n-1)*2+3-i; j <= (n-1)*2+1;j++){//in so cuoi
					printf("%d",n-i+cnt++);
				}
				if (n-i+1 == 1){
					check = 0;
				}
			}else{
				for (int j = 1; j < i-c;j++){ // in so dau
					printf("%d",n-j+1);
				}
				for (int j = i-c; j <=(n-1)*2+2-i+c;j++){//in so giua
					printf("%d",n-i+c+1);
				}
				int cnt = 2;
				for (int j = (n-1)*2+3-i+c; j <= (n-1)*2+1;j++){//in so cuoi
					printf("%d",n-i+c+cnt++);
				}
				c+=2;
			}
		}
		printf("\n");
	}
	return 0;
}

