#include <iostream>
#include <cstdlib>
using namespace std;

float srednia(float *wsk_flo, int rozmiar ){
float suma = 0;
for (int i = 0; i < rozmiar; i++) suma += *wsk_flo++;  
return  suma / rozmiar; 
}

void wczytaj (float *wsk_flo, int rozmiar){
	for (int i = 0; i < rozmiar; i++){
    cout << "\n\tOcena nr " << i + 1 << ": ";
    cin >> wsk_flo[i]; 
}
}


int main(int argc, char *argv[]) {
cout << "Program sluzy do obliczania sredniej ocen.\n";
cout << "\nIle ocen podasz?: ";

int ile;
cin >> ile; 

float *wsk_tab = new float [ile];
for (int i = 0; i < ile; i++){
    cout << "\n\tOcena nr " << i + 1 << ": ";
    cin >> wsk_tab[i]; 
    } 
float suma = 0;
for (int i = 0; i < ile; i++) suma += wsk_tab[i];   


cout << "\nSrednia podanych ocen to " << srednia(wsk_tab, ile) << endl; 
delete[] wsk_tab; wsk_tab = NULL; 
cout << endl; system("pause"); 

return 0;
}
