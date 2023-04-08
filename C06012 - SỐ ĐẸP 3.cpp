#include<math.h>
#include<stdio.h>
#include<string.h>

int snt(int n){
	if(n<2)	return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0)	return 0;
	}
	return 1;
}
int main () {
int t;
	scanf("%d", &t);
	while(t--){
		char s[1000];
		scanf("%s", &s);
		int count1 = 0, count2 = 0;
		for(int i=0; i<strlen(s); i++){
			if(s[i] != s[strlen(s)-1-i])	count1++;
			if(snt(s[i]-'0') == 0)	count2++;
		}
		if(count1 == 0  && count2 == 0)	printf("YES\n");
		else	printf("NO\n");
	}
    return 0;
}