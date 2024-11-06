#include <iostream>

using namespace std;

int a = 0;
int b = 0;
float tulos;

void calcSum(int a,int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{

    cout << "Anna luku a:";
    cin >> a;
    cout << "Anna luku b:";
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);


    int summa = retSum(a, b);
    cout << "retSum funktion summa: " << summa << endl;

    float osamaara = retDiv(a, b);
    cout << "retDiv funktion jakolasku: " << osamaara << endl;

    return 0;
}




void calcSum(int a,int b){
    tulos = a+b;
    cout << "Lukujen summa on:  " << tulos << endl;
}

void calcDiv(int a, int b){
    if (b <= 0) {
        cout << "Luvulla " << b << " ei voi jakaa" << endl;
    }
    else {
        tulos = a/b;
        cout << "Lukujen jakolasku on:  " << tulos << endl;
    }
}
int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Jakaja ei voi olla nolla." << endl;
        return 0.0;  // Palautetaan 0.0 virheen sattuessa
    } else {
        return static_cast<float>(a) / b;
    }

}
