#include "functii.h"

//se da un array de masini sa se returneaze masina cea mai scumpa

//sa se creze un meniu de sortare 

void afisareMeniu() {

	cout << "Meniu de sortare: " << endl;
	cout << "1. Sortare dupa an" << endl;
	cout << "2. Sortare dupa kilometraj" << endl;
	cout << "3. Sortare dupa pret" << endl;
	cout << "Alege o optiune: ";

}

void sol1() {//Declarare si atribuire valori
	Masina m1;
	m1.an = 1993;
	strcpy_s(m1.model, "Dacia");
	strcpy_s(m1.culoare, "Rosu");

	m1.rulata = true;
	m1.kilometraj = 123.456;
	m1.pret = 9000;


	Masina m2;
	m2.an = 2006;
	strcpy_s(m2.model, "Toyota");
	strcpy_s(m2.culoare, "negru");
	m2.rulata = true;
	m2.kilometraj = 142.532;
	m2.pret = 12050;

	Masina m3;
	m3.an = 2018;
	strcpy_s(m3.culoare, "alb");
	strcpy_s(m3.model, "Bmw");
	m3.rulata = true;
	m3.kilometraj = 86.233;
	m3.pret = 65001;

	Masina m4;
	m4.an = 2024;
	strcpy_s(m4.culoare, "albastru");
	strcpy_s(m4.model, "Volvo");
	m4.rulata = false;
	m4.kilometraj = 7;
	m4.pret = 46400;

	Masina m5;
	m5.an = 2015;
	strcpy_s(m5.culoare, "verde");
	strcpy_s(m5.model, "Volkswagen");
	m5.rulata = true;
	m5.kilometraj = 235.174;
	m5.pret = 23002;


	Masina masini[100] = { m1,m2,m3,m4,m5 }; //vector de masinia

	int optiune = 0;

	afisareMeniu();

	cin >> optiune;

	if (optiune == 1) {
		cout << "Sortare dupa an: " << endl;
		sortareMasiniAn(masini, 5);
	}
	else if (optiune == 2) {
		cout << "Sortare dupa kilometraj: " << endl;
		sortareMasiniKilometraj(masini, 5);
	}
	else if (optiune == 3) {
		cout << "Sortare dupa pret: " << endl;
		sortareMasiniPret(masini, 5);
	}

	cout << "========AFISARE========" << endl;

	for (int i = 0; i < 5; i++) {

		masini[i].afisare();
		cout << "======================" << endl;
	}

	//Masina maxPret = masinaCeaMaiScumpa(masini, 5);


	//maxPret.afisare();
}

void sol2() {


	Melodie me1;
	strcpy_s(me1.nume, "Vals");
	strcpy_s(me1.autor, "Smiley");
	strcpy_s(me1.tara, "Romania");
	me1.loc_top = 1;
	me1.an_top = 2018;

	Melodie me2;
	strcpy_s(me2.nume, "Pentru ca");
	strcpy_s(me2.autor, "Inna");
	strcpy_s(me2.tara, "Romania");
	me2.loc_top = 25;
	me2.an_top = 2018;

	Melodie me3;
	strcpy_s(me3.nume, "Numar Ascuns");
	strcpy_s(me3.autor, "Edine");
	strcpy_s(me3.tara, "Bulgaria");
	me3.loc_top = 6;
	me3.an_top = 2020;

	Melodie me4;
	strcpy_s(me4.nume, "Impar");
	strcpy_s(me4.autor, "Mark Stam");
	strcpy_s(me4.tara, "Romania");
	me4.loc_top = 3;
	me4.an_top = 2018;

	Melodie me5;
	strcpy_s(me5.nume, "Not Like Us");
	strcpy_s(me5.autor, "Kendrick Lamar");
	strcpy_s(me5.tara, "Usa");
	me5.loc_top = 5;
	me5.an_top = 2024;

	Melodie melodii[200] = { me1,me2,me3,me4,me5 };

	afisareMelodiiTop32018Romania(melodii, 5);

}

