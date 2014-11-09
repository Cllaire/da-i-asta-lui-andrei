#include <cstdio>
#include <vector>
#include <queue>

using namespace std;
#define NMAX 105

vector<int> v[NMAX];
queue<int> q;
int p[NMAX], m, n;
int viz[NMAX];

void bfs(int x, int g);
void fdrum(int nod, int s);

int main()
{
    freopen("bfs.in","r",stdin);
    freopen("bfs.out","w",stdout);
    int i, s, a, b, j;
    scanf("%d%d%d",&m, &n, &s);
    for(i=1; i<=m; i++)
    {
        scanf("%d%d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(s, 1);
    for(i=1; i<=n; i++)
    {
        if(viz[i] and i!=s){
            fdrum(i, s);
            printf("\n");
        }
    }
    int elem=1;
    for(i=1; i<=n; i++)
        if(viz[i]==0)
            bfs(i, ++elem);
    printf("%d\n", elem);
    for(j=1; j<=elem; j++)
    {
        for(i=1; i<=n; i++)
            if(viz[i] == j)
                printf("%d ", i);
        printf("\n");
    }
    return 0;
}
void fdrum(int nod, int s)
{
    if(nod)
    {
        fdrum(p[nod], s);
        if(nod!=s)
            printf("-%d", nod);
        else
            printf("%d", nod);
    }
}
void bfs(int x, int g)
{
    int tata, fiu, i;
    q.push(x);
    viz[x] = g;
    while(!q.empty())
    {
        tata = q.front();
        for(i=0; i<v[tata].size(); i++){
            fiu = v[tata][i];
            if(viz[fiu]==0)
            {
                viz[fiu] = g;
                q.push(fiu);
                p[fiu] = tata;
            }
        }
        q.pop();
    }
}
