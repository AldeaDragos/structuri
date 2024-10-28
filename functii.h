#pragma once
#include "structuri.h"

Masina masinaCeaMaiScumpa(Masina masini[],int dim) {
	Masina masinaPretMaxim = masini[0];
	for (int i = 0; i < dim; i++) {



		cout << masini[i].pret << " ";

		
		if (masini[i].pret > masinaPretMaxim.pret) {

			masinaPretMaxim = masini[i];
			cout << "aici" << endl;
		}

	}
	return masinaPretMaxim;
}

void sortareMasiniAn(Masina masini[], int dim) {

	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < dim - 1; i++) {

			if (masini[i].an > masini[i + 1].an) {
				Masina aux = masini[i];
				masini[i] = masini[i + 1];
				masini[i + 1] = aux;
				sortat = false;
			}

		}
	} while (sortat == false);


}

void sortareMasiniKilometraj(Masina masini[], int dim) {

	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < dim - 1; i++) {

			if (masini[i].kilometraj > masini[i + 1].kilometraj) {
				Masina aux = masini[i];
				masini[i] = masini[i + 1];
				masini[i + 1] = aux;
				sortat = false;
			}

		}
	} while (sortat == false);


}

void sortareMasiniPret(Masina masini[], int dim) {

	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < dim - 1; i++) {

			if (masini[i].pret > masini[i + 1].pret) {
				Masina aux = masini[i];
				masini[i] = masini[i + 1];
				masini[i + 1] = aux;
				sortat = false;
			}

		}
	} while (sortat == false);


}


void sortareDupaTop(Melodie melodii[], int dim) {

	bool sortat = false;


	do {
		sortat = true;
		for (int i = 0; i < dim - 1; i++) {

		
				if (melodii[i].loc_top > melodii[i+1].loc_top) {

					Melodie aux = melodii[i];
					melodii[i] = melodii[i + 1];
					melodii[i + 1] = aux;
					sortat = false;
				
			}

		}
	} while (sortat == false);

}

void afisareMelodiiTop32018Romania(Melodie melodii[], int dim) {

	sortareDupaTop(melodii, dim);

	char tara[100] = "Romania";

	for (int i = 0; i < dim; i++) {

		if (melodii[i].an_top == 2018 && strcmp(melodii[i].tara, "Romania")== 0 && melodii[i].loc_top <= 3) {

			
				melodii[i].afisare();
				cout << "=====================" << endl;

			
		}
	}

}

void afisareMelodiiOrdAlfNume(Melodie melodii[], int dim) {

	bool sortat = false;

	do {
		sortat = true;
		for (int i = 0; i < dim - 1; i++) {

			if (strcmp(melodii[i].nume, melodii[i + 1].nume) > 0) {

				Melodie aux = melodii[i];
				melodii[i] = melodii[i + 1];
				melodii[i + 1] = aux;
				sortat = false;
			}

		} 


	} while (sortat == false);
}

void afisareMelodiilorOrdAlfTara(Melodie melodii[], int dim) {

	bool sortat = false;

	do {

		sortat = true;
		for (int i = 0; i < dim - 1; i++) {
			if (strcmp(melodii[i].tara, melodii[i + 1].tara) > 0) {

				Melodie aux = melodii[i];
				melodii[i] = melodii[i + 1];
				melodii[i + 1] = aux;
				sortat = false;

			}
			else if (strcmp(melodii[i].tara, melodii[i + 1].tara) == 0 && melodii[i].loc_top > melodii[i + 1].loc_top) {

				Melodie aux = melodii[i];
				melodii[i] = melodii[i + 1];
				melodii[i + 1] = aux;
				sortat = false;

			}
		}

	} while (sortat == false);

}

void afisareNrMedaliiAur(Medalie medalii[], int dim) {

	int ct = 0;

	char nume_medalie[100] = "Aur";

	char judet[100] = "Iasi";

	for (int i = 0; i < dim; i++) {

		if (strcmp(medalii[i].judet, "Iasi") == 0 && medalii[i].an == 2019) {

			if (strcmp(medalii[i].nume_medalie, "Aur") == 0) {
				ct++;
			}
		}
	}
	cout << "Numarul de medalii de aur obtinute este " << ct << endl;
}

void afisareNrMedaliiArgint(Medalie medalii[], int dim) {

	int ct = 0;

	char nume_medalie[100] = "Argint";

	char judet[100] = "Iasi";

	for (int i = 0; i < dim; i++) {

		if (strcmp(medalii[i].judet, "Iasi" ) == 0 && medalii[i].an == 2019) {

			if (strcmp(medalii[i].nume_medalie, "Argint") == 0) {
				ct++;
			}
		}
	}
	cout << "Numarul de medalii de argint obtinute este " << ct << endl;
}

