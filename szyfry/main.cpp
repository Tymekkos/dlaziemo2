#include <iostream>
#include <string>
using namespace std;

// funkcja kodujaca znak z zadanym kluczem
char cezar_koduj(char znak, int klucz){
	znak=toupper(znak); //zamiana argumentu na du¿¹ literê
	if(znak+klucz<=90) return znak+klucz;
	else return znak+klucz-26;
}

// funkcja kodujaca znak z zadanym kluczem
char cezar_dekoduj(char znak, int klucz){
	znak=toupper(znak); //zamiana argumentu na du¿¹ literê
	if(znak-klucz>=65) return znak-klucz;
	else return znak-klucz+26;
}

int main(){
    int k;
    string jawny;
    cout << "podaj wyraz do zaszyfrowania: "; cin >> jawny;
    cout << "podaj klucz szyfrujacy: "; cin >> k;

    //kodowanie
    string szyfrogram=""; //na poczatku szyfrogram jest pusty
    cout << "tekst jawny: " << jawny <<endl;

    for(int i=0; i<jawny.length(); i++) szyfrogram+=cezar_koduj(jawny[i],k);
        cout << "szyfrogram: " << szyfrogram << endl;

    //dekodowanie
    jawny=""; //na poczatku dekodowania tekst jawny jest pusty
    for(int i=0; i<szyfrogram.length(); i++) jawny+=cezar_dekoduj(szyfrogram[i],k);
        cout << "tekst jawny odszyfrowany: " << jawny <<endl;

    return 0;
}
