#include <stdio.h>
void print(char a[]);
int main(void)
{
    char s[50];
    int key=17;
    int i=0;
printf("input: ");
gets(s);
print(s);
for(i=0;s[i]!='\0';i++)
{
    s[i]=s[i]^key;
}
printf("    ");
print(s);

print(s);
for(i=0;s[i]!='\0';i++)
{
    s[i]=s[i]^key;
}
printf("    ");
print(s);

return 0;
}
void print(char a[])
{
    int i=0;
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c", a[i]);
    }
}