#include <iostream>
#include <string.h>
#define nmax 5 // banyak data yang dapat ditampung
using namespace std;

int n = 0; // variable n sebagai banyak data yang telah tersimpan
struct data{ // struktur data pelanggan yang membeli tiket
    int id;
    string name;
    char seat[5];
};
struct data supporter[nmax];
void add_data(); 
void delete_data();
void show_data();
void update_data();

main(){
    int pil;
    cout << "                           +----------------------------------------------------------------+" << endl;
    cout << "                           |     Yankees vs Angels in Anaheim Baeball Arena, Los Angeles    |" << endl;
    cout << "                           +----------------------------------------------------------------+" << endl;
    cout << endl;
    menu:
    cout << "+---------------------------+" << endl;
    cout << "|           MENU            |" << endl;
    cout << "| 1. Add data               |" << endl; 
    cout << "| 2. Delete data            |" << endl;
    cout << "| 3. Update  data           |" << endl;
    cout << "| 4. Show my data           |" << endl;
    cout << "| 5. Quit                   |" << endl;
    cout << "+---------------------------+" << endl;
    cout << "| Choose menu (1/2/3/4/5) ? : ";
    cin >> pil;
    cout << "+---------------------------+" << endl;
    if (pil == 1)
        add_data();
    if (pil == 2)
        delete_data();
    if (pil == 3)
        update_data();
    if (pil == 4)
        show_data();
    if (pil == 5)
        exit(1); // atau bisa pakai return(0)
    goto menu;
}

void add_data(){
    system("CLS");
    cout << "+-------------------------------------------+" << endl;
    cout << "| Insert Your Data Here !    (1 s.d. 5)     |" << endl;
    cout << "+-------------------------------------------+" << endl;
    if (n <= nmax)
    {
        cout << "+----------------------+" << endl;
        cout << "| Name  : ";cin.ignore();
        getline(cin,supporter[n].name);
        cout << "| ID    : ";
        cin >> supporter[n].id;
        cout << "| Seat  : ";
        cin >> supporter[n].seat;
        cout << "+-------------------------+" << endl;
        n++;
    }
    else
        cout << "\n data telah melebihi...!!!\n maksimal data = " << nmax;
}

void delete_data(){
    system("CLS");
    int x;
    cout << "+-------------------------------------------+" << endl;
    cout << "| Delete Your Data Here !    (1 s.d. 5)     |" << endl;
    cout << "+-------------------------------------------+" << endl;
    cout << "| Choose data to be deleted (1 s.d. 5): ";
    cin >> x;
    cout << "+-------------------------------------------+" << endl;
    
    if (x < n && x > 0)
    {
        for (int i = x; i < n; i++)
        {
            supporter[i - 1].name= supporter[x].name;
            supporter[i - 1].id = supporter[x].id;
            strcpy(supporter[i - 1].seat,supporter[x].seat);
            n--;
        }
    }
    else if (x == n)
        n--;
    else
        cout << "\n There's no data to be deleted!" << endl;
}

void update_data(){
    system("CLS");
    int pos, temp_id;
    string temp_name;
    char temp_seat[5];

    if (n == 0)
        cout << "No data saved.\n";
    else{
    cout << "+-------------------------------------------+" << endl;
    cout << "| Edit Your Data Here !    (1 s.d. 5)       |" << endl;
    cout << "+-------------------------------------------+" << endl;
    cout << "| Possition to be changed : "; cin >> pos;
    cout << "| Update Name  : "; cin.ignore(); 
    getline(cin, temp_name);
    cout << "| Update ID    : "; cin >> temp_id;
    cout << "| Update Seat  : "; cin >> temp_seat;
    cout << "+-------------------------------------------+" << endl;
        
        supporter[pos-1].name = temp_name;
        strcpy(supporter[pos-1].seat, temp_seat);
        supporter[pos-1].id = temp_id;
    }

}

void show_data(){
    system("CLS");
    if (n == 0)
        cout << "No data saved.\n";
    else
    {
        cout << "+-------------------------------------------+" << endl;
        cout << "|       Your Data Will Showed up here       |" << endl;
        cout << "+-------------------------------------------+" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "+-----------------+" << endl;
            cout << "|   Supporter " << i+1 << "   |" << endl;
            cout << "+-----------------+" << endl;
            cout << "| Nama  : " << supporter[i].name<< endl;
            cout << "| ID    : " << supporter[i].id << endl;
            cout << "| Seat  : " << supporter[i].seat << endl; 
            cout << "+---------------+" << endl;
            cout << endl;
        }
    }
}
