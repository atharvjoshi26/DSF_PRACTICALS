#include<iostream>
using namespace std;
int h[50];
int size=-1;
int parent(int i)
{
return (i-1)/2;
}
int leftchild(int i)
{
return ((2*i)+1);
}
int rightchild(int i)
{
return ((2*i)+2);
}

void shiftup(int i)
{
while(i>0 && h[parent(i)]<h[i])
{
swap(h[parent(i)],h[i]);
i=parent(i);
}
}

void shiftdown(int i)
{
int maxindex=i;
int l=leftchild(i);
if(l<=size && h[l]>h[maxindex])
{
maxindex=l;
}
int r=rightchild(i);
if(r<=size && h[r]>h[maxindex])
{
maxindex=r;
}
if(i!=maxindex)
{
swap(h[i],h[maxindex]);
shiftdown(maxindex);
}
}

void insert (int p)
{
size=size+1;
h[size]=p;
shiftup(size);
}

int extractmax()
{
int result =h[0];
h[0]=h[size];
size=size-1;
shiftdown(0);
return result;
}

void changepriority(int i,int p)
{
int oldp=h[i];
h[i]=p;
if (p>oldp)
{
shiftup(i);
}
else
{
shiftdown(i);
}
}

int getmax()
{
return h[0];
}

void remove(int i)
{
h[i]=getmax()+1;
shiftup(i);
extractmax();
}

int main()
{
int data, pos, pos1, element ,c,c1,ch;
int i=0,j=0,k=0,l=0;
do
{
cout<<"\n1.add the elements in the queue. \n 2.priority queue. \n 3.node with maximum priority. \n 4.priority queue after extracting maximum. \n 5.change priority. \n 6.remove element from the queue. \n";
cout<<"\n enter your choice:";
cin>>ch;
switch(ch)
{
case 1:
do
{
cout<<"\n enter the data:";
cin>>data;
insert(data);
cout<<"\n add more data? if yes then press 1:";
cin>>c;
}while(c==1);
break;

case 2:
cout<<"\npriority queue";
while(i<=size)
{
cout<<h[i]<<" ";
i++;
}
break;

case 3:
cout<<"\n";
cout<<"\n node with maximum priority:";
cout<<extractmax()<<"\n";
break;

case 4:
cout<<"\n priority ueue after extracting maximum:";
while(j<=size)
{
cout<<h[j]<<" ";
j++;
}
break;

case 5:
cout<<"\n enter the position and element to change the priority:";
cin>>pos>>element;
changepriority(pos,element);
cout<<"\npriority queue after priority change:";
while(k<=size)
{
cout<<h[k]<<" ";
k++;
}
break;

case 6:
cout<<"\n enter the position to delete the element from priority queue:";
cin>>pos1;
remove(pos1);
cout<<"\n priority queue after removing the element:";
while(l<=size)
{
cout<<h[l]<<" ";
l++;
}
break;
}
cout<<"\ndo you want to continue??? if yes then press 1:";
cin>>c1;
}
while(c1==1);
return 0;
}
