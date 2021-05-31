#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v(n,0);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int q1, q2, q3;
    cin>>q1;
    cin>>q2>>q3;
    v.erase (v.begin()+(q1-1));
    v.erase(v.begin()+q2-1 , v.begin()+q3-1);
    cout << v.size() << endl;
    for(int i =0 ; i< v.size() ; i++)
    {
        cout << v.at(i) << " " ;  
    }
    
    return 0;
}
//The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, then we want to remove the range from 2 to 4, which means the 2nd and 3rd elements should be removed. 
//Then 6 and 2 in the modified vector are removed and we finally get {1 8 9} balance in the vector
