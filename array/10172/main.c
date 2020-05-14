#include <stdio.h>
#include <string.h>

void scat(char s1[], char s2[]);

int main()
{
    char s1[201], s2[100];
    printf("input the two strings:\n");
    scanf("%s", s1);
    scanf("%s", s2);
    scat(s1, s2);
    printf("%s\n", s1);

    return 0;
}

void scat(char s1[], char s2[])
{
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i;
    for(i = 0; i < len2; i++)
    {
        s1[len1 + i] = s2[i];
    }
}