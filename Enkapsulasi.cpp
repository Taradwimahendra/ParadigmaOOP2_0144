#include<iostream>
using namespace std;

class remoteLampu {
    private:
        string SaklarNo[10];
      public: 
        void setSaklarNo(int i, string value) {
            SaklarNo[i] = value;
        }
    string getSaklarNo(int i) {
        return SaklarNo[i];
    }
};

int main(){
    remoteLampu LampuRumah;

    LampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    LampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    LampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    LampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << LampuRumah.getSaklarNo(0) << endl;
    cout << LampuRumah.getSaklarNo(1) << endl;
    cout << LampuRumah.getSaklarNo(2) << endl;
    cout << LampuRumah.getSaklarNo(3) << endl;

    return 0;
}
