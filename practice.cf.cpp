int main()

{
    char ch[100000+10];
      gets(ch);

     int len=strlen(ch);

     int last=ch[len-1]-'\0';
     int first= ch[0]-'\0';
       char temp;
        int pos,k=0,z=0;;
         for(int i=0;i<len-1;i++)
         {
             if((ch[i]-'\0')%2==0&&((ch[i]-'\0')<last))
             {
                 k++;
                 z++;
                temp=ch[i];
                  pos=i;
                  ch[i]=ch[len-1] ;
                  ch[len-1]=temp;
                    break;
             }
             if((ch[i]-'\0')%2==0)
             {
          z++;
                 pos=i;
             }
         }
         if(k)
         {
             puts(ch);

         }
         else if(z)
         {
             temp=ch[pos];
             ch[pos]=ch[len-1];
             ch[len-1]=temp;
             puts(ch);

         }
         else
            printf("-1\n");

    return 0;
}
