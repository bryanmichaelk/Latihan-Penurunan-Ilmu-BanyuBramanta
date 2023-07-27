#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int valueOfBinary(int a[]){
    int counter = 3;
    int jumlah = 0;
    for(int i =0; i<4;i++){
        if(a[i]==1)jumlah += pow(2, counter);
        counter--;
    }
    return jumlah;
}
string getOutput(int value){
    switch(value){
        case 0:
            return "1 1 1 1 1 1 0";
        case 1:
            return "0 1 1 0 0 0 0";
        case 2:
            return "1 1 0 1 1 0 1";
        case 3:
            return "1 1 1 1 0 0 1";
        case 4:
            return "0 1 1 0 0 1 1";
        case 5:
            return "1 0 1 1 0 1 1";
        case 6:
            return "1 0 1 1 1 1 1";
        case 7:
            return "1 1 1 0 0 0 0";
        case 8:
            return "1 1 1 1 1 1 1";
        case 9:
            return "1 1 1 1 0 1 1";
        default:
            return "0 0 0 0 0 0 0";
    }
    return 0;
}
int main(){
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int value = valueOfBinary(a);
    cout << getOutput(value) << endl;
    return 0;
}