#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;

int main()
{
    ios::showbase;
    long int bno,dno,b,r;
    int i;
    cout<<"\n Enter a Binary number:-\n\n\t\t";
    cin>>bno;
    b=bno;
    for(i=0;b!=0;i++)
    {
        r=b%10;
        dno=(dno+(r*pow(2,i)));
        b/=10;
    }

    cout<<"\n The Decimal value for "<<bno<<" is "<<endl<<"\n\t"<<dno;
    getch();
    system("cls");
    exit(0);
}
