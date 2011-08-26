#include <iostream>


//-------Deklaracia Funkcii------//
void ZistenieVyberu(long int cislo);



using namespace std;

int main()
{

	unsigned short int cislo; //premenna kde sa ulozi vybrate cislo

	cout << "Welcome, Please Select Number: " << endl;
	cout << "1 - pre scitanie" << endl;
	cout << "2 - pre odcitanie" << endl << endl;

	cout << "Cislo: ";
	cin >> cislo;
	
	ZistenieVyberu(cislo);//Volanie Funkcie na zistenie cisla aby sa mohlo porovnaù


	return 0;

}


void ZistenieVyberu(long int cislo)
{

long int prve,druhe;


	if(cislo == 1)
	{
		long int vysledok;

		cout << "Ste v menu pre scitanie !!" << endl;
		cout << "Zadajte prosim prve cislo: ";
		cin >> prve;

		cout << "Zadajte prosim druhe cislo: ";
		cin >> druhe;

		vysledok = (prve + druhe);

		cout << "Vysledok vasho scitania je: " << vysledok << endl;
			


	}
	else
	if(cislo == 2)
	{
	   long int vysledok;

		cout << "Ste v menu pre scitanie !!" << endl;
		cout << "Zadajte prosim prve cislo: ";
		cin >> prve;

		cout << "Zadajte prosim druhe cislo: ";
		cin >> druhe;
		vysledok = (prve - druhe);	

		cout << "Vysledok vasho odcitania je: " << vysledok << endl;
	
	}
	else
	if(cislo > 3)
	{
		cout << "Zadali ste nespravnu hodnotu !!!" << endl;
	}





}