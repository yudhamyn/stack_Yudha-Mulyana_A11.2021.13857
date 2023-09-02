#include<iostream>
#include<conio.h>
#include<windows.h>
#define max 1000

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
gavbzubcuansijnasija


using namespace std;
int top=1;
struct stack
{
    char isi[max];
    int top;
};

struct stack kirim[100];

/*******************************************/
void bersihlayar()
{
    for(int a=0;a<80;a++)
    {
        for(int b=0;b<=24;b++)
        {
            gotoxy(a,b);cout<<" ";
        }
    }
}

void push(int x)
{
    gotoxy(20,15);cout<<"Inputkan isi stack   :";
    if(top==max)
    {
        cout<<"stack is full"<<endl;
    }else{
    cin>>kirim[x].top;
    top=top+1;
    }
}

void pop(int x)
{
    if(top==1){
            gotoxy(40,13);cout<<"stack is empty"<<endl;
    

    }else{
        gotoxy(40,12);cout<<"isi yang anda Hapus Adalah :"<<endl;
    gotoxy(40,13);cout<<kirim[x].top;
    top=top-1;
    cout<<endl;
    }

    gotoxy(40,15);cout<<"Press Any Key...";
    getch();
}

void peep(int x)
{
    if(top==1){
            gotoxy(40,13);cout<<"stack is empty"<<endl;
    

    }else{
        gotoxy(40,12);cout<<"stack paling atas adalah :"<<endl;
    gotoxy(40,13);cout<<kirim[x].top;
    cout<<endl;
    }

    gotoxy(40,15);cout<<"Press Any Key...";
    getch();
}
void tampilstack(int x)
{
    if(top==1){
        gotoxy(40,14);cout<<"stack is empty"<<endl;
    }else{
    gotoxy(20,10);cout<<"Daftar isi stack"<<endl;
        for(int i=1;i<x;i++){
        gotoxy(40,15-i);cout<<kirim[i].top;
        cout<<endl;
    }}
    gotoxy(40,20);
    cout<<"Press Any Key...";
    getch();
    /*harus Ijin --> #include<conio.h>*/
}


int main()
{
    int pilih;
    int datake=1;
    do
    {
        bersihlayar();
        gotoxy(1,1);cout<<"MENU UTAMA";
        gotoxy(1,2);cout<<"1. masukkan isi stack";
        gotoxy(1,3);cout<<"2. Hapus isi Terakhir"<<endl;
        gotoxy(1,4);cout<<"3. Tampil isi stack paling atas"<<endl;
        gotoxy(1,5);cout<<"4. Tampil Data stack"<<endl;
        gotoxy(1,6);cout<<"9. Keluar"<<endl;

        gotoxy(1,7);cout<<"Pilihan Anda [1-9] : ";
        cin>>pilih;
        if(pilih==1)
            { /*Menambah data baru diletakan di DATAKE*/
                push(datake);
                datake++;
            }
        if(pilih==2)
            { /*Menghapus Data Terakhir (DATAKE-1*/
                pop(datake-1);
                datake--;
            }

        if(pilih==3){ /*Menampilkan Data paling atas*/
            peep(datake-1);
            datake;
        }
        if(pilih==4){ /*Menampilkan Data mulai
                        data ke-1 hingga DATAKE*/
            tampilstack(datake);
            datake;
        }
    }
    while(pilih!=9);
    return 0;
}
