#include<iostream>
using namespace std;
class line 
{
   public:
   inline int mup(int a,int b)
   {
       return a*b;
   }
   inline int cub(int a)
   {
       return a*a*a;
   }
};
int main()
{
    line obj;
    int c,d;
    cout<<"enter the 1st no = ";
    cin>>c;
    cout<<"enter the 2nd no = ";
    cin>>d;
    cout<<"mup is ="<<obj.mup(c,d);
    cout<<"\n\n cube of 1 is ="<<obj.cub(c)<<"\n\n\n 2 is ="<<obj.cub(d);
    return 0;
}    
    
    
    

