#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main(){
    queue<string> q;
    string str;
    int n;
    cout<<"Enter the number of string you want to enter :- "<<endl ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        q.push(str);
    }
    queue <string> temp;
    temp=q;
    cout<<"The elements in the queue are:- "<<endl;
    while(!temp.empty()){
        cout<<temp.front()<<endl;
        temp.pop();

    }
   cout<<"Checking the temp queue is empty or not :-(0-> non-empty queue / 1->empty queue)-----> "<<temp.empty()<<endl;
   cout<<"Checking the original queue is empty or not :-(0-> non-empty queue / 1->empty queue)----> "<<q.empty()<<endl;
   cout<<"Retrieving the front element in queue :- "<<q.front()<<endl;
   cout<<"Retrieving the back element in queue :- "<<q.back()<<endl;
   cout<<"Retrieving the size of the queue :- "<<q.size()<<endl;
    return 0;
}
