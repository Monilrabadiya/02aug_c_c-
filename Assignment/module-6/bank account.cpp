#include<iostream>
using namespace std;
class account
{
    public:
    char name[10];
    long int acnumber;
    int type;
    long int balance;
    void assign()
    {
        cout<<"\nenter the namne of dipositer =";
        cin>>name;
        cout<<"\nenter the account number =";
        cin>>acnumber;
        cout<<"\n1.current\n\n2.saving\n\n3.fix diposit\n";
        cout<<"\nchoose whitch type of your acount ";
        cin>>type;
        switch(type)
        {
            case 1:
                cout<<"\nyour account type is... current";
                break;
            case 2:
                cout<<"\nyour account type is... saving";
                break;
            case 3:
                cout<<"\nyour account type is... fix diposit";
                break;
            default:
                cout<<"enter the vaild choice...";
        }
        cout<<"\n\n\nenter the balance of your account =";
        cin>>balance;
    }
    void dip()
    {
        int amount;
        cout<<"\nenter your amount to diposit =";
        cin>>amount;
        balance+=amount;
        cout<<"\n... your currnt balence ="<<balance;
    }
    void withdraw()
    {
        int with;
        cout<<"\nenter the your withdraw amount =";
        cin>>with;
        if(balance>with)
        {
                balance-=with;
                cout<<"\nyour currnt balence is ="<<balance;
        }
        else
        {
            cout<<"\nyour balance is not avileble";
        }
    }
    void show()
    {
        cout<<"\ndeposter name ="<<name;
        cout<<"\n your balence is ="<<balance;
    }
};
int main()
{
    int i;
    int nu;
    cout<<"enter the number of how many depositer ";
    cin>>nu;
    for(i=1;i<=nu;i++)
    {
    account obj;
    obj.assign();
    int a;
    cout<<"\npress the 1 to amount deposit in your account ";
    cout<<"\npress the 2 to amount withdraw in your accun ";
    cout<<"\npress the 3 to show your name and balance =";
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
    }        
    return 0;
}
