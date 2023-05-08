#include <iostream>
using namespace std;

class mahasiswa {
    public:
    int nim;
    void showNim() {
        cout << "No Induk = " << nim << endl; 
    }
};
int main()
{
    mahasiswa mhs{ 1 }; // object mhs
    mhs.showNim(); //member acces operator
    
    mahasiswa& refMhs = mhs; //Pointer references refmhs
    refMhs.nim = 2; //Member acces operator
    mhs.showNim();

    mahasiswa* pMhs = &mhs; //pointer dereference pMhs
    pMhs->nim = 3; // Arrow Operator
    mhs.showNim();
}
