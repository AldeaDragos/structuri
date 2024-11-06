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

	char nume[15];
	char prenume[20];
	int media1;
	int media2;
	int media3;

};

struct BazeDeDate {

	char prenume[15];
	char nume[15];
	int salariu;
	int varsta;
	char functie[15];
	int numar_de_telefon;
	char email[40];

	void afisare() {

		cout << "Prenume : " << prenume << endl;
		cout << "Nume : " << nume << endl;
		cout << "Salariu : " << salariu << endl;
		cout << "Varsta : " << varsta << endl;
		cout << "Functia : " << functie << endl;
		cout << "Numar de telefon : " << numar_de_telefon << endl;
		cout << "Email : " << email << endl;

	}

};

struct Evenimente {

	int ore;
	int minute;
	int secunde;

	void afisare() {

		cout << "Ore : " << ore << endl;
		cout << "Minute : " << minute << endl;
		cout << "Secudne : " << secunde << endl;

	}

};

// Tema 

// VARIANTE 

// VARIANTA 1

struct Elev {

	char nume[21];
	Data dn;


};

// VARIANTA 2

struct Punct {

	int x=0;
	int y=0;

};

struct Poligon {

	Punct vf[100];

	int nrVf;

};

// VARIANTA 3

struct Elev1 {

	char nume[21];
	Data dn;

};

//VARIANTA 4
//a+bi
//a -->partea reala
//bi-->partea imaginara
struct Complex {

	//Partea reala
	int pre;
	//Partea imaginare
	int pim;

};

//VARIANTA 5

struct Punct1 {

	float x;
	float y;

};

struct Poligon1 {

	int nr;
	Punct1 v[101];
	float per = 0;

};

//VARIANTA 6

struct Punct2 {

	float x;
	float y;


};

//VARIANTA 7

struct Punct3 {

	float x;
	float y;

};

//VARIANTA 9

struct Triunghi {

	float a;
	float b;
	float c;


};

//VARIANTA 10

struct Produs {

	int cod;
	float cant;
	float pret;

};

struct Magazin {

	Produs p[100];
	int nrProduse;

};

//VARIANTA 11

struct Jucator {

	int nrTricou;
	int marimeTricou;

};

struct Echipa {

	int nrJucatori;
	Jucator juc[20];

}E ;

//VARIANTA 12

struct Fisier {

	char nume[30];
	char extensie[5];

};

struct Dosar {

	Fisier F[100];
	int nrFisiere;

}D;

// VARIANTA 13

struct Turn {

	int lungime;
	int latime;
	int inaltime;
	char culoare[20];

};

// VARIANTA 14

struct Punct4 {

	float x;
	float y;

};

struct Cerc {

	Punct4 centru;
	int raza;

};

// VARIANTA 15

struct DataExpirare {

	int luna;
	int an;

};

struct Produs1 {

	int cod;
	DataExpirare data_expirarii;
	double pret_furnizor[2];

	void afisare() {

		cout << "Cod Produs : " << cod << endl;
		cout << "Data expirarii : " << data_expirarii.luna << " / " << data_expirarii.an << endl;
		cout << "Pret furnizor 1: " << pret_furnizor[0] << endl;
		cout << "Pret furnizor 2: " << pret_furnizor[1] << endl;
	}

};

// VARIANTA 16

struct RezBac {

	int mat;
	int rom;
	int inf;

	char rez;

};

// VARIANTA 18

struct Start {

	int luna;
	int an;

};

struct Campanie {

	char titlu[20];
	Start startCampanie;
		int procent;

	void afisare() {

		cout << "Titlul : " << titlu << endl;
		cout << "Luna Inceperii : " << startCampanie.luna << endl;
		cout << "Anul Inceperii : " << startCampanie.an << endl;
		cout << "Procent Discount : " << procent << endl;
	}

};

// VARIANTA 19

struct Produs5 {

	char denumire[41];
	Data dexp;

};

// VARIANTA 20

struct Fractie {

	int numitor;
	int numarator;

};

