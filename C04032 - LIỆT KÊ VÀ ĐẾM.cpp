#include <stdio.h>
struct data{
	int number;
	int count;
};
int check(int x){
	int max = 9;
	while (x){
		int tmp = x % 10;
		if (tmp > max) return 0;
		else max = tmp;
		x /= 10;
	}
	return 1;
}

int main(){
	struct data a[100001];
	int x, index = 0;
	while(scanf("%d", &x) != -1){
		if (check(x)){
			int flag = 1;
			for (int i = 0; i < index; i++)
				if (x == a[i].number){
					a[i].count++;
					flag = 0;
					break;
				}
			if (flag){
				a[index].number = x;
				a[index++].count = 1;
			}
		}
	}

	for (int i = 0; i < index - 1; i++)
		for (int j = i + 1; j < index; j++)
			if (a[i].count < a[j].count){
				struct data tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
	for (int i = 0; i < index; i++)
		printf("%d %d\n", a[i].number, a[i].count);
	return 0;
}