#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int visited[10];
#include<iostream>
class graph
#include<string.h>
{
#include<stdio.h>
int i,j,min,u,v,mincost,cost[10][10],edges,a,b,n;
using namespace std;


public:
int visited[10];
graph()

{
class graph
edges=1;
{
mincost=0;
int i,j,min,u,v,mincost,cost[10][10],edges,a,b,n;
}

void kruskal(int cost[10][10],int n);
public:
void read();
graph()
};
{

edges=1;
void graph:: read()
mincost=0;
{
}
cout<<"\nenter the number of vertices:";
void kruskal(int cost[10][10],int n);
cin>>n;
void read();
cout<<"enter the weight of edges in the form of adjusancy matrix:";
};
for(i=1;i<=n;i++)

{
void graph:: read()
for(j=1;j<=n;j++)
{
{
cout<<"\nenter the number of vertices:";
cin>>cost[i][j];
cin>>n;
if(cost[i][j]==0)
cout<<"enter the weight of edges in the form of adjusancy matrix:";
cost[i][j]=9999;
for(i=1;i<=n;i++)
}
{
}
for(j=1;j<=n;j++)
cout<<"His";
{
kruskal(cost,n);
cin>>cost[i][j];
}
if(cost[i][j]==0)

cost[i][j]=9999;
void graph::kruskal(int cost[10][10],int n)
}
{
}
while(edges<n)
cout<<"His";
{
kruskal(cost,n);
min=9999;
}
for(i=1;i<=n;i++)

{
void graph::kruskal(int cost[10][10],int n)
for(j=1;j<=n;j++)
{
{
while(edges<n)
if (cost[i][j]<min);
{
{
min=9999;
min=cost[i][j];
for(i=1;i<=n;i++)
a=u=i;
{
b=v=j;
for(j=1;j<=n;j++)
}
{
}
if (cost[i][j]<min);
}
{
while(visited[u])
min=cost[i][j];
u=visited[u];
a=u=i;
while(visited[v])
b=v=j;
v=visited[v];
}

}
if(u!=v)
}
{
while(visited[u])
edges++;
u=visited[u];
cout<<"\nEDGES:"<<a<<"->"<<b<<"\t WEIGHT:"<<min<<"\n";
while(visited[v])
mincost=mincost+min;
v=visited[v];
visited[v]=u;

}
if(u!=v)
cost[a][b]=cost[b][a]=9999;
{
}
edges++;
cout<<"\nminimum cost:"<<mincost<<"\n";
cout<<"\nEDGES:"<<a<<"->"<<b<<"\t WEIGHT:"<<min<<"\n";
}
mincost=mincost+min;
int main(void)
visited[v]=u;
{
}
graph g;
cost[a][b]=cost[b][a]=9999;
g.read();
}
return 0;
cout<<"\nminimum cost:"<<mincost<<"\n";
}
}
int main(void)
{
graph g;
g.read();
return 0;
}
