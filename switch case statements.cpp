#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,ans;
    cout<<"\n ENTER THE VALUES TO BE OPERATED"<<endl;
    cin>>a>>b;
    int ch;
    
    cout<<"\n 1 for add"<<endl;
    cout<<"\n 2 for sub"<<endl;
    cout<<"\n 3 for multi"<<endl;
    cout<<"\n 1 for div"<<endl;

    cout<<"\n ENTER CHOICE"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        ans=a+b;
        cout<<ans;
        break;
         case 2:
        ans=a-b;
        cout<<ans;
        break;

         case 3:
        ans=a*b;
        cout<<ans;
        break;
         case 4:
        ans=a/b;
        cout<<ans;
        break;
        default:cout<<"\n WRONG CHOICE"<<endl;}

getch();
}