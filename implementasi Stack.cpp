#include<iostream>
using namespace std;

const int MAX_STACK_SIZE = 5;
string data[MAX_STACK_SIZE];
int top = 0;

bool isEmpty(){
    return top == 0;
}

bool isFull(){
    return top == MAX_STACK_SIZE;
}

void display(){
    if(!isEmpty()){
        cout << "Data Tersimpan : " << endl;
        for(int a = 0; a < top; a++){
            cout << a+1 << "."<< data[a] << endl;
        }
    }else{
        cout << "Data Tidak Tersedia" << endl;
    }
    if(isFull()){
        cout << "Stack Penuh" << endl;
    }
    cout << endl;
}

void push(){
    if(!isFull()){
        cout << "Masukkan Data : ";
        cin >> data[top];
        top++;
    }else{
        cout << "Stack Penuh, tidak bisa menambahkan data baru." << endl;
    }
}

void pop(){
    if(!isEmpty()){
        top--;
    }
}

int main(){
    int pil;

    while(true){
        system("cls");
        display();
        cout  << "Menu Utama\n1. Push\n2. Pop\n3. Keluar\nPilih : ";
        cin >> pil;

        switch(pil){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                cout << "Program Selesai" << endl;
                return 0;
            default:
                cout << "Input tidak valid." << endl;
        }
    }
    return 0;
}
