#include<iostream>
using namespace std;
class simple 
{
   private:
   
    float d;
    
     public:
     simple(int a,float b,int c)
    {
        d=(a*b*c)/100;
        cout<<"interest is"<<d;
    }
};
int main()
{
    int a;
    float b;
    int c;
        cout<<"enter the p";
        cin>>a;
        cout<<"enter the r";
        cin>>b;
        cout<<"enter the n";
        cin>>c;
    simple obj(a,b,c);
    return 0;
}
