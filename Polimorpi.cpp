#include<iostream>
using namespace std;

class seseorang { 
    public : 
      virtual void pesan() = 0; 
        //virtual void pesan(){
        //      cout << "Pesan dari seseorang"<<endl;
        // }
};

class Joko :public seseorang {
    public : 
    void pesan(){
            cout << "Pesan dari joko" << endl;
        }
};

class lia :public seseorang {
    public : 
    void pesan(){
            cout << "Pesan dari Lia" << endl;
        }
};

int main (){
    seseorang* objek;
    Joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();
    //a.Seseoorang::pesan();
    //b.Seseoorang::pesan();
    return 0;
}