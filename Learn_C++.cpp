#include <iostream>
using namespace std;


int sifaris;
int davam = 1;
int yekun = 0;

int main()
{
	while (davam == 1) {
		cout << "Restorana Xos Geldiniz! \n";
		cout << "\nMenu:\n1. Su (10 TL)\n2. Corek (15 TL)\n3. Salat (20 TL)\n";
		cout << "Sifarisinizi secin (1-3): ";
		cin >> sifaris;

        switch (sifaris) {
        case 1:
            cout << "Su secildi (10 TL)\n";
            yekun += 10;
            break;
        case 2:
            cout << "Corek secildi (15 TL)\n";
            yekun += 15;
            break;
        case 3:
            cout << "Salat secildi (20 TL)\n";
            yekun += 20;
            break;
        default:
            cout << "Yanlis secim! Lutfen 1-3 arasinda secin.\n";
            continue; // səhv seçimdirsə davam soruşmadan növbəti dövrəyə keç
        }  cout << "Basqa sifaris elave etmek isteyirsiniz? (1 = Hə, 0 = Xeyr): ";
        cin >> davam;
    }

    cout << "\nSifarisiniz tamamlandi.\n";
    cout << "Yekun hesab: " << yekun << " TL\n";
    cout << "Təşəkkür edirik! Yaxşı iştah!\n";

    return 0;
}
