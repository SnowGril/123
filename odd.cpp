#include<iostream>
using namespace std;

void Odd(int);
int main()
{
  int a;
  cout<<"Input a number:";
  cin>>a;

  Odd(a);
  return 0;
}

void Odd(int a)
{
   if(a==1)
   cout<<"No"<<endl;
   else  if(a==2)
   cout<<"Yes"<<endl;
   else
   {
    for(int i=2;i<=a;i++)
 {
      if(a%i==0)
      { cout<<"No"<<endl;
       break;}
      else
     { if(i<a-1)
       continue;
      cout<<"Yes"<<endl;
break;}}


}}












