#include <stdio.h>
#include <math.h>
#include <string.h>

typedef long long ll;
#define MAX 1000000

int n, a[MAX];
void run_test_case() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int b[MAX], index = 0;
  b[index++] = a[n-1];
  int curr = a[n-1];
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] > curr) {
      b[index++] = a[i];
      curr = a[i];
    }
  }

  for (int i = index - 1; i >= 0; i--) {
    printf("%d ", b[i]);
  }
  printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) 
      run_test_case();
}