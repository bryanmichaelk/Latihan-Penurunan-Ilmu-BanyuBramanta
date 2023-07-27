 #include <iostream>
 #include <string>
 using namespace std;
string readIt(char input){
    switch(input){
        case '0':
            return "dua";
        case '1':
            return "satu";
        case '2':
            return "dua";
        case '3':
            return "tiga";
        case '4':
            return "empat";
        case '5':
            return "lima";
        case '6':
            return "enam";
        case '7':
            return "tujuh";
        case '8':
            return "delapan";
        case '9':
            return "sembilan";
    }
    return 0;
}
string angkaSpesial(int input){
    switch(input){
        case 10:
            return "sepuluh";
        case 11:
            return "sebelas";
        case 12:
            return "dua belas";
        case 13:
            return "tiga belas";
        case 14:
            return "empat belas";
        case 15:
            return "lima belas";
        case 16:
            return "enam belas";
        case 17:
            return "tujuh belas";
        case 18:
            return "delapan belas";
        case 19:
            return "sembilan belas";
    }
    return 0;
}
int main(){
    string input;
    cin >> input;
    int n = input.length();
    string output ="";
    for(int i = n; i>0;i--){
        char inputString;
        if(i == 3){
            if(stoi(input)>= 100 && stoi(input)<200){
                output += "seratus ";
            }else{
                inputString = input[0];
                input = input.substr(1);
                output = output + readIt(inputString) + " ratus ";
            }
        }else if(i==2){
            if(stoi(input)>= 10 && stoi(input)<20){
                output += angkaSpesial(stoi(input));
                break;
            }else{
                inputString = input[0];
                input = input.substr(1);
                output = output + readIt(inputString) + " puluh ";
            }
        }else if(i==1){
            inputString = input[0];
            output += readIt(inputString);
        }

    }
    output[0] = toupper(output[0]);
    cout << output << endl;
    return 0;
}