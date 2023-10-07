#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter length of string: ";
    cin>>n;
    string str;
    cout<<"Enter string of "<<n<<" characters: ";
    cin>>str;

    char temp;

    int i= n/2, j= n-1;
    while(i<=j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    cout<<str<<endl;

}