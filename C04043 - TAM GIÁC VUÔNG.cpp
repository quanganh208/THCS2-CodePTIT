#include<stdio.h>
typedef long long ll;

void swap(ll* a, ll* b) { 
    ll t = *a; 
    *a = *b; 
    *b = t; 
} 
  
void QuickSort(ll a[], int l, int r)
{
    int i = l;
    int j = r;
    ll p = a[(l + r) / 2];
    while (i < j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(&a[i], &a[j]);
            i++;
            j--;
        }
    }
    if (i < r) QuickSort(a, i, r);
    if (j > l) QuickSort(a, l, j);
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        long long a[5001] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            a[i] *= a[i];
        }
        QuickSort(a, 0, n-1);
        int flag = 0;
        int left = 0, right = n - 2, x = n - 1;
        while (1){
            if (a[left] + a[right] == a[x]){
                flag = 1;
                break;
            }
            else if (a[left] + a[right] < a[x]) left++;
            else right--;
            if (left == right){
                x--;
                left = 0;
                right = x - 1;
            }
            if (x == 1) break;
        }
        if (flag) printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}