//Riddhi Katarki
//riddhikatarki@gmail.com
//AIML-B1

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>

int main()
{
 int a,b,c,t,n;
 cout<<"Enter the value of t:"<<endl;
 cin>>n;
 for(t=1;t<=n;t++)
 {
 cout<<"Enter three numbers:"<<endl;
 cin>>a>>b>>c;

 if(a>=b && a>=c)
 {
   if(b>=c)
   {
     cout<<b<<endl;
   }
 else
   {
     cout<<c<<endl;
   }
}
else if(b>=a && b>=c)
{
 if(a>=c)
 {
  cout<<a<<endl;
 }
else
 { 
  cout<<c<<endl;
 }
}
else if(a>=b)
 {
  cout<<a<<endl;
 }
else
 {
  cout<<b<<endl;
 }
}
getch();
return 0;
}
