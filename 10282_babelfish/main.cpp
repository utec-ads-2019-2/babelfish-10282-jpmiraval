#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    map <string, string> mapita;
    bool condicion = true;
    string palabra1 = "", palabra2 = "";
    string linea;

    getline(cin, linea);


    while(!linea.empty()){
        for(auto c : linea) {

            if (condicion && c != ' '){
                palabra1 += c;
            }else if(c == ' '){
                condicion = false;
            }else{
                palabra2 += c;
            }

        }
        mapita[palabra2] = palabra1;
        condicion = true,
        getline(cin, linea);
        palabra1 = "";
        palabra2 = "";
    }

    while(cin >> linea){
        if(mapita[linea] != "")
        cout << mapita[linea] << endl;
        else{
            cout <<  "eh" << endl;
        }
    }



    return 0;
}