void sol3() {

	Melodie me1;
	strcpy_s(me1.nume, "Vals");
	strcpy_s(me1.autor, "Smiley");
	strcpy_s(me1.tara, "Romania");
	me1.loc_top = 1;
	me1.an_top = 2018;

	Melodie me2;
	strcpy_s(me2.nume, "Pentru ca");
	strcpy_s(me2.autor, "Inna");
	strcpy_s(me2.tara, "Romania");
	me2.loc_top = 25;
	me2.an_top = 2018;

	Melodie me3;
	strcpy_s(me3.nume, "Numar Ascuns");
	strcpy_s(me3.autor, "Edine");
	strcpy_s(me3.tara, "Bulgaria");
	me3.loc_top = 6;
	me3.an_top = 2020;

	Melodie me4;
	strcpy_s(me4.nume, "Impar");
	strcpy_s(me4.autor, "Mark Stam");
	strcpy_s(me4.tara, "Romania");
	me4.loc_top = 3;
	me4.an_top = 2018;

	Melodie me5;
	strcpy_s(me5.nume, "Not Like Us");
	strcpy_s(me5.autor, "Kendrick Lamar");
	strcpy_s(me5.tara, "Usa");
	me5.loc_top = 5;
	me5.an_top = 2024;

	Melodie melodii[200] = { me1,me2,me3,me4,me5 };

	afisareMelodiiOrdAlfNume(melodii, 5);

	for (int i = 0; i < 5; i++) {

		melodii[i].afisare();
		cout << "=====================" << endl;
	}

}

void sol4() {

	Melodie me1;
	strcpy_s(me1.nume, "Vals");
	strcpy_s(me1.autor, "Smiley");
	strcpy_s(me1.tara, "Romania");
	me1.loc_top = 1;
	me1.an_top = 2018;

	Melodie me2;
	strcpy_s(me2.nume, "Pentru ca");
	strcpy_s(me2.autor, "Inna");
	strcpy_s(me2.tara, "Romania");
	me2.loc_top = 25;
	me2.an_top = 2018;

	Melodie me3;
	strcpy_s(me3.nume, "Numar Ascuns");
	strcpy_s(me3.autor, "Edine");
	strcpy_s(me3.tara, "Bulgaria");
	me3.loc_top = 6;
	me3.an_top = 2020;

	Melodie me4;
	strcpy_s(me4.nume, "Impar");
	strcpy_s(me4.autor, "Mark Stam");
	strcpy_s(me4.tara, "Romania");
	me4.loc_top = 3;
	me4.an_top = 2018;

	Melodie me5;
	strcpy_s(me5.nume, "Not Like Us");
	strcpy_s(me5.autor, "Kendrick Lamar");
	strcpy_s(me5.tara, "Usa");
	me5.loc_top = 5;
	me5.an_top = 2024;

	Melodie melodii[200] = { me1,me2,me3,me4,me5 };

	afisareMelodiilorOrdAlfTara(melodii, 5);


	for (int i = 0; i < 5; i++) {

		melodii[i].afisare();
		cout << "=====================" << endl;
	}

}

void sol5() {

	Medalie med1;
	strcpy_s(med1.nume, "Bogdan");
	strcpy_s(med1.judet, "Sibiu");
	strcpy_s(med1.nume_medalie, "Aur");
	med1.an = 2023;

	Medalie med2;
	strcpy_s(med2.nume, "Mihai");
	strcpy_s(med2.judet, "Iasi");
	strcpy_s(med2.nume_medalie, "Argint");
	med2.an = 2019;

	Medalie med3;
	strcpy_s(med3.nume, "Maria");
	strcpy_s(med3.judet, "Brasov");
	strcpy_s(med3.nume_medalie, "Bronze");
	med3.an = 2020;

	Medalie med4;
	strcpy_s(med4.nume, "Vlad");
	strcpy_s(med4.judet, "Iasi");
	strcpy_s(med4.nume_medalie, "Aur");
	med4.an = 2019;


	Medalie med5;
	strcpy_s(med5.nume, "Andreea");
	strcpy_s(med5.judet, "Iasi");
	strcpy_s(med5.nume_medalie, "Argint");
	med5.an = 2019;

	Medalie medalii[200] = { med1,med2,med3,med4,med5 };

	afisareNrMedaliiAur(medalii, 5);
	afisareNrMedaliiArgint(medalii, 5);
	afisareNrMedaliiBronze(medalii, 5);
}

