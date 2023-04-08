#include <stdio.h>
#include <string.h>
struct SinhVien{
    int id;
    char name[1000];
    char birth[1000];
    float mark1;
    float mark2;
    float mark3;
    float total;
};

int main(){
    int n;
    struct SinhVien a[1000];
    float max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("\n");
        gets(a[i].name);
        scanf("\n");
        gets(a[i].birth);
        scanf("%f", &a[i].mark1);
        scanf("%f", &a[i].mark2);
        scanf("%f", &a[i].mark3);
        a[i].total = a[i].mark1 + a[i].mark2 + a[i].mark3;
        max = (a[i].total > max) ? a[i].total : max;
        a[i].id = i + 1; 
    }
    for (int i = 0; i < n; i++)
        if (a[i].total == max)
            printf("%d %s %s %.1f\n", a[i].id, a[i].name, a[i].birth, a[i].total);
    return 0;
}