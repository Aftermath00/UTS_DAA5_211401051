#include <iostream>
#include <string.h>
#include <stack> 
using namespace std;

int main(){
    system("CLS");
    stack <string> delegates;
    string name[20];
    string country[20];
    int num,pos;

    cout << "+--------------------------------------------------+" << endl;
    cout << "|          G20 Delegates in Bali, Indonesia        |" << endl;
    cout << "+--------------------------------------------------+" << endl;
    num = 20;
        for (int i=0; i<num;i++){
            cout << "Delegates from : ";cin >> country[i];  
            cout << "Name           : ";cin.ignore();
            getline(cin, name[i]);
            delegates.push(name[i]);
            cout << endl;
        }
    system("CLS");
    cout << "+-------------------------------------+" << endl;
    cout << "|          G20 Delegates Lists        |" << endl;
    cout << "+-------------------------------------+" << endl;
    pos = 0; int x = num;
        while(!delegates.empty()){
            cout << pos+1 << ". His Exellency " << delegates.top() << " from " << country[x-1] <<endl;
            cout << endl;
            delegates.pop();
            pos++; 
            x--;
        }
}