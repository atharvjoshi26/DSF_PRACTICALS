#include<iostream>
using namespace std;
#define max 10
#define size 10
#define h(x) x%size
struct hashtable
{
int chain;
long int key;
char name;
}s[max];

class hasht
{
public:
int hash(int no);
};

int hasht::hash(int no)
{
int h;
h=no%max;
return h;
}

int main()
{
int i, flag1=0,ch,ch1,no1,h,c,index,k,ch3,j;
char sname;
char name1[size];
hasht t;

for(i=0;i<max;i++)
{
s[i].key=-1;
s[i].chain=-1;
s[i].name='-';
}

do
{
cout<<"\n-------------------------------------------------";
cout<<"\nchaining without replacement";
cout<<"\n-------------------------------------------------";

cout<<"\nenter your choice: ";
cin>>ch;
switch(ch)
{
case 1:
do
{
for(j=0;j<max;j++)
{
if(s[j].key==-1)
break;
}
if (j==max)
{
cout<<"\nhash table is full........";
break;
}
cout<<"\nenter the number: ";
cin>>no1;
cout<<"\n enter the name: ";
cin>>sname;
h=t.hash(no1);c=-1;
index=h;
do
{
if(s[h].key==-1)
{
flag1=1;
s[h].key=no1;
s[h].name=sname;
if(c!=-1)
s[c].chain=h;
}
else if(t.hash(s[h].key)==index)
c=h;
h=t.hash(h+1);
}while(flag1==0 && h<max );
flag1=0;
cout<<"\n-------------------------------------------------";
cout<<"\n index"<<"\t"<<"number"<<"\t"<<"name"<<"\t"<<"chain"<<"\n";
for(int i=0;i<max;i++)

cout<<i<<"\t"<<s[i].key<<"\t"<<s[i].name<<"\t"<<s[i].chain<<"\n";
cout<<"\n-------------------------------------------------";
cout<<endl;
cout<<"do you want to continue:[0/1]: ";
cin>>ch;
}
while(ch==1);
break;
}
cout<<"\ndoyou want to continue:[0/1]: ";
cin>>ch1;
}
while(ch==1);
return 0;
}
