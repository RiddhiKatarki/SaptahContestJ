//Riddhi Katarki
//riddhikatarki@gmail.com
//AIML-B1

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>

int main()
{
 int a,b,c;
 cin>>a>>b>>c;
 
 if(a>=b && a>=c)
 {
   if(b>=c)
   {
     cout<<b;
   }
 else
   {
     cout<<c;
   }
}
else if(b>=a && b>=c)
{
 if(a>=c)
 {
  cout<<a;
 }
else
 { 
  cout<<c;
 }
}
else if(a>=b)
 {
  cout<<a;
 }
else
 {
  cout<<b;
 }
getch();
}
