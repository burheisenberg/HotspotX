#include <iostream>
//#include <conio.h>
//#include <stdio.h>
#include <windows.h>
//#include <locale.h>
//#include <string.h>
using namespace std;

main () {
		
	setlocale(LC_ALL,"Turkish") ;								//bu sat�r TR karakter deste�i i�in yetiyor.
	SetConsoleTitle(" HotspotX ver-1.2 alpha") ;
	
	eng:
	system("color 80");
 	char x,i;
 	system("cls");
 	cout << "*************************************************" << endl ;
 	cout << "*          vScholaCraze Edition [ vSCE ]        *" << endl ;
	cout << "*                                               *" << endl ;
	cout << "*          HotspotX        ver-1.2 alpha        *" << endl ;
	cout << "*************************************************" << endl << endl ;
	cout << "        ---------------------------------\n" ;
	cout << "        -     Choose Your Process...    -\n" ;
	cout << "        ---------------------------------\n\n" ;
	cout << "         *******************************\n" ;
	cout << "         *   Start Hostednetwork [ s ] *\n";
	cout << "         *   Stop Hostednetwork  [ c ] *\n";
	cout << "         *   Set Hostednetwork   [ a ] *\n";
	cout << "         *   IP Config           [ i ] *\n";
	cout << "         *   Flush DNS           [ f ] *\n";
	cout << "         *   Change Language     [ l ] *\n";   
	//cout << "         *   Info                [ i ] *\n";
	cout << "         *   Exit                [ x ] *\n" ;
	cout << "         *******************************\n\n" ;
	cout << "        ---------------------------------\n" ;
	cout << "          your choice: " ;
	cin >> x ;
	
	switch (x) {
		
		case 's': {
			
			system("netsh wlan start hostednetwork");
			Sleep(3000);
			system("cls");
			goto eng;
			break;
		}
		
		case 'c': {
			
			system("netsh wlan stop hostednetwork");
			Sleep(3000);
			system("cls");
			goto eng;
			break;
		}
		
	/*	case 'i': {
			
			system("cls");
			
 	cout << "*************************************************" << endl ;
 	cout << "*              Default     Settings             *" << endl ;
	cout << "*                Wi-Fi SSID: BiyoLab            *" << endl ;
	cout << "*            Wi-Fi Password: badeanzux          *" << endl ;
	cout << "*************************************************" << endl << endl ;
	cout << "\tpress any key..." ;
	getch () ;
			system("cls");
			goto eng;
			break;
		}*/
		
		case 'i': {
			
			system("ipconfig");
			Sleep(3000);
			system("cls");
			goto eng;
			break;
		}
	
			case 'l': {
			
			system("cls");
			cout << "\n\n\tT�rk�e'ye ge�iliyor.";
			Sleep(200);
			system("cls");
			cout << "\n\n\tT�rk�e'ye ge�iliyor..";
			Sleep(200);
			system("cls");
			cout << "\n\n\tT�rk�e'ye ge�iliyor...";
			Sleep(200);
			system("cls");
			cout << "\n\n\tT�rk�e'ye ge�iliyor";
			Sleep(200);
			system("cls");
			goto tr;
			break;
		}
		
		case 'f': {
			
			system("ipconfig /flushdns");
			Sleep(3000);
			system("cls");
			goto eng;
			break;
		}
		
		case 'a': {
			
			string ssid1,key1;
			
			cout << "enter your SSID: " ;
			cin >> ssid1;
			
			cout << "enter your key: " ;
			cin >> key1;
			string cmd("netsh wlan set hostednetwork ssid=");
			cmd += ssid1;
			cmd += "  key=";
			cmd += key1;
			cmd += " keyUsage=persistent";
			system(cmd.c_str());
			Sleep(3000);
			system("cls");
			goto eng;
			break;
		}
		case 'x': {
			goto exit;
			break;
		}
		
		default: {
			
			system("cls") ;
			goto eng;
			break;
		}
	}
	
	tr:
	system("cls");
 	cout << "*************************************************" << endl ;
 	cout << "*          vScholaCraze Edition [ vSCE ]        *" << endl ;
	cout << "*                                               *" << endl ;
	cout << "*          HotspotX        ver-1.2 alpha        *" << endl ;
	cout << "*************************************************" << endl << endl ;
	cout << "        ---------------------------------\n" ;
	cout << "        -   Herhangi Bir ��lemi Se�...  -\n" ;
	cout << "        ---------------------------------\n\n" ;
	cout << "         *******************************\n" ;
	cout << "         *   A�� Ba�lat          [ s ] *\n";
	cout << "         *   A�� durdur          [ c ] *\n";
	cout << "         *   A�� ayarla          [ a ] *\n";
	cout << "         *   IP Yap�s�n� g�ster  [ i ] *\n";
	cout << "         *   DNS temizle         [ f ] *\n";
	cout << "         *   Dili De�i�tir       [ l ] *\n";   
	//cout << "         *   Info                [ i ] *\n";
	cout << "         *   ��k��               [ x ] *\n" ;
	cout << "         *******************************\n\n" ;
	cout << "        ---------------------------------\n" ;
	cout << "          Se�imin: " ;
	cin >> x ;
	
	switch (x) {
		
		case 's': {
			
			system("netsh wlan start hostednetwork");
			Sleep(3000);
			system("cls");
			goto tr;
			break;
		}
		
		case 'c': {
			
			system("netsh wlan stop hostednetwork");
			Sleep(3000);
			system("cls");
			goto tr;
			break;
		}
		
	/*	case 'i': {
			
			system("cls");
			
 	cout << "*************************************************" << endl ;
 	cout << "*              Default     Settings             *" << endl ;
	cout << "*                Wi-Fi SSID: BiyoLab            *" << endl ;
	cout << "*            Wi-Fi Password: badeanzux          *" << endl ;
	cout << "*************************************************" << endl << endl ;
	cout << "\tpress any key..." ;
	getch () ;
			system("cls");
			goto eng;
			break;
		}*/
		
		case 'i': {
			
			system("ipconfig");
			Sleep(3000);
			system("cls");
			goto tr;
			break;
		}
	
			case 'l': {
			
			system("cls");
			cout << "\n\n\tPassing to English.";
			Sleep(200);
			system("cls");
			cout << "\n\n\tPassing to English..";
			Sleep(200);
			system("cls");
			cout << "\n\n\tPassing to English...";
			Sleep(200);
			system("cls");
			cout << "\n\n\tPassing to English";
			Sleep(200);
			system("cls");
			goto eng;
			break;
		}
		
		case 'f': {
			
			system("ipconfig /flushdns");
			Sleep(3000);
			system("cls");
			goto tr;
			break;
		}
		
		case 'a': {
			
			string ssid1,key1;
			
			cout << "A� ad�n� gir: " ;
			cin >> ssid1;
			
			cout << "A� anahtar�n� gir: " ;
			cin >> key1;
			string cmd("netsh wlan set hostednetwork ssid=");
			cmd += ssid1;
			cmd += "  key=";
			cmd += key1;
			cmd += " keyUsage=persistent";
			system(cmd.c_str());
			Sleep(3000);
			system("cls");
			goto tr;
			break;
		}
		case 'x': {
			goto exit;
			break;
		}
		
		default: {
			
			system("cls") ;
			goto tr;
			break;
		}
	}
	
	exit:
		system("exit") ;
	
}

