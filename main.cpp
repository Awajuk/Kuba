#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdio>
#include <algorithm>
#include <numeric>

using namespace std;
float suma=0, srednia;
int a;
double b;
double i;
double c;

int main(void)
{
    string nazwa;
    vector<double> liczby;
    cout << "Podaj nazwe pliku wraz z rozszerzeniem *.txt: "<<endl;
    cin >> nazwa;
    ifstream plik(nazwa.c_str());

    if( plik.good() == false )
        cout << "Blad!!!" << endl;
    else
    {
       string s;
       while(plik >> s)
       {
            replace(s.begin(), s.end(), ',', '.');
            double f = atof(s.c_str());
            liczby.push_back(f);
            a = liczby.size();


        }
        for(i=0; i<=a; i++){
                b+= liczby[i];

        }
        cout << "Ilosc liczb w pliku: ";
cout << a << endl<<endl;
cout << "Suma wszystkich liczb wynosi: ";
cout << b << endl<<endl;
cout << "srednia artymetyczna wynosi: ";
c = b/a;
cout << c<< endl<<endl;

    }

    return 0;
}
