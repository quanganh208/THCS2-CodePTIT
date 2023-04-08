#include <stdio.h>
#include <math.h>

struct TamGiac{
	float canh1, canh2, canh3, dientich;
};

int main(){
	struct TamGiac tg[1000], temp;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%f %f %f", &tg[i].canh1, &tg[i].canh2, &tg[i].canh3);
		float p = (tg[i].canh1 + tg[i].canh2 + tg[i].canh3) / 2;
		tg[i].dientich = sqrt(p * (p - tg[i].canh1) * (p - tg[i].canh2) * (p - tg[i].canh3));
	}
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(tg[i].dientich > tg[j].dientich){
				temp = tg[i];
				tg[i] = tg[j];
				tg[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) printf("%d %d %d\n", (int)tg[i].canh1, (int)tg[i].canh2, (int)tg[i].canh3);
	return 0;
}
