#include<iostream>
#include<thread>  // threads header file

using namespace std;
int run(int count){
    while(count!=0){
        cout<<"Learning C++ Threads"<<endl;
        count--;
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the number of times you want to print the string :- "<<endl;
    cin>>n;
    thread t1(run,n);  //created thread , mentioned function name to run as a thread and number of times thread want to run as a arguments 
    t1.join();
    return 0;
}