void sol6() {


	Consultatie c1;
	strcpy_s(c1.pacient, "Fulea");
	strcpy_s(c1.cabinet, "SanMed");
	c1.data_cons.zi = 23;
	c1.data_cons.luna = 8;
	c1.data_cons.an = 2024;

	Consultatie c2;
	strcpy_s(c2.pacient, "Popescu");
	strcpy_s(c2.cabinet, "SanatatePlus");
	c2.data_cons.zi = 10;
	c2.data_cons.luna = 8;
	c2.data_cons.an = 2019;

	Consultatie c3;
	strcpy_s(c3.pacient, "Marinescu");
	strcpy_s(c3.cabinet, "ProMed");
	c3.data_cons.zi = 10;
	c3.data_cons.luna = 8;
	c3.data_cons.an = 2019;

	Consultatie c4;
	strcpy_s(c4.pacient, "Stanescu");
	strcpy_s(c4.cabinet, "Clinic24");
	c4.data_cons.zi = 15;
	c4.data_cons.luna = 9;
	c4.data_cons.an = 2020;

	Consultatie c5;
	strcpy_s(c5.pacient, "Ionescu");
	strcpy_s(c5.cabinet, "MediLife");
	c5.data_cons.zi = 10;
	c5.data_cons.luna = 8;
	c5.data_cons.an = 2019;

	Consultatie consultatii[100] = { c1,c2,c3,c4,c5 };

	cout << "Numele pacientilor programati in data de 10 August 2019 sunt: " << endl;

	afisareNumePacienti(consultatii, 5);

	afisareNumarPacienti(consultatii, 5);

}

void sol7() {

	Excursie ex1;
	strcpy_s(ex1.nume, "Alex");
	strcpy_s(ex1.oras, "Bucuresti");
	strcpy_s(ex1.tara, "Romania");
	ex1.data_exc.zi = 23;
	ex1.data_exc.luna = 8;
	ex1.data_exc.an = 2024;

	Excursie ex2;
	strcpy_s(ex2.nume, "Andrei");
	strcpy_s(ex2.oras, "Paris");
	strcpy_s(ex2.tara, "Franta");
	ex2.data_exc.zi = 10;
	ex2.data_exc.luna = 6;
	ex2.data_exc.an = 2022;

	Excursie ex3;
	strcpy_s(ex3.nume, "Elena");
	strcpy_s(ex3.oras, "Roma");
	strcpy_s(ex3.tara, "Italia");
	ex3.data_exc.zi = 28;
	ex3.data_exc.luna = 9;
	ex3.data_exc.an = 2021;

	Excursie ex4;
	strcpy_s(ex4.nume, "Cristian");
	strcpy_s(ex4.oras, "Berlin");
	strcpy_s(ex4.tara, "Germania");
	ex4.data_exc.zi = 5;
	ex4.data_exc.luna = 10;
	ex4.data_exc.an = 2020;

	Excursie ex5;
	strcpy_s(ex5.nume, "Ioana");
	strcpy_s(ex5.oras, "Madrid");
	strcpy_s(ex5.tara, "Spania");
	ex5.data_exc.zi = 12;
	ex5.data_exc.luna = 3;
	ex5.data_exc.an = 2019;

	Excursie excursii[100] = {ex1,ex2,ex3,ex4,ex5};

	strcpy_s(numed, "Ioana");

	afisarePersoaneCareParticipa(excursii, 5);

}

