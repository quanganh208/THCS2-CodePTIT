#include <stdio.h>

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b){
    return a*b/gcd(a, b);
}
void rutgon(int* a, int *b){
    int ucln = gcd(*a, *b);
    *a /= ucln;
    *b /= ucln;
}
struct PhanSo{
    int tuso, mauso;
};
int main(){
    int t;
    scanf("%d", &t);
    for (int test = 1; test <= t; test++){
        printf("Case #%d:\n", test);
        struct PhanSo p, q;
        scanf("%d %d %d %d", &p.tuso, &p.mauso, &q.tuso, &q.mauso);
        //Rut gon 2 phan so
        rutgon(&p.tuso, &p.mauso);
        rutgon(&q.tuso, &q.mauso);
        // Quy dong 2 phan so
        int mausochung = lcm(p.mauso, q.mauso);
        p.tuso *= mausochung / p.mauso;
        p.mauso = mausochung;
        q.tuso *= mausochung / q.mauso;
        q.mauso = mausochung;
        printf("%d/%d %d/%d\n", p.tuso, p.mauso, q.tuso, q.mauso);
        struct PhanSo ans;
        // Cong 2 phan so
        ans.tuso = p.tuso + q.tuso;
        ans.mauso = mausochung;
        rutgon(&ans.tuso, &ans.mauso);
        printf("%d/%d\n", ans.tuso, ans.mauso);
        // Chia 2 phan so
        ans.tuso = p.tuso * q.mauso;
        ans.mauso = p.mauso * q.tuso;
        rutgon(&ans.tuso, &ans.mauso);
        printf("%d/%d\n", ans.tuso, ans.mauso);
    }
    return 0;
}