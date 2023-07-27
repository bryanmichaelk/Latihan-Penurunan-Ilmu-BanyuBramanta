#include <iostream>
#include <math.h>
using namespace std;


int main(){
    string input;
    cin >> input;
    int intInput = stoi(input);
    int nilaiInput = stoi(input);
    int n = input.length();
    int div = 0;
    int mod = 0;
    int jumlah = 0;
    for(int i = 0; i<n;i++){    
        div = intInput/10;
        mod = intInput%10;
        jumlah += pow(mod,n);
        intInput = div;
    }
    cout << jumlah <<endl;
    if(nilaiInput == jumlah){
        cout << "Merupakan Bilangan Armstrong" << endl;
    }else{
        cout << "Bukan Merupakan Bilangan Armstrong" << endl;
    }
    
}