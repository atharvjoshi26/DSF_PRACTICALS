#include<iostream>
#include<fstream>
using namespace std;
struct student
{
int rollno;
char name[50];
float per;
}s;

int main()
{
int ch,c,rno,flag;
ofstream outf,outf1;
outf.open("stud.txt");
ifstream inf;
do
{
cout<<"\n 1.add record \n 2.display record \n 3.delete record \n 4.modify record\n";
cout<<"\n enter your choice:";
cin>>ch;
switch (ch)
{
case 1:
do
{
cout<<"\nenter the rollno,name and percentage:";
cin>>s.rollno>>s.name>>s.per;
outf<<"\t"<<s.rollno;
outf<<"\t"<<s.name;
outf<<"\t"<<s.per;
cout<<"\n do you want to continue:";
cin>>c;
}while(c==1);
cout<<"\n record added successfully.";
outf.close();
break;
case 2:
inf.open("stud.txt");
while(!inf.eof())
{
inf>>s.rollno;
inf>>s.name;
inf>>s.per;
cout<<"\nroll number is:"<<s.rollno;
cout<<"\nname is:"<<s.name;
cout<<"\npercentage is:"<<s.per;
}
inf.close();
break;
case 3:
outf1.open("student.txt");
inf.open("stud.txt");
cout<<"\n enter the roll number which you want to delete:";
cin>>rno;
flag==0;
while(!inf.eof())
{
inf>>s.rollno;
inf>>s.name;
inf>>s.per;
if(rno==s.rollno)
{
flag=1;
cout<<"\nrecord deleted";
}
else if(rno!=s.rollno)
{outf1<<"\t"<<s.rollno;
outf1<<"\t"<<s.name;
outf1<<"\t"<<s.per;
}
}
if (flag==0)
{
cout<<"\nrecord isnot present.";
}
remove("stud.txt");
rename("student.txt","stud.txt");
inf.close();
outf1.close();
break;

case 4:outf1.open("student.txt");
inf.open("stud.txt");
cout<<"\nenter the number which you want to modify:";
cin>>rno;
flag==0;
while(!inf.eof())
{
inf>>s.rollno;
inf>>s.name;
inf>>s.per;
if(rno==s.rollno)
{
cin>>s.rollno>>s.name>>s.per;
outf1<<"\t"<<s.rollno;
outf1<<"\t"<<s.name;
outf1<<"\t"<<s.per;
flag=1;
}
else if(rno!=s.rollno)
{
outf1<<"\t"<<s.rollno;
outf1<<"\t"<<s.name;
outf1<<"\t"<<s.per;
}
}
inf.close();
outf1.close();
if (flag==0)
{
cout<<"\n record is not present";
}
remove("stud.txt");
rename("student.txt","stud.txt");
break;
}
cout<<"\nwant to continue:";
cin>>c;
}while(c==1);
return 0;
}
