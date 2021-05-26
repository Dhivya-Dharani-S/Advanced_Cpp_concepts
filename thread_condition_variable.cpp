#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<queue>
using namespace std;

mutex m;
condition_variable cv;
string s;
queue <string> q;
int value=5;

void producing_data()  //pushing string in queue 
{
    
 while(value)
  {
     unique_lock<mutex> ul(m);
     cv.wait(ul,[](){return q.size()<value;});
     cout<<"Enter String you want to push:- "<<endl;
     cin>>s;
     q.push(s);
     cout<<"Item Successfully Inserted :- "<<q.back()<<endl;
     value--;
     ul.unlock();
     cv.notify_one();
    }
}
 
void consuming_data()            //Accessing from the consumer thread
{
   while(value)
    {
       unique_lock<mutex>ul(m);
       cv.wait(ul,[](){return q.size()>0;});
       cout<<"Data Successfully Deleted :- "<< q.front() << endl;
       q.pop();
       ul.unlock();
       cv.notify_one();
    }
}

int main()
{

    thread t1(producing_data);
    thread t2(consuming_data);

    t1.join();
    t2.join();
    return 0;
}
/* According to the cpu performance that acquires the lock, producer thread or consumer thread can be executed (any number of times) ,
in my case it is running first 3 times producer thread and next 3 times consumer thread and consequently one thread is running */