void afisareNrMedaliiBronze(Medalie medalii[], int dim) {

	int ct = 0;

	char nume_medalie[100] = "Bronze";

	char judet[100] = "Iasi";

	for (int i = 0; i < dim; i++) {

		if (strcmp(medalii[i].judet, "Iasi") == 0 && medalii[i].an == 2019) {

			if (strcmp(medalii[i].nume_medalie, "Bronze") == 0) {
				ct++;
			}
		}
	}
	cout << "Numarul de medalii de bronze obtinute este " << ct << endl;
}

void afisareNumePacienti(Consultatie consultatii[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (consultatii[i].data_cons.zi == 10 && consultatii[i].data_cons.luna == 8 && consultatii[i].data_cons.an == 2019) {

			cout << "- " << consultatii[i].pacient << endl;

		}

	}

}

void afisareNumarPacienti(Consultatie consultatii[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (consultatii[i].data_cons.zi == 10 && consultatii[i].data_cons.luna == 8 && consultatii[i].data_cons.an == 2019) {

			ct++;

		}

	}
	cout << "Numarul de pacienti programati in data de 10 August 2019 este " << ct << endl;
}

void afisarePersoaneCareParticipa(Excursie excursii[], int dim) {
	
	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (strcmp(numed, excursii[i].nume) == 0) {

			ct++;

			excursii[i].afisare();

		}
	}
	if (ct == 0) {
		cout << "Nicio excursie" << endl;
	}

}

void salariuObtMax(Angajat angajati[], int dim) {

	Angajat salObtMax = angajati[0];

	for (int i = 0; i < dim; i++) {


		if (angajati[i].salariu_obt > salObtMax.salariu_obt) {
			salObtMax = angajati[i];
		}

	}

	cout << "Salariul maxim obtinut este " << salObtMax.salariu_obt << endl;

}

void nrTotalOre(Angajat angajati[], int dim) {

	int sumaOreSupMark = 0;

	char departament[100] = "Marketing";

	for (int i = 0; i < dim; i++) {

		if (strcmp(angajati[i].departament, "Marketing") == 0) {

			sumaOreSupMark += angajati[i].nr_ore_sp;
		}
	}
	cout << "Numarul total de ore suplimentare obtinut de angajatii din dep marketing este " << sumaOreSupMark << endl;
}

void bursa(Student studenti[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (studenti[i].nr_credite >= 30) {
			strcpy_s(studenti[i].bursa, "DA");
		}
		else {
			strcpy_s(studenti[i].bursa, "NU");
		}

	}

}

void returnareStudentiBursa(Student studenti[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (strcmp(studenti[i].bursa, "DA") == 0) {
			studenti[i].afisare();
		}
	}

}

void returnareStudentiCredite(Student2 studenti2[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (studenti2[i].nr_total_credite > 0) {

			studenti2[i].afisare();

			cout << "====================" << endl;
		}

	}

}

void sumaBileteMai2019(Spectacol spectacole[], int dim) {

	int sumabilete = 0;

	for (int i = 0; i < dim; i++) {

		if (spectacole[i].data_sp.luna == 5 && spectacole[i].data_sp.an == 2019) {

			sumabilete += spectacole[i].nr_bilete;

		}

	}
	cout << "Numarul de bilete vandute in anul 2019 in luna Mai este " << sumabilete << endl;
}

void returnareSpectacoleIlC(Spectacol spectacole[], int dim) {

	char denumire[15] = "I.L.Caragiale";

	for (int i = 0; i < dim; i++) {

		if (strcmp(spectacole[i].autor, "I.L.Caragiale") == 0) {

			spectacole[i].afisare();

		}

	}

}

void numeLectori(Conferinta conferinte[], int dim) {

	char tip_intreg[15] = "Lector";
	char tematica[10] = "IT";
	char tara1[10] = "Romania";
	char tara2[10] = "SUA";
	char tara3[10] = "Japonia";

	for (int i = 0; i < dim; i++) {

		if (strcmp(conferinte[i].tip_intreg, "Lector") == 0 && strcmp(conferinte[i].tematica, "IT") == 0 && conferinte[i].data_conf.an == 2019) {

			if (strcmp(conferinte[i].tara, "Romania") == 0 || strcmp(conferinte[i].tara, "SUA") == 0 || strcmp(conferinte[i].tara, "Japonia") == 0){

				cout << conferinte[i].nume << endl;

			}
		}
	}
}

