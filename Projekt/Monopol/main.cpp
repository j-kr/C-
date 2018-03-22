#include <iostream>

//Podzial ze wzgledu na OSOBY

class sedzia
{
	public
	void przesun_gracza(gracz nazwa,ilosc pol); //przesuwa gracza i wylosowana ilosc pol
	void wydaj_pole(gracz nazwa,nazwa pola);
	void wsadz_do_wiezienia(gracz nazwa);//wsadza do wiezienia poprzez zmienienie graczowi funkcji logiczna na prawde co powoduje unieruchomienie gracza
	void wydal_z_wiezienia(gracz nazwa);//zmienia wartosc logiczna zeruje wiezienie
};

class bank
{
	private
	int StanGotowki;//Okresla ilosc startowych pieniedzy w grze
	public
	void wyplac_gotowke(gracz imie,Kwota ilosc);//dawanie pieniedzy na start / wyplacanie gotowki za przejscie przez start
	void odbierz_gotowke(gracz imie,Kwota ilosc);//wydawanie odiberanie gotowki oplaty podatkowe np z szansy

};

class gracz
{
	private
	friend class sedzia;//zaprzyjazniamy klase sedzia w celu kontroli gracza przez sedziego (wsadzenie do wiezienia poruszanie sie po mapie)
	friend class bank;//zaprzyjazniamy klase banku w celu wyplacania i pobierania oplat
    int oczka;// ilosc wyrzuconych przez gracza oczek
    int stankonta;
    int id;//nadajemy specyficzny numer graczowi w celu rozpznania
	char nazwa[100];//nazwa gracza
	char miasto[50];//nazwa miasta ktora zostaje przydzielana podczas kupna danego pola
	bool wiezienie;//wartosc logiczna sprawdza czy dany gracz znajduje sie aktualnie w wiezieniu
};

//Podzial ze wzgledu na ZDARZENIA

class wiezienie
{
    private:
	friend class sedzia;//zaprzyjazniamy sedziego aby mogl sprawdzic i wiedziec czy dany gracz znajduje sie w wiezeniu aby uniemozliwic badz wlasnie na odwrot poruszanie sie po mapie
	public
	void zapuszkowany(gracz nazwa, int ileczasu);
};

class parking
{
	private
	friend class bank;//aby bank mogl pobrac oplate
	int koszt_zatrzymania;
	void oplata(gracz nazwa, gracz pobierzkwote);
}

class szansa;
{
	private
	char nazwa_szansy[50];
	int bonus;
	public
	void dajszanse(gracz nazwa,bonus);//losuje bonus pod cyfra sa ukryte zdarzenia powodujace np przejscie o kilka pol dodatkowa szansca bonus pieniezny etc.

};


class start
{
	private
	friend class gracz;//Pole specjalne po przejsciu wszystkich pol otrzymuje sie premie wynoszaca X pieniedzy
	int premia;
	public
	void wyplac_premie(gracz nazwa,stankonta Kwota);

};

//Podzial ze wzgledu na KUPNA/MIEJSCA

class kolej
{
	private
	friend class gracz;
	char kierunek[50];
	int cena;
	int taksa;//oplata za postoj
	bool kupiona;
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	public
	void wydaj(gracz nazwa,miasto kolej);

}


class elektrownie
{
	private
	friend class gracz;
	char nazwa[50];
	int cena;
	int taksa;//oplata za postoj
	bool kupiona;
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	public
	void wydaj(gracz nazwa,miasto elektrownia);

}

class wodociagi
{
	private
	friend class gracz;
	char kierunek[50];
	int cena;
	int taksa;//oplata za postoj
	bool kupiona;
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	public
	void wydaj(gracz nazwa,miasto wodociagi);

}


class Pole
{
	private
	bool kupione//sprawdza czy dane pole jest kupione
	int kolor //Okresla kolor danego pola
	int cena // cena obiektu
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	private
	int oplata // okresla pobierana oplate
	public
	void wydaj(gracz nazwa,miasto pole);
};


int main(int argc, char** argv) {
	return 0;
}
class bank
{
	private
	int StanGotowki;//Okresla ilosc startowych pieniedzy w grze
	public
	void wyplac_gotowke(gracz imie,Kwota ilosc);//dawanie pieniedzy na start / wyplacanie gotowki za przejscie przez start
	void odbierz_gotowke(gracz imie,Kwota ilosc);//wydawanie odiberanie gotowki oplaty podatkowe np z szansy

};

class gracz
{
	private
	friend class sedzia;//zaprzyjazniamy klase sedzia w celu kontroli gracza przez sedziego (wsadzenie do wiezienia poruszanie sie po mapie)
	friend class bank;//zaprzyjazniamy klase banku w celu wyplacania i pobierania oplat
    int oczka;// ilosc wyrzuconych przez gracza oczek
    int stankonta;
    int id;//nadajemy specyficzny numer graczowi w celu rozpznania
	char nazwa[100];//nazwa gracza
	char miasto[50];//nazwa miasta ktora zostaje przydzielana podczas kupna danego pola
	bool wiezienie;//wartosc logiczna sprawdza czy dany gracz znajduje sie aktualnie w wiezieniu
};

//Podzial ze wzgledu na ZDARZENIA

class wiezienie
{
    private:
	friend class sedzia;//zaprzyjazniamy sedziego aby mogl sprawdzic i wiedziec czy dany gracz znajduje sie w wiezeniu aby uniemozliwic badz wlasnie na odwrot poruszanie sie po mapie
	public
	void zapuszkowany(gracz nazwa, int ileczasu);
};

class parking
{
	private
	friend class bank;//aby bank mogl pobrac oplate
	int koszt_zatrzymania;
	void oplata(gracz nazwa, gracz pobierzkwote);
}

class szansa;
{
	private
	char nazwa_szansy[50];
	int bonus;
	public
	void dajszanse(gracz nazwa,bonus);//losuje bonus pod cyfra sa ukryte zdarzenia powodujace np przejscie o kilka pol dodatkowa szansca bonus pieniezny etc.

};


class start
{
	private
	friend class gracz;//Pole specjalne po przejsciu wszystkich pol otrzymuje sie premie wynoszaca X pieniedzy
	int premia;
	public
	void wyplac_premie(gracz nazwa,stankonta Kwota);

};

//Podzial ze wzgledu na KUPNA/MIEJSCA

class kolej
{
	private
	friend class gracz;
	char kierunek[50];
	int cena;
	int taksa;//oplata za postoj
	bool kupiona;
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	public
	void wydaj(gracz nazwa,miasto kolej);

}


class elektrownie
{
	private
	friend class gracz;
	char nazwa[50];
	int cena;
	int taksa;//oplata za postoj
	bool kupiona;
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	public
	void wydaj(gracz nazwa,miasto elektrownia);

}

class wodociagi
{
	private
	friend class gracz;
	char kierunek[50];
	int cena;
	int taksa;//oplata za postoj
	bool kupiona;
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	public
	void wydaj(gracz nazwa,miasto wodociagi);

}


class Pole
{
	private
	bool kupione//sprawdza czy dane pole jest kupione
	int kolor //Okresla kolor danego pola
	int cena // cena obiektu
	int wlasciciel;//okreslenie po indywidualnym numerze id wlasciciela
	private
	int oplata // okresla pobierana oplate
	public
	void wydaj(gracz nazwa,miasto pole);
};


int main(int argc, char** argv) {
	return 0;
}
