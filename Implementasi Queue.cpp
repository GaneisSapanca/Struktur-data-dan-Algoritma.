#include<iostream>
using namespace std;

const int MAX_QUEUE_SIZE = 5;
string data[MAX_QUEUE_SIZE];
int front = -1, rear = -1;

bool isEmpty(){
    return front == -1 && rear == -1;
}

bool isFull(){
    return rear == MAX_QUEUE_SIZE-1;
}

void display(){
    if(!isEmpty()){
        cout << "Data Tersimpan : " << endl;
        for(int a = front; a <= rear; a++){
            cout << a+1 << "."<< data[a] << endl;
        }
    }else{
        cout << "Data Tidak Tersedia" << endl;
    }
    if(isFull()){
        cout << "Queue Penuh" << endl;
    }
    cout << endl;
}

void enqueue(){
    if(isFull()){
        cout << "Queue Penuh, tidak bisa menambahkan data baru." << endl;
    }else{
        string item;
        cout << "Masukkan Data : ";
        cin >> item;
        if(isEmpty()){
            front = 0;
            rear = 0;
        }else{
            rear++;
        }
        data[rear] = item;
    }
}

void dequeue(){
    if(isEmpty()){
        cout << "Queue Kosong, tidak bisa menghapus data." << endl;
    }else{
        cout << "Menghapus Data : " << data[front] << endl;
        if(front == rear){
            front = -1;
            rear = -1;
        }else{
            front++;
        }
    }
}

int main(){
    int pil;

    while(true){
        system("cls");
        display();
        cout  << "Menu Utama\n1. Enqueue\n2. Dequeue\n3. Keluar\nPilih : ";
        cin >> pil;

        switch(pil){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
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