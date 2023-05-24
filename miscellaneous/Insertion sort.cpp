#include <bits/stdc++.h>
#define -1000000000
using namespace std;

void insertion_sort(int arr[], int n);

int main()
{
     int  A[100], k, j, i, n;
     scanf("%d", &n);
     A[-1] = -1000000000;
     for(i = 0; i < n; i++)
     {
           scanf("%d", &A[i]);
     }
     insertion_sort(A , n);
}
