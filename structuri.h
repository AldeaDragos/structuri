#pragma once
#pragma once
#include <iostream>
#include <string.h>
using namespace std;

//Definire structura
struct  Masina
{
	char model[30];
	int an;
	char  culoare[30];
	bool rulata;
	double kilometraj;
	double pret;



	void afisare() {

		cout << "Model : " << model << endl;
		cout << "An : " << an << endl;
		cout << "Culoare : " << culoare << endl;
		cout << "Rulata : " << rulata << endl;
		cout << "Kilometraj : " << kilometraj << endl;
		cout << "Pret : " << pret << endl;
	}
};

struct Melodie {

	char nume[30];
	char autor[20];
	char tara[20];
	int loc_top;
	int an_top;

	void afisare() {

		cout << "Nume : " << nume << endl;
		cout << "Autor : " << autor << endl;
		cout << "Tara : " << tara << endl;
		cout << "Loc ocupat in Top : " << loc_top << endl;
		cout << "Anul aparitiei : " << an_top << endl;

	}

};

struct Medalie {

	char nume[20];
	char judet[30];
	char nume_medalie[10];
	int an;

	void afisare() {

		cout << "Nume : " << nume << endl;
		cout << "Judet : " << judet << endl;
		cout << "Medalia : " << nume_medalie << endl;
		cout << "An : " << an << endl;

	}

};

struct Data {

	int zi;
	int luna;
	int an;

};

struct Consultatie {

	char pacient[20];
	char cabinet[40];
	Data data_cons;

	void afisare() {

		cout << "Pacient : " << pacient << endl;
		cout << "Cabinet : " << cabinet << endl;
		cout << "Ziua: " << data_cons.zi << endl;
		cout << "Luna: " << data_cons.luna << endl;
		cout << "An: " << data_cons.an << endl;
	}
};

struct Excursie {

	char nume[30];
	char oras[40];
	char tara[30];
	Data data_exc;

	void afisare() {

		cout << "Nume : " << nume << endl;
		cout << "Oras : " << oras << endl;
		cout << "Tara: " << tara << endl;
		cout << "Ziua: " << data_exc.zi << endl;
		cout << "Luna: " << data_exc.luna << endl;
		cout << "An: " << data_exc.an << endl;
	}

};

char numed[30];

struct Angajat {

	char nume[30];
	char functie[20];
	char departament[30];
	int salariu_baza;
	int ora_sp;
	int nr_ore_sp;
	int total_sporuri;
	int salariu_obt;


	void afisare() {

		cout << "Nume : " << nume << endl;
		cout << "Functie : " << functie << endl;
		cout << "Departament: " << departament << endl;
		cout << "Salariu: " << salariu_baza << endl;
		cout << "Ora Sup: " << ora_sp << endl;
		cout << "Nr ore Sup: " << nr_ore_sp << endl;
		cout << "Total Sporuri; " << total_sporuri << endl;
		cout << "Salariu Obtinut: " << salariu_obt << endl;
	}

};

struct Student {

	char nume[20];
	char grupa[10];
	char bursa[3];
	int an_studiu;
	int nr_credite;

	void afisare() {

		cout << "Nume : " << nume << endl;
		cout << "Grupa : " << grupa << endl;
		cout << "Bursa: " << bursa << endl;
		cout << "An Studiu: " << an_studiu << endl;
		cout << "Nr Credite: " << nr_credite << endl;
	}

};

struct Examinare {

	char tip_examinare[10];
	char disciplina[20];
	int nr_credite;

};

struct Student2 {

	char nume[20];
	char grupa[20];
	int an_studiu;
	int nr_total_credite;
	Examinare exam[10];


	void afisare() {

		cout << "Nume : " << nume << endl;
		cout << "Grupa : " << grupa << endl;
		cout << "An Studiu: " << an_studiu << endl;
	}


};

struct Spectacol {

	char denumire[30];
	char autor[20];
	Data data_sp;
	int nr_bilete;
	int pret;

	void afisare() {

		cout << "Denumire : " << denumire << endl;
		cout << "Ziua : " << data_sp.zi << endl;
		cout << "Luna : " << data_sp.luna << endl;
		cout << "An: " << data_sp.an << endl;
	}
};

struct Conferinta {

	char denumire[30];
	char oras[20];
	char tara[30];
	char tematica[20];
	Data data_conf;
	char nume[20];
	char tip_intreg[20];


};

struct Aniversari {

	int zi;
	int luna;
	int an;

};

struct Clasa {

	int codul;
	int media;
	int nr_absente;

	void afisare() {

		cout << "Codul :" << codul << endl;
		cout << "Media :" << media << endl;
		cout << "Nr absente : " << nr_absente << endl;

	}

};

struct Bilete {

	char prenume[15];
	char nume[15];
	bool bilet_platit;

	void afisare() {

		cout << prenume << " " << nume << " " << bilet_platit << endl;

	}

};

struct Clasa2 {

	char nume;
	char prenume;
	int media1;
	int media2;
	int media3;

};