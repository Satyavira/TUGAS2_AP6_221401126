#include <iostream>

using namespace std;

int main(){
    int nilai[3], *petunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;
    petunjuk = &nilai[0];
    cout << "Nilai" << *(petunjuk) << " ada dialamat memori " << petunjuk <<"\n";
    cout << "Nilai" << *(petunjuk+1) << " ada dialamat memori " << petunjuk+1 <<"\n";
    cout << "Nilai" << *(petunjuk+2) << " ada dialamat memori " << petunjuk+2 <<"\n";
    cin.get();
}