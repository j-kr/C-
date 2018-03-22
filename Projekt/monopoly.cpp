#include <cstdlib>
#include <iostream>

class bank
{
private:
	void daj_miasto(gracz, miasto );	// przekazywanie poszczegolnych kart miast, elektrowni itp. graczowi
	void daj_elektrownie(gracz,elektrownia );
	void daj_wodociagi(gracz,wodociagi );
	void daj_kolej(gracz,kolej );
	void wyplata(gracz, int ile);	// dajemy/pozyczamy/zabieramy odpowiednia ilosc $$$ danemu graczowi
	void pozyczka(gracz, int ile);
	void pobieranie(gracz, int ile);
};


class gracz
{
public:
   int miejsce // na ktorym polu stoi gracz;
   int ile_postoju; //ile tur postoju zostalo
   bool czy_w_wiezniu;
   int nr_gracza;
   char nazwa[20]; //nazwa gracza

private:
    friend class bank; //zaprzyjazniona z bankiem, bank ma dostep do prywatnych danych gracza
    int stan_konta;
    void przesun(); //rzut kostka, random 12 (bo sa 2 kosci), przesuwa gracza
};


class podatek
{
public:
    int numer_pola;
    int oplata;
    friend class bank;
};


class wiezienie
{
public:
    int kto; //ktorzy gracze obecnie przebywaja w wiezieniu
    int numer_pola;

private:
    void wsadz(gracz, int ile) //wsadza danego gracza do wiezienia na okreslona ilosc tur
};


class miasto
{
public:
    char[20] nazwa;
    char[20] nazwa_panstwa;
    int numer_pola;
    int oplata;
    postoj(gracz, int oplata);
    //od gracza ktory stanie na polu (nie jest wlascicielem) moze byc pobrana oplata,
    //ale nie musi poniewaz wlasciciel moze tego nie zauwazyc
    //wysokosc jest zalezna od parametrow typu ile domkow jest na danym polu itp

private:
int cena_kupna;
int cena_domku;
int ilosc_domkow; //ile domkow obecnie stoi, kiedy pojawia sie hotel, ilosc domkow sie zeruje
int cena_zastawu; //prywatne poniewaz gracz nie widzi karty kiedy staje na polu
bool hotel; //czy jest
kup(); //jezeli gracz kupi nieruchomosc, jego nr zostanie przypisany jako wlasciciel bank pobierze od niego pieniadze
friend class bank;
};


class los
{
public:
    int numer_pola;
    void los(int kolor, int ktora); //zaleznie od tego co jest napisane na karcie, bank moze ofiarowac badz zabrac pieniadze od gracza, gracz moze sie przesunac itp
    friend class bank;
};


class elektrownia
{
public:
    char[20] nazwa;
    int numer_pola;
    int cena;
    int oplata;

private:
    int wlasciciel;
    postoj(gracz, int oplata);
    kup(); //jezeli gracz kupi nieruchomosc, jego nr zostanie przypisany jako wlasciciel bank pobierze od niego pieniadze
    friend class bank; // bank pobiera pieniadze od gracza

};


class wodociagi
{
public:
    char[20] nazwa;
    int numer_pola;
    int cena;
    int oplata;

private:
    postoj(gracz, int oplata);
    int wlasciciel;
    kup(); //jezeli gracz kupi nieruchomosc, jego nr zostanie przypisany jako wlasciciel bank pobierze od niego pieniadze
    friend class bank; // bank pobiera pieniadze od gracza
};


class koleje
{
public:
    char[20] nazwa;
    int numer_pola;
    int cena;
    int oplata;

private:
    postoj(gracz, int oplata);
    int wlasciciel;
    kup(); //jezeli gracz kupi nieruchomosc, jego nr zostanie przypisany jako wlasciciel
// bank pobierze od niego pieniadze
    friend class bank; // bank pobiera pieniadze od gracza
};


class parking
{
public:
    int numer_pola;
    int oplata(gracz);
    friend class bank; // bank pobiera pieniadze od gracza
};


class start
{
public:
    int numer_pola;

private:
    void przejscie(); //kiedy dany gracz przejdzie przez start, bank wyplaci mu naleznosci
    friend class bank;
};


int main()
{
	return 0;
}
