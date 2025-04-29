#include <iostream>
using namespace std;

class Mahasiswa{
    public :
    int nim;
    string nama;
    float nilai;
    void printdata(){
        cout << "NIM : " << nim << endl;
        cout << "NAMA : " << nama << endl;
        cout << "NILAI : " << nilai << endl;
    }
};

int main (){
    Mahasiswa mhs;
    mhs.nim = 109;
    mhs.nama = "Zaky";
    mhs.nilai = 87;

    mhs.printdata();
}