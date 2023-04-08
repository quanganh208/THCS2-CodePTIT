#include<stdio.h>

int main () {
	int n;
	scanf ("%d", &n);
	int len[100000], xuong[100000];
    int sumlen = 0, sumxuong= 0, minlen = 1e5, minxuong = 1e5;
	for (int i = 0; i < n; i++) {
		scanf ("%d %d", &len[i], &xuong[i]);
		if (len[i] < minlen) minlen = len[i];
		if (xuong[i] < minxuong) minxuong = xuong[i];
		sumlen += len[i];
		sumxuong += xuong[i];
	}
	sumlen += minxuong;
	sumxuong += minlen;
	printf ("%d\n", (sumlen > sumxuong) ? sumlen : sumxuong);
	return 0;
}
