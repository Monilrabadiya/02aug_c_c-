#include<iostream>
using namespace std;
class lecture
{
        public:

    string name;
    string subject;
    string course;
    int ls;
    int i;
    
        int assing()
        {
            cout<<"enter the no of lecture";
            cin>>ls;
            for(i=0;i<ls;i++)
            {
                cout<<"enter the name of lecture";
                cin>>name;
                cout<<"enter the name of subject";
                cin>>subject;
                cout<<"enter the na,e of course";
                cin>>course;
                return 0;
            }
        }
        
        int show()
        {
            int b;
            cout<<"enter the no of lecture which you see";
            cout<<".....press 1 2 3 4 5 .....";
            cin>>b;
            
            for(i=b;i<=b;i++)
            {
                cout<<"name of lecture is ="<<name;
                cout<<"name of subject is ="<<subject;
                cout<<"name of course is ="<<course;
                return 0;
            }
        }
};
int main()
{
    lecture obj;
    obj.assing();
    obj.show();
    return 0;
}
