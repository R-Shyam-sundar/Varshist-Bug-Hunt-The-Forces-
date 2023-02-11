#include<iostream>
using namespace std;

bool isequal(string s1,string s2){
    if(s1.size() != s2.size()){
        return false;
    }
    for(int i=0;i<s1.size();i++){
        if(s1[i] != s2[i]){
            return false;
        }
    }
    return true;
}

int main(void){
    string string1 = "Hello";
    string string2 = "Horld";

    if (isequal(string1,string2))
        cout << "Equal";
    else
        cout << "Not Equal";
}
