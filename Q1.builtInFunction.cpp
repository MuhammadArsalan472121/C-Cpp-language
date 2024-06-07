#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int p1=0,p2=0,p3=0;
    cout<<"\aEnter Values for Mouse,Keyboard,Speaker respectively:"<<endl;
    cin>>p1>>p2>>p3;
    cout<<"Product\t\t\t\t"<<setw(5)<<"Price"<<"\n"
    <<"Mouse\t\t\t\t"<<setw(5)<<p1<<"\n"
    <<"KeyBoard\t\t\t"<<setw(5)<<p2<<"\n"
    <<"Speakers\t\t\t"<<setw(5)<<p3<<"\n";
    getche();
    return 0;
}
