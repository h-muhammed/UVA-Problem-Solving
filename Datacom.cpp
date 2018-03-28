#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;

#define sf scanf
#define pf printf

void drawSignal(int len,char signal[])
{
    int i , j ,track=0;
    char image[7][1000];

    memset(image,' ',sizeof(image) );

    //puts(signal);
    for(i=0;i<len;++i)
    {
        //signal  level
        image[0][track+2] = signal[i];

        //draw signal  when  level 0
        if(signal[i] == '0')
        {
            for(j=0;j<4;++j)
            {
                image[6][track++] = '_';
            }
        }
        //draw signal  when  level  1
        else if(signal[i] == '1')
        {
            for(j=0;j<4;++j)
            {
                image[1][track++] = '_';
            }
        }
        // draw  signal  when  level  changes
        if(i+1<len && signal[i]!=signal[i+1])
        {
            for(j=2;j<=5;++j)
            {
                image[j][track] = '|';
            }
            track++;
        }
        pf("\n");
    }

    // draw  the  full  signal
    for(i=0;i<=6;++i)
    {
        for(j=0;j<track;++j)
            pf("%c",image[i][j]);
        pf("\n");
    }
    pf("\n\n");
    return ;
}

int lengthCode(int k)
{
    int m , n;

    for(m=1;m<=20;++m)
    {
        //  n = 2^m - 1   and  n-m>=k
        n = pow(2,m) - 1;

        if(n-m>=k)
        {
            pf("m = %d\n",m);
            return n;
        }
    }
}

void hammingCode(char line[],int len,char line1[])
{
    //  ekhane  dhore  neya  hoyeche  dataword  4 length er  beshi  hobena  ,
    //  because  length  4  er  beshi  hole  codeword  length  onek  bere  jaay
    //  jaa  onek  beshi  hepa .
    int r0,r1,r2;

    //  data word  ---->  a3a2a1a0     here a0 = line[3] , a1 = line[2] , a2 = line[1]  , a3 = line[0]
    r0 = ((line[3]-'0')+(line[2]-'0')+(line[1]-'0'))%2; // r0 = (a0 + a1 + a2)%2
    r1 = ((line[2]-'0')+(line[1]-'0')+(line[0]-'0'))%2; // r1 = (a1 + a2 + a3)%2
    r2 = ((line[0]-'0')+(line[2]-'0')+(line[3]-'0'))%2; // r2 = (a3 + a1 + a0)%2

    // codeword ---->  a3a2a1a0r2r1r0

    for(int i=0;i<len;++i)
        line1[i] = line[i];

    line1[4] = r2 + '0';
    line1[5] = r1 + '0';
    line1[6] = r0 + '0';

    line1[7] = '\0';

    return ;


}
void parityCheck(char line[],int len,char line1[])
{
    int i , r = 0;

    for(i=0;i<len;++i)
    {
        r += line[i]-'0';
        line1[i] = line[i];
    }

    line1[i] = (r%2)+'0';
    line1[i+1] = '\0';


    return ;
}
int main()
{
    char dataWord[20],codeWord[50];
    int k , Case , n;

    pf("input signal\n");
    while(sf(" %s",dataWord))
    {
        k = strlen(dataWord);

        pf("press:  \n1  for parityCheck\n2 for Hamming Code\n3 for CRC\n\n");
        sf("%d",&Case);

        if(Case==1)
        {
            n = k+1;
            parityCheck(dataWord,k,codeWord);
            pf("dataword--->%s \ncodeword--->%s\n",dataWord,codeWord);
        }
        else if(Case == 2)
        {
            n = lengthCode(k);
            pf("n = %d\n",n);
            hammingCode(dataWord,k,codeWord);
            pf("dataword--->%s \ncodeword--->%s\n",dataWord,codeWord);
        }
        else if(Case == 3)
        {
            char div[20];
            sf(" %s",div);
            //n = CRC(dataWord,k,div);

        }

        drawSignal(n,codeWord);
        pf("input signal\n");
    }
    return 0;
}

