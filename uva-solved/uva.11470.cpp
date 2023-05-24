#include <iostream>
#include <cstdio>
#include <vector>
#define NODES 11
#define DFS_WHITE -1
#define DFS_BLACK 1
using namespace std;

int matrix[11][11], dfs_matrix[11][11];
int graphSize, total=0, cas=1;

void initGraph(int row)
{
    for(int x=0; x<row; x++)
        for(int y=0; y<row; y++)
        {
            scanf("%d", &matrix[x][y]);
            dfs_matrix[x][y] = DFS_WHITE;
        }
}

int main()
{

    while(scanf("%d", &graphSize))
    {
        if(!graphSize)
            break;
        initGraph(graphSize);
        int left = 0, right = graphSize - 1;
        vector<int> vec;
        while(left <= right)
        {
            for(int x=0; x<graphSize; x++)
            {
                for(int y=0; y<graphSize; y++)
                {
                    if( (x == left || y == left || x == right || y == right) && dfs_matrix[x][y] == DFS_WHITE)
                    {
                        total += matrix[x][y];
                        dfs_matrix[x][y] = DFS_BLACK;
                    }
                }
            }
            vec.push_back(total);
            total = 0;
            left++;
            right--;
        }
        printf("Case %d: ",cas++);
        for(int a=0; a<vec.size(); a++)
        {
            if(a < vec.size() - 1)
                printf("%d ", vec[a]);
            else
                printf("%d\n", vec[a]);
        }
        vec.clear();
    }
    return 0;
}
