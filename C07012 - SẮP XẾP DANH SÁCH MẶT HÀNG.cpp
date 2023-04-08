#include <stdio.h>
#include <string.h>
struct mathang{
    int id;
    char name[1000];
    char group[1000];
    double buy;
    double sell;
    double profit;
};
void swap(struct mathang *a, struct mathang *b){
    struct mathang tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    int n;
    scanf("%d", &n);
    struct mathang a[1000];
    for (int i = 0; i < n; i++){
        scanf("\n");
        gets(a[i].name);
        scanf("\n");
        gets(a[i].group);
        scanf("%lf", &a[i].buy);
        scanf("%lf", &a[i].sell);
        a[i].profit = a[i].sell - a[i].buy;
        a[i].id = i + 1;
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].profit < a[j].profit) swap(&a[i], &a[j]);
    
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.2lf\n", a[i].id, a[i].name, a[i].group, a[i].profit);
    return 0;

}