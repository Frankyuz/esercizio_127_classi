#include <iostream>
#include "Ora.h"
#pragma warning (disable : 4996)

using namespace std;

int main(){
	Ora test = Ora();
	Ora prova = Ora(12,13,31);
	//Ora prova(23,34,21);
	int richiesta = 0;
	int ore = 0;
	int minuti = 0;
	int secondi = 0;
	
	printf("Premi 1 per settare l'orario secondo il computer, 2 manualmente: ");
	cin >> richiesta;
	switch (richiesta) {
	case 1:{
		test.setcurrent();
		printf("Vuoi vedere l'ora (1), minuti (2), secondi (3)? ");
		scanf("%d", &richiesta);
		switch (richiesta) {
		case 1:
			cout << test.ore();
			break;
		case 2:
			cout << test.min();
			break;
		case 3:
			cout << test.sec();
			break;
		}
		break;
	}
	case 2: {
		printf("Inserisci hh:mm:ss :");
		scanf("%d:%d:%d", &ore, &minuti, &secondi);
		if (ore > 24) {
			scanf("%d", &ore);
		}
		if (minuti > 60) {
			scanf("%d", &minuti);
		}
		if (secondi > 60) {
			scanf("%d", &secondi);
		}
		test.set(ore, minuti, secondi);
		test.gettime();
		break;
	}
	
	default:
		break;
	}
	Ora prova;
	prova = 21 + 14;
}