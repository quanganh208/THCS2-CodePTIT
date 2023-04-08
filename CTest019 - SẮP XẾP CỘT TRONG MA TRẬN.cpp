#include<stdio.h>
#include <math.h>
int d = 0;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[101][101], int low, int high)
{
    int pivot = arr[high][d-1];
    int left = low;
    int right = high - 1;
    while(1){
        while(left <= right && arr[left][d - 1] < pivot) left++;
        while(right >= left && arr[right][d - 1] > pivot) right--;
        if (left >= right) break;
        swap(&arr[left][d-1], &arr[right][d-1]);
        left++;
        right--;
    }
    swap(&arr[left][d-1], &arr[high][d-1]);
    return left;
}

void quickSort(int arr[101][101], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--){
    	int n, m;
    	scanf("%d %d %d", &n, &m, &d);
    	int a[101][101];
    	for (int i = 0; i < n; i++)
    		for (int j = 0; j < m; j++) scanf("%d", &a[i][j]);
    	quickSort(a, 0, n-1);
    	for (int i = 0; i < n; i++){
    		for (int j = 0; j < m; j++) printf("%d ", a[i][j]);
    		printf("\n");
    	}
    }
    
    return 0;
}
