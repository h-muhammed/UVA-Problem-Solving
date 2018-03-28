#include <stdio.h>

void func(int i)
{
    printf("%d__\n", i);
}

int main()
{
    int i = 5;
    func(i++);
    return 0;
}
