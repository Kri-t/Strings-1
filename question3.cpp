#include <iostream>
using namespace std;
#include <string.h>

int main() {
    string str = "abccba";
    int i=0, j=(int)str.size()-1;
    bool flag = true;

    while(i<=j) {
        if(str[i] != str[j]) {
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if(flag) {
        cout<<"Palindrome"<<endl;
    }
    else 
    cout<<"no";

    return 0;
}