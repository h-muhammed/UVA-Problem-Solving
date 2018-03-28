#include <stdio.h>

void transfer (int n, char from, char to, char temp);
int main()
{
      char from, to, temp;
      int n;
      scanf("%d", &n);
      scanf("%c%c%c", &from, &to, &temp);
      transfer(n, 'L', 'R', 'C');
      return 0;
}
void transfer(int n, char from, char to, char temp)
{
      if(n>0)
      {
            transfer(n-1, from, temp, to);
            printf("Move disk %d from %c To %c\n", n, from, to);
            transfer(n-1, temp, to, from);
      }
      return;
}
