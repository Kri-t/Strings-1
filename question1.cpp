#include <iostream>
using namespace std;
#include <string.h>

int main() {
    char str[] = "Pbwcshkuiglhlds";
    for(int i=0; i<strlen(str); i++) {
        if(i%2 != 0) {
            str[i] = '#';
        }
    }

    cout<<str<<endl;
}