void sol8() {

	Angajat a1;
	strcpy_s(a1.nume, "Mihai");
	strcpy_s(a1.functie, "Analist");
	strcpy_s(a1.departament, "IT");
	a1.salariu_baza = 4800;
	a1.ora_sp = 20;
	a1.nr_ore_sp = 10;
	a1.total_sporuri = 200;
	a1.salariu_obt = 5000;

	Angajat a2;
	strcpy_s(a2.nume, "Ioana");
	strcpy_s(a2.functie, "Manager");
	strcpy_s(a2.departament, "Marketing");
	a2.salariu_baza = 3500;
	a2.ora_sp = 18;
	a2.nr_ore_sp = 8;
	a2.total_sporuri = 144;
	a2.salariu_obt = 3644;

	Angajat a3;
	strcpy_s(a3.nume, "Radu");
	strcpy_s(a3.functie, "Inginer");
	strcpy_s(a3.departament, "Productie");
	a3.salariu_baza = 5200;
	a3.ora_sp = 25;
	a3.nr_ore_sp = 12;
	a3.total_sporuri = 300;
	a3.salariu_obt = 5500;

	Angajat a4;
	strcpy_s(a4.nume, "Ana");
	strcpy_s(a4.functie, "ConFinanciar");
	strcpy_s(a4.departament, "Marketing");
	a4.salariu_baza = 4600;
	a4.ora_sp = 22;
	a4.nr_ore_sp = 15;
	a4.total_sporuri = 330;
	a4.salariu_obt = 4930;

	Angajat a5;
	strcpy_s(a5.nume, "Vlad");
	strcpy_s(a5.functie, "DirVanzari");
	strcpy_s(a5.departament, "Marketing");
	a5.salariu_baza = 7500;
	a5.ora_sp = 30;
	a5.nr_ore_sp = 20;
	a5.total_sporuri = 600;
	a5.salariu_obt = 8100;

	Angajat angajati[5] = { a1,a2,a3,a4,a5 };

	salariuObtMax(angajati, 5);

	cout << "====================" << endl;

	nrTotalOre(angajati, 5);
}

void sol9() {

	Student st1;
	strcpy_s(st1.nume, "Andrei");
	strcpy_s(st1.grupa, "Cercetasi");
	strcpy_s(st1.bursa, "NU");
	st1.an_studiu = 2019;
	st1.nr_credite = 45;

	Student st2;
	strcpy_s(st2.nume, "Maria");
	strcpy_s(st2.grupa, "Explorato");
	strcpy_s(st2.bursa, "NU");
	st2.an_studiu = 2021;
	st2.nr_credite = 12;

	Student st3;
	strcpy_s(st3.nume, "Ion");
	strcpy_s(st3.grupa, "Navigat");
	strcpy_s(st3.bursa, "NU");
	st3.an_studiu = 2020;
	st3.nr_credite = 50;

	Student st4;
	strcpy_s(st4.nume, "Elena");
	strcpy_s(st4.grupa, "Inventa");
	strcpy_s(st4.bursa, "NU");
	st4.an_studiu = 2022;
	st4.nr_credite = 48;

	Student st5;
	strcpy_s(st5.nume, "Alexandru");
	strcpy_s(st5.grupa, "Cercetasi");
	strcpy_s(st5.bursa, "NU");
	st5.an_studiu = 2019;
	st5.nr_credite = 3;

	Student studenti[5] = { st1,st2,st3,st4,st5 };

	bursa(studenti, 5);

	returnareStudentiBursa(studenti, 5);
}

