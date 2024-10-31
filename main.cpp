#include <iostream>
using namespace std;
int main() 
{
    //variabili
    int i;
    double livello, somma, media;
    somma = 0;
    for (i = 1; i <= 7; i++) {
        cout << "inserisci il livello dell'acqua" << endl;
        cin >> livello;
        somma = somma + livello;
        if (livello > 10) {
            cout << "nel giorno " << i << " l'acqua è alta" << endl;
        }
    }
    media = somma / 7;
    if (media > 0) {
        cout << "l'acqua è alta" << endl;
    } else {
        cout << "il livello è normale" << endl;
    }
    cout << "il valore medio è " << media << endl;
}