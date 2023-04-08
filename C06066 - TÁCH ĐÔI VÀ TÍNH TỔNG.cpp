#include <stdio.h>
#include <string.h>
void strreverse(char a[1000]){
    char tmp[1000];
    strcpy(tmp, a);
    for (int i = strlen(tmp) - 1; i >= 0; i--) a[i] = tmp[strlen(tmp) - i - 1];
}
void cong_so_lon(char a[1000], char b[1000], char result[1000]){
    // Dao chuoi + tim length Max
    strreverse(a); strreverse(b);
    int len = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);
    // Lam rong chuoi tranh error
    a[len] = '\0'; b[len] = '\0';;
    // Chen so 0 vao cuoi
    for (int i = strlen(a); i < len; i++) a[i] = '0';
    for (int i = strlen(b); i < len; i++) b[i] = '0';
    // Thuc hien tinh toan
    int nho = 0;
    for (int i = 0; i < len; i++){
        int s = (a[i] - '0') + (b[i] - '0') + nho;
        result[i] = s % 10 + '0';
        nho = s / 10;
    }
    if (nho > 0) result[len] = '1';
    // Dao nguoc xau + tra ket qua
    strreverse(result);
}
int main(){
    char s[1000] = "";
    scanf("%s", s);
    int len = strlen(s);
    while (len > 1){
        char s1[1000] = "", s2[1000] = "", result[1000] = "";
        int half_len = len / 2;
        strncpy(s1, s, half_len);
        s1[half_len] = '\0';
        strncpy(s2, s + half_len, len - half_len);
        s2[len - half_len] = '\0';
        cong_so_lon(s1, s2, result);
        printf("%s\n", result);
        strcpy(s, result);
        len = strlen(s);
    }
    return 0;
}