void sol10() {

	Student2 st1;
	strcpy_s(st1.nume, "Gabriel");
	strcpy_s(st1.grupa, "Inovatorii");
	st1.an_studiu = 2022;
	st1.nr_total_credite = 32;

	Student2 st2;
	strcpy_s(st2.nume, "Bianca");
	strcpy_s(st2.grupa, "Arhitectii");
	st2.an_studiu = 2021;
	st2.nr_total_credite = 38;

	Student2 st3;
	strcpy_s(st3.nume, "Cristina");
	strcpy_s(st3.grupa, "Designeri");
	st3.an_studiu = 2023;
	st3.nr_total_credite = 50;


	Student2 st4;
	strcpy_s(st4.nume, "Robert");
	strcpy_s(st4.grupa, "Geologi");
	st4.an_studiu = 2020;
	st4.nr_total_credite = 0;

	Student2 st5;
	strcpy_s(st5.nume, "Diana");
	strcpy_s(st5.grupa, "Ecologistii");
	st5.an_studiu = 2023;
	st5.nr_total_credite = 48;

	Student2 studenti2[5] = { st1,st2,st3,st4,st5 };

	returnareStudentiCredite(studenti2, 5);
}


void sol11() {

	Spectacol sp1;
	strcpy_s(sp1.denumire, "Rosto");
	strcpy_s(sp1.autor, "I.L.Caragiale");
	sp1.data_sp.zi = 23;
	sp1.data_sp.luna = 5;
	sp1.data_sp.an = 2019;
	sp1.nr_bilete = 75;
	sp1.pret = 50;

	Spectacol sp2;
	strcpy_s(sp2.denumire, "O scrisoare pierduta");
	strcpy_s(sp2.autor, "I.L.Caragiale");
	sp2.data_sp.zi = 15;
	sp2.data_sp.luna = 5;
	sp2.data_sp.an = 2019;
	sp2.nr_bilete = 100;
	sp2.pret = 60;

	Spectacol sp3;
	strcpy_s(sp3.denumire, "Visul unei nopti de vara");
	strcpy_s(sp3.autor, "William Shakespeare");
	sp3.data_sp.zi = 10;
	sp3.data_sp.luna = 12;
	sp3.data_sp.an = 2024;
	sp3.nr_bilete = 80;
	sp3.pret = 55;

	Spectacol sp4;
	strcpy_s(sp4.denumire, "Steaua fara nume");
	strcpy_s(sp4.autor, "Mihail Sebastian");
	sp4.data_sp.zi = 7;
	sp4.data_sp.luna = 1;
	sp4.data_sp.an = 2025;
	sp4.nr_bilete = 120;
	sp4.pret = 65;

	Spectacol sp5;
	strcpy_s(sp5.denumire, "Take, Ianke si Cadir");
	strcpy_s(sp5.autor, "Victor Ion Popa");
	sp5.data_sp.zi = 20;
	sp5.data_sp.luna = 5;
	sp5.data_sp.an = 2019;
	sp5.nr_bilete = 90;
	sp5.pret = 70;

	Spectacol spectacole[50] = { sp1,sp2,sp3,sp4,sp5 };

	cout << "a)" << endl;

	sumaBileteMai2019(spectacole, 5);

	cout << "================" << endl;


	cout << "b)" << endl;

	returnareSpectacoleIlC(spectacole, 5);

}

