#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b;
    return 0;
}