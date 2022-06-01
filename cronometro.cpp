#include<iostream>

#include <time.h>

using namespace std;
class cronometro {
  private:

    char scelta;

  public:
    void setScelta(char s) {
      scelta = s;
    }
  char getScelta() {
    return scelta;
  }

  cronometro(char s) {
    setScelta(s);
  }~cronometro() {
    cout << endl << "oggetto distrutto ";
  }
  int avvia();
  int stoppa();
};

int main() {
  char scelta;
  do {
    cout << endl << "Inserisci i/I per avviare il cronometro: ";
    cin >> scelta;
  }
  while (scelta != 'i' && scelta != 'I');
  cronometro c(scelta);
  int inizio = c.avvia();
  do {
    cout << endl << "Inserisci f/F per fermare il cronometro: ";
    cin >> scelta;
  }
  while (scelta != 'f' && scelta != 'F');
  c.setScelta(scelta);
  cout << endl << "Tempo trascorso: " << c.stoppa() - inizio << " secondi";
  return 0;
}


