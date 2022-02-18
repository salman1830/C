#include <stdlib.h>

#include <stdio.h>

#include <string.h>

char s[100005];

int main()
{
    int a,r,n,o=0;
    scanf("%s",&s);

    r = strlen(s);
    if(r%2==0)
    {
        n = r/2;
    }
    else
    {
        n= r/2+1;
    }
    for(a = 0; a<n; a++)
    {
        if(s[a]!= '?' &&s[r-a-1]!= '?' &&s[a]!=s[r-a-1])
        {
            o = 1;
            break;
        }
        if(s[a]=='?'&&s[r-a-1]!='?')
        {
            s[a]=s[r-a-1];
        }
        if(s[a]!='?'&&s[r-a-1]=='?')
        {
            s[r-a-1]=s[a];
        }
        if(s[a]=='?'&&s[r-a-1]=='?')
        {
            s[a]='a';
            s[r-a-1]='a';
        }
    }
    if(o==1)
    {
        printf("invalid input\n");
    }
    else
    {
        printf("%s\n",s);
    }
    return 0;
}
