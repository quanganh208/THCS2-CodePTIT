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
void swap(struct SinhVien *a, struct SinhVien *b){
    struct SinhVien tmp = *a;
    *a = *b;
    *b = tmp;
}
void Sort(struct SinhVien a[1000], int n){
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i].total < a[j].total) swap(&a[i], &a[j]);
}
int main(){
    int n;
    struct SinhVien a[1000];
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
        a[i].id = i + 1; 
    }
    Sort(a, n);
    for (int i = 0; i < n; i++)
        printf("%d %s %s %.1f\n", a[i].id, a[i].name, a[i].birth, a[i].total);
    return 0;
}