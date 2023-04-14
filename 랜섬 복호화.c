#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>

char *decrypt(char *dest, const char *encryptstr)
{
    char *origin;
    for (origin = dest; *encryptstr; dest++, encryptstr++)//종료 문자를 만날 때까지 반복
    {
        if (isupper(*encryptstr))//대문자일 때
        {
            *dest = (*encryptstr - 'A' + 21) % 26 + 'A';//21칸 밀기('F'->'A')
        }
        if (islower(*encryptstr))//소문자일 때
        {
            *dest = (*encryptstr - 'a' + 16) % 26 + 'a';//16칸 밀기('k'->'a')
        }
        if (isdigit(*encryptstr))//숫자 문자일 때
        {
            *dest = (*encryptstr - '0' + 7) % 10 + '0';//7칸 밀기(3->0)
        }
        if (isalnum(*encryptstr) == 0)
        {
            *dest = *encryptstr;
        }
    }
    *dest = '\0';
    return origin;
}

int main() {
    char *userprofile = getenv("USERPROFILE"); // 환경 변수 가져오기


    DIR *dir;
    struct dirent *ent;
    char folderpath[1000]; // 폴더 경로
    char filepath2[1000]; // 파일 경로
    

    sprintf(folderpath, "%s\\Desktop\\test", userprofile); // 폴더 경로 설정
    dir = opendir(folderpath); // 폴더 열기
    if (dir == NULL) {
        printf("dir open failed\n");
        return 1;
    }
    while ((ent = readdir(dir)) != NULL) { // 폴더 내 파일 리스트 가져오기
    
        if (ent->d_type == DT_REG) { // 파일인 경우
            char filecontent[1000] = "";
            sprintf(filepath2, "%s\\%s", folderpath, ent->d_name); // 파일 경로 설정
            FILE *fp = fopen(filepath2, "r"); // 파일 열기
            if (fp == NULL) {
                printf("file open failed\n");
                return 1;
            }
            // 파일 내용 읽기
            char buffer[1000];
            while (fgets(buffer, 1000, fp) != NULL) {
                strcat(filecontent, buffer);
            }
            printf("%s\n",filecontent);
            //암호화
            
            char de_str[1000];
            decrypt(de_str, filecontent);
            printf("decrypted: %s\n", de_str);
            FILE *fp1 = fopen(filepath2, "w");
            fprintf(fp1, de_str);
            fclose(fp); // 파일 닫기
            fclose(fp1);
        }
    }
    closedir(dir); // 폴더 닫기


    char filepath[1000]; // 파일 경로
    char *filename = "README!.txt"; // 파일 이름
    sprintf(filepath, "%s\\Desktop\\test\\%s", userprofile, filename);
    remove(filepath);

    return 0;
}