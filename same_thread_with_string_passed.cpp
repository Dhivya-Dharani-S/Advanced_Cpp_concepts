#include<iostream>
#include<thread>
using namespace std;

string run(string s,int count){
    while(count!=0)
    {
     cout<<s<<endl;    
     count--;
    }
    return s;
 }
int main(){
    int n;
    string s;
    cout<<"Enter the string and the number of times :- "<<endl;
    getline(cin,s);
    cin>>n;
    thread t1(run,s,n);
    t1.join();
    return 0;
}
