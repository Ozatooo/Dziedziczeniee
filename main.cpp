#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
string imie,nazwisko,klasa;
int numer;
string imien,nazwiskon,klasan,przedmiot;

 class uczen
 {
    public:
       Zwierze()
       { }
 
       void wprowadzu( )
       {
              cout << "wprowadz imie ucznia: ";
              cin>>imie;
              cout << "wprowadz nazwisko ucznia: ";
              cin>>nazwisko;
              cout << "wprowadz numer ucznia: " ;
              cin>>numer;
              cout << "wprowadz klase ucznia: " ;
              cin>>klasa;

       }
 
       void wypiszu( )
       {
              cout << imie << " " << nazwisko << " " << numer << " "<< klasa << endl;
       }
 
 };
 
 class nauczyciel : public uczen
 {
    public:
      nauczyciel()
      { }
 
      void wprowadzn()
      {
              cout << "wprowadz imie nauczyciela: " ;
              cin>>imien;
              cout << "wprowadz nazwisko nauczyciela: ";
              cin>>nazwiskon;
              cout << "wprowadz klase: " ;
              cin>>klasan;
              cout << "wprowadz przedmiot: " ;
              cin>>przedmiot;
      }
 
      void wypiszn()
      {
              cout << imien << " " << nazwiskon << " " << klasan << " " <<przedmiot;
      }
 };



int main(int argc, char** argv) {
	    nauczyciel n;
    n.wprowadzu();
    n.wprowadzn();
    n.wypiszu();
    n.wypiszn();
    return 0;
	return 0;
}
