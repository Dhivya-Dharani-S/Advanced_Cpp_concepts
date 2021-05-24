#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> result;
    char ch;
    int tmp;
    while (ss >> tmp) 
    {
        result.push_back(tmp);
        ss >> ch;
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
// It basically converts string to integer as well as integer to string 
// It recognises the integer as well as character given in the input 
/* here in this program , input is given as string type with combination of integers and characters in which it is identified by string_stream */
// Tried this programming on Hackerrank
