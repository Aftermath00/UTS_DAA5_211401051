#include <iostream>
#include <string>
using namespace std;

struct mahasiswa{
    string name;
    int nim;
};

void getData(mahasiswa getData[], int n){
    int nim[n];
    string name[n];
        for (int i=0; i<n; i++){
            cout << "Input name : ";
            cin.ignore(); getline(cin,name[i]);
            cout << "Input NIM  : ";
            cin >> nim[i];
            cout << endl;
            getData[i].name = name[i];
            getData[i].nim = nim[i];
        }
}

void showData(mahasiswa record[], int n){
    for (int i=0; i<n; i++){
        cout << i+1 << ". " << record[i].nim << " | " << record[i].name << endl;
        cout << "+--------------------------------------------+" << endl;
    }
}

void swapData(mahasiswa *a, mahasiswa *b){
    mahasiswa temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(mahasiswa record[], int min, int max){
    int pivot =  record[min].nim;
    int count = 0;

        for (int i= min + 1; i <= max; i++){
            if (record[i].nim <= pivot)
                count++;
        }
    int pivotIndex = min + count;
    swapData(&record[pivotIndex],&record[min]);

    int i = min, j = max;

    while (i < pivotIndex && j > pivotIndex){
        while (record[i].nim <= pivot){
            i++;
        }
        while (record[i].nim > pivot){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex){
            swapData(&record[i++],&record[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(mahasiswa record[], int min, int max){
    if (min >= max)
        return;
    
    int p = partition(record,min,max);

    quickSort(record,min, p-1);
    quickSort(record,p+1, max);
}

int main(){
    system("CLS");
    int m;
    mahasiswa lab5[50];
    cout << "How many students you want to input? : ";
    cin >> m;
    getData(lab5,m);
    cout << "Before Sorting" << endl;
    cout << "+-------------+" << endl;
    showData(lab5,m);
    quickSort(lab5,0,m-1);
    cout << "After Sorting" << endl;
    cout << "+------------+" << endl;
    showData(lab5,m);
}