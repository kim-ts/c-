#pragma warning(disable:4996)
#include <stdio.h>
 
char decrypt(char ch, int M);
char encrypt(char ch, int M);
 
int main() {
    char ch_array[100], origin_array[100] = { 0 };
    char decrypted_char = '0', encrypted_char = '0';
    int M1, M2, i;
    for (i = 0; ; i++) {
        scanf("%c", &ch_array[i]);
        if (ch_array[i] == '*') break;
    }
    scanf("%d %d", &M1, &M2);
    for (int p = 0; p < i; p++) {
        origin_array[p] = decrypt(ch_array[p], M1);
        printf("%c", origin_array[p]);
    } // 복호화함수실행과 복호화한 문자 출력파트
 
    puts("");
    for (int p = 0; p < i; p++) {
        ch_array[p] = encrypt(origin_array[p], M2);
        printf("%c", ch_array[p]);
    }// 암호화함수실행과 암호화한 문자 출력파트
}

char encrypt(char ch, int M) {
    char result = '0';
    if ('a' <= ch && ch <= 'z') {//ch가 소문자일경우
        M = M % 26;
        if (ch + M > 'z') {
            result = 'a' + (ch - 'z' + M) - 1;
        }
        else return ch + M;
    }
    else if ('A' <= ch && ch <= 'Z') {//ch가 대문자일경우
        M = M % 26;
        if (ch + M > 'Z') {
            result = 'A' + (ch - 'Z' + M) - 1;
            return result;//결과값 반환
        }
        else return ch + M;
    }
    else return ch;// ch가 알파벳문자가 아닐경우 그냥 ch반환
 
}
