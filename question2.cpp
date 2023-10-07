#include <iostream>
using namespace std;
#include<string>
#include<string.h>

int main() {
    string str = "abdc";
    int count = 0;
    for(int i=0; i<(int)str.size(); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }

    cout<<(int)str.size() - count<<endl;
}
