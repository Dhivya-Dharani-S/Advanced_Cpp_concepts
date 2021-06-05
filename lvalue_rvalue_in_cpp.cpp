#include<iostream>
using namespace std;

int main(){
int sum;
sum=400; // here sum is lvalue(as it is having specific memory location) and 400 is rvalue (as it is not having specific memory location)
cout<<sum;// prints 400
  //we can able to convert lvalue to rvalue implicitly (ie) like int z=sum+5 is allowed
  //But we can't able to convert rvalue to lvalue 
const int &sum1=400;// if we want to assign rvalue to lvalue reference it is not possible...but it can be possible by making the reference Const 
cout<<sum1;// it will print 400
    return 0;
}

/* Since it is an const we can't able to modify it ..For that purpose c++ introduced Rvaluereference
IN that Rvalue reference we can able to modify it*/
