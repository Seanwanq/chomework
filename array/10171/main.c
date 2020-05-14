#include <stdio.h>
#include <string.h>

int main()
{
    char sen[100];
    fgets(sen, 100, stdin);
    int length = strlen(sen);
    int i;
    int num = 0;
    for(i = 0; i < length; i++)
    {
        if(sen[i] == ' ')
        {
            num++;
        }
    }
    num++;
    printf("%d", num);


    return 0;
}