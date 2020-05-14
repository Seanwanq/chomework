#include <stdio.h>
#include <string.h>

#define N 100

int find(char str[], char c);

void del(char str[], char c);

int main()
{
    char str[N];
    char c;
    int length;
    printf("ÇëÊäÈë×Ö·û´®£º\n");
    gets(str);
    printf("ÇëÊäÈëÒªÉ¾³ıµÄ×Ö·û£º\n");
    scanf("%c", &c);
    del(str, c);
    printf("%s", str);


    return 0;
}

int find(char str[], char c)
{
    int len = strlen(str);
    int i;
    for(i = 0; i < len; i++)
    {
        if(str[i] == c)
        {
            break;
        }
    }
    if (i == len && str[i] != c)
    {
        return -1;
    }
    else
    {
        return i;
    }
    
}

void del(char str[], char c)
{
    int i;
    int length = strlen(str);
    while(find(str, c) != -1){
        for(i = find(str, c); i < length; i++)
        {
            str[i] = str[i + 1];
        }
    }
}