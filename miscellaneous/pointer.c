#include <stdio.h>
int main()
{
      int x=3, y=5, *pv, *pt;
      pv=&x;
      pv=pt;
      printf("%d %d", pv ,pt);
}
