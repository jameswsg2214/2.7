#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int n,r,sum=0,temp;    
    int calc()
    {
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;   
return 0;  
    }
};
int main()
{
  sample s;
  cout<<"Enter the Number=  ";    
  cin>>s.n;
  s.calc();
  return 0;
}
