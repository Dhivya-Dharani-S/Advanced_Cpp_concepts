#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
   {
    cout<<"Constructor called"<<endl;
   }
   demo(demo& obj)
   {
       cout<<"Copy Constructor called"<<endl;
   }
 
   ~demo(){
       cout<<"Destructor Called"<<endl;
   } 
};
void fun1(demo & obj){
    cout<<"Function Called"<<endl;
}
int main()
{
demo object1;//constructor
demo object2=object1; //copy assignment operator (here copy constrctor is called)
demo object3(object2); //another way of copy constructor(Another time copy constructor is called)
fun1(object1);//sending lvalue as argument to function and getting it by reference
/*as constructor called one times and copy constructor called two times so destructor called 3 times*/
}
