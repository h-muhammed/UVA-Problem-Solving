#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char word[10];
int Index;
char Table[84000][6];
bool isValid();
void init();

int main()
{
    int i;
    //freopen("in.txt","r",stdin);

    init();
    while (gets(word))
    {
        if (isValid())
        {
            for (i=0; i<Index; i++)
                if(!strcmp(word,Table[i]))
                {
                    printf("%d\n",i+1);
                    break;
                }
        }
        else
            printf("0\n");
    }
    return 0;
}

void init()
{
    memset(Table,'\0',sizeof(Table));
    int i,j,k,m,n;
    Index=0;
    for ( i=0; i<26; i++ )
    {
        Table[Index][0] = i+97;
        Index++;
    }
    for ( i=0; i<25; i++ )
        for ( j=i+1; j<26; j++ )
        {
            Table[Index][0] = i+97;
            Table[Index][1] = j+97;
            Index++;
        }
    for ( i=0; i<24; i++ )
        for ( j=i+1; j<25; j++ )
            for ( k=j+1; k<26; k++ )
            {
                Table[Index][0] = i+97;
                Table[Index][1] = j+97;
                Table[Index][2] = k+97;
                Index++;
            }
    for ( i=0; i<23; i++ )
        for ( j=i+1; j<24; j++ )
            for ( k=j+1; k<25; k++ )
                for ( m=k+1; m<26; m++ )
                {
                    Table[Index][0] = i+97;
                    Table[Index][1] = j+97;
                    Table[Index][2] = k+97;
                    Table[Index][3] = m+97;
                    Index++;
                }
    for ( i=0; i<22; i++ )
        for ( j=i+1; j<23; j++ )
            for ( k=j+1; k<24; k++ )
                for ( m=k+1; m<25; m++ )
                    for ( n=m+1; n<26; n++ )
                    {
                        Table[Index][0] = i+97;
                        Table[Index][1] = j+97;
                        Table[Index][2] = k+97;
                        Table[Index][3] = m+97;
                        Table[Index][4] = n+97;
                        Index++;
                    }
}

bool isValid()
{
    int i;
    for ( i=0; i<strlen(word)-1; i++ )
        if ( word[i] >= word[i+1] ) return false;
    return true;
}
