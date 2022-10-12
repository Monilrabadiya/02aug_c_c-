#include<iostream>
using namespace std;
class account
{
    public:
    char name[30];
    long int acnumber;
    char typeofaccount[30];
    long int balence;
    void assign()
    {
        cout<<"\nenter the namne of dipositer =";
        cin>>name;
        cout<<"\nenter the account number =";
        cin>>acnumber;
        cout<<"\nchoose whitch type of your acount =";
        cin>>typeofaccount;
        cout<<"\nenter the balence of your account =";
        cin>>balence;
    }
    void dip()
    {
        int amount;
        cout<<"\nenter your amount to diposit =";
        cin>>amount;
        balence+=amount;
        cout<<"\n... your currnt balence ="<<balence;
    }
    void withdraw()
    {
        int with;
        cout<<"\nenter the your withdraw amount =";
        cin>>with;
        if(balence>with)
        {
                balence-=with;
                cout<<"\nyour currnt balence is ="<<balence;
        }
        else
        {
            cout<<"\nyour balence is not avileble";
        }
    }
    void show()
    {
        cout<<"\ndeposter name ="<<name;
        cout<<"\n your balence is ="<<balence;
    }
};
int main()
{
    account obj;
    obj.assign();
    int a;
    cout<<"\npress the 1 to amount deposit in your account ";
    cout<<"\npress the 2 to amount withdraw in your accun ";
    cout<<"\npress the 3 to show your name and balence =";
    cin>>a;
    if(a==1)
    {
        obj.dip();
    }
    else if(a==2)
    {
        obj.withdraw();
    }
    else if(a==3)
    {
        obj.show();
    }
    return 0;
}
