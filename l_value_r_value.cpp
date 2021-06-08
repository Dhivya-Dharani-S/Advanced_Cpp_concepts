#include<iostream>
using namespace std;
int main()
{
    int a=10; //a --> lvalue   10-->rvalue
    int &b=a;  // assigning lvalue to the lvalue reference b-->possible
    /* int &b=300 --> not possible ; REASON:- trying to assign rvalue to lvalue reference which is not possible results in an error */
    const int &d= 500;// to overcome above condition we can use const (assigning rvalue to lvalue reference)
    int &&c=400;
   /* int &&e=c; not possible to bind an lvalue to rvalue reference*/
    cout<<"Value of A is:- "<< a<<endl<<"Value of B is:- "<<b<<endl<<"Address of A:- "<<&a<<endl<<"Address of B:- "<<&b<<endl;
    cout<<"Value of C:- "<<c<<endl<<"Address of C :- "<<&c<<endl;
    cout<<"Value of D:- "<<d<<endl<<"Address of D :- "<<&d<<endl;
 return 0;
}
//Here A and B having same memory address
