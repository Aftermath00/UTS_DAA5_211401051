#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct panglong {
    int id;
    int price;
    int total;
    int quantity;
    string name;
};
panglong commodity[50];

void show(int n){
    system("CLS");
    int total,item_total;
    cout << "                    +-------------------------------------------+"<< endl;
    cout << "                    |           Shopping Total Details          |"<<endl ; 
    cout << "                    +-------------------------------------------+"<<endl ;
    total = 0;
    for (int i=1; i<n-1; i++){
            cout << endl;
            cout << "+--------------------------------------------+" << endl;
            cout << "| Commodity " << i << ":" <<endl;
            cout << "| Name           : " << commodity[i].name << endl;
            cout << "| Price/item     : " << commodity[i].price << endl;
            cout << "| Quantity       : " << commodity[i].quantity << endl;
            item_total = commodity[i].price * commodity[i].quantity;
            cout << "| Total          : " << item_total << endl;
            cout << "+---------------------------------------------+" << endl;
            total = item_total + total;
    }
    cout << "+-------------------------------+" << endl;
    cout << "| Shop in total (Rp) : " << total << endl;
    cout << "+-------------------------------+" << endl;
}

int main() {
    system("CLS");
    system("color 06");
    int com = 1;
    int menu = 0;
    while(menu == 0){
        cout << "                    +-------------------------------------------+"<< endl;
        cout << "                    |            Panglong Koh A Tjong           |"<<endl ; 
        cout << "                    +-------------------------------------------+"<<endl ;
        cout << endl;
            cout << "+---------------------------+" << endl;
            cout << "|      Commodity Lists      |" << endl;
            cout << "|---------------------------|" << endl;
            cout << "| 1. Hammer                 |" << endl; 
            cout << "| 2. Nail                   |" << endl;
            cout << "| 3. Hoe                    |" << endl;
            cout << "| 4. Grinder                |" << endl;
            cout << "| 5. Safety Gloves          |" << endl;
            cout << "| 6. Quit                   |" << endl;
            cout << "+---------------------------+" << endl;
            cout << "| Choose (1/2/3/4/5/6) : ";
            cin  >> commodity[com].id;
            if (commodity[com].id == 1){
                cout << "| Quantity : "; 
                cin >> commodity[com].quantity;
                cout << "+---------------------------+" << endl;
                cout << endl;
                commodity[com].name = "Hammer";
                commodity[com].price = 50000;
            }
            if (commodity[com].id == 2){
                cout << "| Quantity : "; 
                cin >> commodity[com].quantity;
                cout << "+---------------------------+" << endl;
                cout << endl;
                commodity[com].name = "Nail";
                commodity[com].price = 1000;
            }
            if (commodity[com].id == 3){
                cout << "| Quantity : "; 
                cin >> commodity[com].quantity;
                cout << "+---------------------------+" << endl;
                cout << endl;
                commodity[com].name = "Hoe";
                commodity[com].price = 150000;
            }
            if (commodity[com].id == 4){
                cout << "| Quantity : "; 
                cin >> commodity[com].quantity;
                cout << "+---------------------------+" << endl;
                cout << endl;
                commodity[com].name = "Grinder";
                commodity[com].price = 500000;
            }
            if (commodity[com].id == 5){
                cout << "| Quantity : "; 
                cin >> commodity[com].quantity;
                cout << "+---------------------------+" << endl;
                cout << endl;
                commodity[com].name = "Safety Gloves";
                commodity[com].price = 30000;
            }
            if (commodity[com].id == 6){
                menu = 1;
            }
        com++;
    }
    show(com);
    return 0;
}