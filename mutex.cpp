#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int amount=0;
mutex m1;

void run(){
    m1.lock();
    amount++;
    m1.unlock();
}
int main(){
thread t1(run);
thread t2(run);
t1.join();
t2.join();
cout<<"Amount is :- "<<amount<<endl;
return 0;
}