void numeleNrPart(Conferinta conferinte[], int dim) {

	int ct = 0;
	char tip_intreg[15] = "Participant";
	char tematica[20] = "Medicina";
	char oras[20] = "Iasi";

	for (int i = 0; i < dim; i++) {

		if (strcmp(conferinte[i].tip_intreg, "Participant") == 0 && strcmp(conferinte[i].oras, "Iasi") == 0 && strcmp(conferinte[i].tematica, "Medicina") == 0) {

			if (conferinte[i].data_conf.an == 2019 && conferinte[i].data_conf.luna == 4) {

				ct++;
				cout << conferinte[i].nume << endl;

			}

		}

	}

	cout << "Numarul participantilor prezenti la confeinta despre Medicina din Iasi " << ct << endl;
}

void ceaMaiBatrana(Aniversari aniversare[], int dim) {

	Aniversari batrana = aniversare[0];
	int index = 0;

	for (int i = 0; i < dim; i++) {

		if (aniversare[i].an < batrana.an || aniversare[i].an == batrana.an && aniversare[i].luna < batrana.luna || aniversare[i].an == batrana.an && aniversare[i].luna == batrana.luna & aniversare[i].zi < batrana.zi) {
			
			index = i;

		}
		
	}
	cout << "Cea mai in varsta persoana este la pozitia: " << index + 1 << endl;
}

void ceaMaiTanara(Aniversari aniversare[], int dim) {

	Aniversari tanara = aniversare[0];
	int index = 0;

	for (int i = 0; i < dim; i++) {

		if (aniversare[i].an > tanara.an || aniversare[i].an == tanara.an && aniversare[i].luna > tanara.luna || aniversare[i].an == tanara.an && aniversare[i].luna == tanara.luna & aniversare[i].zi > tanara.zi) {

			index = i;

		}

	}
	cout << "Cea mai tanara persoana este la pozitia: " << index + 1 << endl;
}

void nrEleviMed10(Clasa clase[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {

		if (clase[i].media == 10) {

			ct++;
		}

	}
	cout << "Numarul de elevi care are media 10 este " << ct << endl;
}

void mediaClase(Clasa clase[], int dim) {

	int ct = 0;

	int sumaMed = 0;

	for (int i = 0; i < dim; i++) {

		sumaMed += clase[i].media;
		ct++;

	}

	cout << "Media clasei este " << sumaMed / ct << endl;

}

void penMaxAnalfabetic(Bilete bilet[], int dim) {

	for (int i = 0; i < dim; i++) {

		if (bilet[i].bilet_platit == bilet[i + 1].bilet_platit == false || bilet[i].bilet_platit == bilet[i + 1].bilet_platit && strcmp(bilet[i].prenume, bilet[i + 1].prenume) >= 0) {

			bilet[i].afisare();

		}

	}

}

int mediaGenerala(Clasa2 elev) {

			
	return (elev.media1 + elev.media2 + elev.media3) / 3;
}

void nrCopiMedGen(Clasa2 clasele[], int dim) {

	int ct = 0;

	int mediaClasei = 0;
	int sumMediaClasei = 0;


	for (int i = 0; i < dim; i++) {

		sumMediaClasei += mediaGenerala(clasele[i]);

	}

	mediaClasei = sumMediaClasei / dim;

	for (int i = 0; i < dim; i++) {

		if (mediaGenerala(clasele[i])>= mediaClasei) {

			ct++;

		}

	}

	cout << "Numarul elevilor cu media generala >= media clasei: " << ct << endl;

}

void sortareDupaNumeDesc(BazeDeDate baze[], int dim) {

	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim-1; i++) {

			if (strcmp(baze[i].nume, baze[i + 1].nume) < 0) {

				BazeDeDate aux = baze[i];
				baze[i] = baze[i + 1];
				baze[i + 1] = aux;
				sortat = false;

			}

		}

	} while (sortat == false);

}

void sortareDupaNume(BazeDeDate baze[], int dim) {

	bool sortat = false;

	do {

		sortat = true;

		for (int i = 0; i < dim - 1; i++) {

			if (strcmp(baze[i].nume, baze[i + 1].nume) > 0) {

				BazeDeDate aux = baze[i];
				baze[i] = baze[i + 1];
				baze[i + 1] = aux;
				sortat = false;

			}

		}

	} while (sortat == false);

}

void afisareFormat(Evenimente eveniment[], int dim) {

	for (int i = 0; i < dim; i++) {

		cout << eveniment[i].ore << ": " << eveniment[i].minute << ": " << eveniment[i].secunde << endl;

	}

}

void durateExpInSec(Evenimente eveniment[], int dim) {

	for (int i = 0; i < dim; i++) {

		if(eveniment[i].ore=60*eveniment[i].minute)

	}

}