void sol12() {

	Conferinta con1;
	strcpy_s(con1.denumire, "Meet");
	strcpy_s(con1.oras, "Bucuresti");
	strcpy_s(con1.tara, "Romania");
	strcpy_s(con1.tematica, "IT");
	con1.data_conf.an = 2019;
	con1.data_conf.luna = 5;
	con1.data_conf.zi = 15;
	strcpy_s(con1.nume, "Andrei");
	strcpy_s(con1.tip_intreg, "Lector");

	Conferinta con2;
	strcpy_s(con2.denumire, "Tech World");
	strcpy_s(con2.oras, "San Francisco");
	strcpy_s(con2.tara, "SUA");
	strcpy_s(con2.tematica, "IT");
	con2.data_conf.an = 2019;
	con2.data_conf.luna = 7;
	con2.data_conf.zi = 22;
	strcpy_s(con2.nume, "Maria");
	strcpy_s(con2.tip_intreg, "Participant");

	Conferinta con3;
	strcpy_s(con3.denumire, "Future Tech");
	strcpy_s(con3.oras, "Tokyo");
	strcpy_s(con3.tara, "Japonia");
	strcpy_s(con3.tematica, "IT");
	con3.data_conf.an = 2019;
	con3.data_conf.luna = 9;
	con3.data_conf.zi = 18;
	strcpy_s(con3.nume, "Kenji");
	strcpy_s(con3.tip_intreg, "Lector");

	Conferinta con4;
	strcpy_s(con4.denumire, "MedLife Symposium");
	strcpy_s(con4.oras, "Iasi");
	strcpy_s(con4.tara, "Romania");
	strcpy_s(con4.tematica, "Medicina");
	con4.data_conf.an = 2019;
	con4.data_conf.luna = 4;
	con4.data_conf.zi = 10;
	strcpy_s(con4.nume, "Irina");
	strcpy_s(con4.tip_intreg, "Participant");


	Conferinta con5;
	strcpy_s(con5.denumire, "Health Innovations");
	strcpy_s(con5.oras, "Iasi");
	strcpy_s(con5.tara, "Romania");
	strcpy_s(con5.tematica, "Medicina");
	con5.data_conf.an = 2019;
	con5.data_conf.luna = 4;
	con5.data_conf.zi = 25;
	strcpy_s(con5.nume, "Cristian");
	strcpy_s(con5.tip_intreg, "Participant");

	Conferinta conferinte[10] = { con1,con2,con3,con4,con5 };
	
	cout << "a)" << endl;

	numeLectori(conferinte, 5);

	cout << "=====================" << endl;


	cout << "b)" << endl;

	numeleNrPart(conferinte, 5);
}

// Se dau datele de naștere a n persoane, numerotate de la 1 la n, în forma an luna zi. Să se determine numărul de ordine al celei mai tinere și al celei mai în vârstă persoană dintre cele date.

void sol13() {

	Aniversari aniv1;
	aniv1.zi = 26;
	aniv1.luna = 5;
	aniv1.an = 1998;

	Aniversari aniv2;
	aniv2.zi = 18;
	aniv2.luna = 12;
	aniv2.an = 1987;

	Aniversari aniv3;
	aniv3.zi = 25;
	aniv3.luna = 9;
	aniv3.an = 1987;

	Aniversari aniv4;
	aniv4.zi = 16;
	aniv4.luna = 1;
	aniv4.an = 2015;

	Aniversari aniv5;
	aniv5.zi = 8;
	aniv5.luna = 1;
	aniv5.an = 2015;

	Aniversari aniversare[10] = { aniv1,aniv2,aniv3,aniv4,aniv5 };

	ceaMaiTanara(aniversare, 5);

	cout << "==================" << endl;

	ceaMaiBatrana(aniversare, 5);
}

// qclasa

void sol14(){

	Clasa cls1;
	cls1.codul = 1;
	cls1.media = 10;
	cls1.nr_absente = 3;

	Clasa cls2;
	cls2.codul = 2;
	cls2.media = 8;
	cls2.nr_absente = 1;

	Clasa cls3;
	cls3.codul = 3;
	cls3.media = 8;
	cls3.nr_absente = 5;

	Clasa clase[3] = { cls1,cls2,cls3 };

	nrEleviMed10(clase, 3);

	mediaClase(clase, 3);



}

//RATC2

void sol15() {

	Bilete b1;
	strcpy_s(b1.prenume, "Jotaro ");
	strcpy_s(b1.nume, "Kujo ");
	b1.bilet_platit = true;

	Bilete b2;
	strcpy_s(b2.prenume, "Dio  ");
	strcpy_s(b2.nume, "Brando  ");
	b2.bilet_platit = false;

	Bilete b3;
	strcpy_s(b3.prenume, "Joseph  ");
	strcpy_s(b3.nume, "Joestar  ");
	b3.bilet_platit = true;


	Bilete b4;
	strcpy_s(b4.prenume, "Joseph  ");
	strcpy_s(b4.nume, "Joestar  ");
	b4.bilet_platit = true;

	Bilete b5;
	strcpy_s(b5.prenume, "Andreescu   ");
	strcpy_s(b5.nume, "Ionel");
	b5.bilet_platit = false;

	Bilete bilet[10] = { b1,b2,b3,b4,b5 };

	penMaxAnalfabetic(bilet, 5);

}

