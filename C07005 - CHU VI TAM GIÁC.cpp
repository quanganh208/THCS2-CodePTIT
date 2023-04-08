#include <stdio.h>
#include <math.h>

struct Point{
    double x; 
    double y;
};
struct Triangle{
    struct Point a;
    struct Point b;
    struct Point c;
	double canh1;
	double canh2;
	double canh3;
};
int CheckTriangle(double canh1, double canh2, double canh3){
	if ((canh1 + canh2) > canh3 && (canh2 + canh3) > canh1 && (canh3 + canh1) > canh2)
		return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		struct Triangle tg;
		scanf("%lf %lf", &tg.a.x, &tg.a.y);
		scanf("%lf %lf", &tg.b.x, &tg.b.y);
		scanf("%lf %lf", &tg.c.x, &tg.c.y);
		tg.canh1 = sqrt(pow(tg.a.x - tg.b.x, 2) + pow(tg.a.y - tg.b.y, 2));
		tg.canh2 = sqrt(pow(tg.b.x - tg.c.x, 2) + pow(tg.b.y - tg.c.y, 2));
		tg.canh3 = sqrt(pow(tg.c.x - tg.a.x, 2) + pow(tg.c.y - tg.a.y, 2));
		if (!CheckTriangle(tg.canh1, tg.canh2, tg.canh3)) printf("INVALID\n");
		else{
			double p = tg.canh1 + tg.canh2 + tg.canh3;
			printf("%.3lf\n", p);
		}
	}
	
	return 0;
}

