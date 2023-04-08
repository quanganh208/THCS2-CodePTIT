#include <stdio.h>
#include <string.h>
void del(int a1, char a[1000][1000], char s[100]){
	for (int i = 0; i < a1; i++)
		if (strcmp(s, a[i]) == 0) strcpy(a[i], "");
}
void Sort(int a1, char a[1000][1000]){
	char temp[1000] = "";
	for (int i = 0; i < a1; i++)
		for (int j = i + 1; j < a1; j++)
			if (strcmp(a[i], a[j]) > 0){
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
}
int main(){
	char s1[100], s2[100], a[1000][1000], b[1000][1000];
	gets(s1);
	scanf("\n");
	gets(s2);
	int a1 = 0;
	char *token = strtok(s1, " ");
	while (token != NULL){
		strcpy(a[a1++], token);
		token = strtok(NULL, " ");
	}
	int b1 = 0;
	token = strtok(s2, " ");
	while (token != NULL){
		strcpy(b[b1++], token);
		token = strtok(NULL, " ");
	}
	Sort(a1, a);
	char temp[100] = "";
	for (int i = 0; i < a1; i++){
		int flag = 1;
		for (int j = 0; j < b1; j++)
			if (strcmp(a[i], b[j]) == 0) flag = 0;
		if (flag){
			printf("%s ", a[i]);
			strcpy(temp, a[i]);
			del(a1, a, temp);
		}
	}
	return 0;
}