void sol16() {

	Clasa2 cl1;
	strcpy_s(cl1.prenume, "Juro");
	strcpy_s(cl1.nume, "Muro ");
	cl1.media1 = 2;
	cl1.media2 = 3;
	cl1.media3 = 5;

	Clasa2 cl2;
	strcpy_s(cl2.prenume, "San");
	strcpy_s(cl2.nume, "Hill");
	cl2.media1 = 7;
	cl2.media2 = 5;
	cl2.media3 = 9;

	Clasa2 cl3;
	strcpy_s(cl3.prenume, "Barbarigo");
	strcpy_s(cl3.nume, "San");
	cl3.media1 = 9;
	cl3.media2 = 2;
	cl3.media3 = 4;

	Clasa2 cl4;
	strcpy_s(cl4.prenume, "Ezio");
	strcpy_s(cl4.nume, "Marbo");
	cl4.media1 = 2;
	cl4.media2 = 6;
	cl4.media3 = 3;

	Clasa2 cl5;
	strcpy_s(cl5.prenume, "Gorbo");
	strcpy_s(cl5.nume, "Borbo");
	cl5.media1 = 2;
	cl5.media2 = 4;
	cl5.media3 = 6;

	Clasa2 clasele[5] = { cl1, cl2, cl3, cl4, cl5 };

	nrCopiMedGen(clasele, 5);


}

void sol17() {

	BazeDeDate bd1;
	strcpy_s(bd1.prenume, "Len");
	strcpy_s(bd1.nume, "Trexler ");
	bd1.salariu = 100000;
	bd1.varsta = 55;
	strcpy_s(bd1.functie, "SpyMaster");
	bd1.numar_de_telefon = 5554440192;
	strcpy_s(bd1.email, "lt@sp.com");

	BazeDeDate bd2;
	strcpy_s(bd2.prenume, "Oliver ");
	strcpy_s(bd2.nume, "Regina  ");
	bd2.salariu = 0;
	bd2.varsta = 37;
	strcpy_s(bd2.functie, "Vigilante ");
	bd2.numar_de_telefon = 1234567890;
	strcpy_s(bd2.email, "or@vg.com");


	BazeDeDate bd3;
	strcpy_s(bd3.prenume, "Sterling  ");
	strcpy_s(bd3.nume, "Archer   ");
	bd3.salariu = 1000000;
	bd3.varsta = 43;
	strcpy_s(bd3.functie, "Agent   ");
	bd3.numar_de_telefon = 8423565491;
	strcpy_s(bd3.email, " sa@ag.com");

	BazeDeDate baze[100] = { bd1,bd2,bd3 };

	int p;
	cout << "p = ";;
	cin >> p;

	char c[10] = "-";
	cout << "c = ";
	cin >> c;

	if (p == 2 && strcmp(c,"+")) {
		cout << "Sortare dupa nume " << endl;
		sortareDupaNume(baze, 3);
	}

	if (p == 2 && strcmp(c, "-")) {
		cout << "Sortare dupa nume descrescator " << endl;
		sortareDupaNumeDesc(baze, 3);
	}


	for (int i = 0; i < 3; i++) {
		baze[i].afisare();
		cout << "======================" << endl;
	}
}

void sol18() {

	Evenimente ev1;
	ev1.ore = 3;
	ev1.minute = 35;
	ev1.secunde = 55;

	Evenimente ev2;
	ev2.ore = 2;
	ev2.minute = 40;
	ev2.secunde = 8;

	Evenimente eveniment[100] = { ev1,ev2 };

	afisareFormat(eveniment, 2);


}