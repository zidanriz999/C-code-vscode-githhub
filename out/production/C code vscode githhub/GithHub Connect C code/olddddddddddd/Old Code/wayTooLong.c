#include<stdio.h>
#include<string.h>
int main()
{

    char s[100];
    int ln,i,x;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        scanf("%s",s);
        ln=strlen(s);
        if(ln<=10)
        {
            printf("%s\n",s);

        }
        else
        {
            printf("%c%d%c\n",s[0],ln-2,s[ln-1]);
        }
    }

    return 0;
}
