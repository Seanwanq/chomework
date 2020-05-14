#include <stdio.h>
#include <string.h>

#define N 100

int find(char str[]);

void del(char str[]);

int main()
{
    char str[N];
    int length;
    printf("ÇëÊäÈë×Ö·û´®£º\n");
    gets(str);
    del(str);
    printf("%s", str);


    return 0;
}

int find(char str[])
{
    int len = strlen(str);
    int i;
    for(i = 0; i < len; i++)
    {
        if(str[i] == 'd')
        {
            break;
        }
    }
    if (i == len && str[i] != 'd')
    {
        return -1;
    }
    else
    {
        return i;
    }
    
}

void del(char str[])
{
    int i;
    int length = strlen(str);
    while(find(str) != -1){
        for(i = find(str); i < length; i++)
        {
            str[i] = str[i + 1];
        }
    }
}