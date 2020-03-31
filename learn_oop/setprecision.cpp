#include<iomanip>
#include<ios>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    double a;
    cin>>a;
    streamsize prec=cout.precision();
    cout<<prec<<endl<<setprecision(3)
        <<a<<endl
        <<3.1415926<<endl
        <<setprecision(prec)
        <<3.1415926<<endl;

    return 0;
}