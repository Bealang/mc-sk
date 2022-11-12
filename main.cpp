#include <iostream>
#include <windows.h>
#include <conio.h>
#include <shellapi.h>
using namespace std;
void otwieranie_sk()
{
	char sel;
	system("COLOR 0B");
	system("cls");
	cout<<" POBIERANIE SKRYPTOW"										<<endl;
	cout<<" Wpisz numerek, odpowiadajacy skryptowi!"					<<endl;
	cout<<"-------------------"											<<endl;
	cout<<" 1 - Skrypt na ogloszenia"									<<endl;
	cout<<" 2 - Skrypt na statystyki"									<<endl;
	cout<<" 3 - Skrypt na afk"											<<endl;
	cout<<" 4 - Skrypt na adminchat"									<<endl;
	cout<<" 5 - Skrypt na chat on/off/clear"							<<endl;
	cout<<" 6 - Skrypt na komendy po kliknieciu na tabliczke"			<<endl;
	cout<<" 7 - Skrypt na /repair i /repair all"						<<endl;
	cout<<" 8 - Skrypt na znikanie blokow minute po postawieniu"		<<endl;
	cout<<" -------------------"										<<endl;
	cout<<" Wcisnij P, aby uzyskac pomoc"								<<endl;
	cout<<" Wybor: ";
	sel = getch();
	switch (sel)
	{
		case 'P':
		case 'p':
			system ("cls");
			cout<<"JAK WGRAC SKRYPT? PORADNIK"													         <<endl;
			cout<<"----------------------------"													     <<endl;
			cout<<"1. Pobierz Skript https://github.com/SkriptLang/Skript/releases"					     <<endl;
			cout<<"2. Zrestartuj serwer i go wlacz"													     <<endl;
			cout<<"3. Odswiez swoje FTP. (Zielona ikonka nad plikami w WinSCP)"						     <<endl;
			cout<<"4. Otworz folder /plugins/skript/scripts/"										     <<endl;
			cout<<"5. Stworz plik z rozszerzeniem .sk (np. rtp.sk)"									     <<endl;
			cout<<"6. Otworz plik notatnikiem, notepad++, vsc czy innym edytorem tekstu"			     <<endl;
			cout<<"7. Wklej zawartosc skryptu lub stworz swoj (poradnik: https://youtu.be/xphlN2sI09Y)"  <<endl;
			cout<<"8. Po wklejeniu kodu do pliku zapisz plik skrotem CTRL + S"                           <<endl;
			cout<<"9. Przejdz do Minecrafta i wpisz komende: /sk reload plik.sk (np /sk reload rtp.sk)"  <<endl;
			cout<<"10. Ciesz sie wgranym skryptem :)"                                                    <<endl;
			getch();
		break;
		case '1': 
			ShellExecute(0, 0, "https://code.skript.pl/CHWj7m2D", 0, 0 ,   SW_SHOW );      break;
		case '2':    
			ShellExecute(0, 0, "https://code.skript.pl/GSuLDwGK", 0, 0 ,   SW_SHOW );      break;
		case '3':    
			ShellExecute(0, 0, "https://code.skript.pl/pGbRbwp5", 0, 0 ,   SW_SHOW );      break;
		case '4':    
			ShellExecute(0, 0, "https://pastebin.com/raw/P4uHH3kg", 0, 0 , SW_SHOW );    break;
		case '5':    
			ShellExecute(0, 0, "https://code.skript.pl/qIw06wuC", 0, 0 ,   SW_SHOW );      break;
		case '6':    
			ShellExecute(0, 0, "https://code.skript.pl/8RyfC8k7", 0, 0 ,   SW_SHOW );      break;
		case '7':    
			ShellExecute(0, 0, "https://code.skript.pl/cQhFNfSb", 0, 0 ,   SW_SHOW );      break;
		case '8':    
			ShellExecute(0, 0, "https://code.skript.pl/4rECpVSr", 0, 0 ,   SW_SHOW );      break;
		case '9':    
			ShellExecute(0, 0, "https://code.skript.pl/o63TmOos", 0, 0 ,   SW_SHOW );      break;
		default:
			cout<<"Niepoprawny skrypt."<<endl;
	}
}
int main() 
{
	for (;;) {otwieranie_sk();}
	getchar(); getchar();
}
