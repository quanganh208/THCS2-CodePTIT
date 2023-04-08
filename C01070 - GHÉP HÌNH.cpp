#include<stdio.h>
#include<math.h>

int main () {
	int a[100], max = 0, flag = 0, b[100] = {0};
	for(int i=0; i<6; i++){
		scanf("%d", &a[i]);
		max = a[i] > max ? a[i] : max;
		b[a[i]]++;
		if(b[a[i]] >=3)	flag = 1;
        if(a[i] != max && b[a[i]] >= 2) flag = 1;
	}
	int s = a[0]*a[1] + a[2]*a[3] + a[4]*a[5];
	if(max*max == s && flag) printf("YES");
	else printf("NO");
    return 0;
}

