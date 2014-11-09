#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
#define MAX 256
#define MAX2 256
#define STAR 1
#define AMBER 2

char mat[5][MAX], mat2[6][MAX2];
int v[5], v2[6];
int main()
{
    freopen("acsl.in","r", stdin);
    freopen("acsl.out","w", stdout);
    int i, j;
    char car;
    for(i=1; i<=4; i++)
    {
        do
        {
            scanf("%c", &car);
            mat[i][++v[i]] = car;
        }while(car!=',' and car!='\n');
        v[i]--;
        scanf("%c", &car);
    }
    for(i=1; i<=4; i++){
        for(j=1; j<=v[i]; j++)
            printf("%c", mat[i][j]);
        printf("\n");
    }
    mat2[1][1] = car; v2[1] = 1;
    for(i=1; i<=5; i++)
    {
        do
        {
            scanf("%c", &car);
            mat2[i][++v2[i]] = car;
        }while(car != '\n');
        v2[i]--;
    }
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=v2[i]; j++)
            printf("%c", mat2[i][j]);
        printf("\n");
    }
    for(i=1; i<=5; i++)
    {

        for(j=1; j<=v2[i]; j++)
        {
            if(mat2[i][j] == '*') semn[j] = STAR;
            else if(mat2[i][j] == '&') semn[j] = AMBER;
        }
        if(semn[v[i] == '*')
            fstar();
    }
    return 0;
}
void fstar()
{
    for(i=1; i<=4; i++)
    {

    }
}





