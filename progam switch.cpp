#include <iostream>

using namespace std;

int main()
{
	int angka;
	cout <<"masukan angka 1 sampai 5 untuk melihat bentuk romawi" << endl;
	cin >> angka;
	
	switch(angka){
		case 1:
		   cout <<"bentuk romawi dari" << angka << "adalah I";
		   break;
		case 2:
			cout <<"bentuk romawi dari"<<angka<< "adalah II";
			break;
		case 3:
			cout <<"bentuk romawi dari"<<angka<< "adalah III";
			break;
		case 4:
			cout <<"bentuk romawi dari"<<angka<< "adalah IV";
			break;
		case 5:
			cout <<"bentuk romawi dari"<<angka<< "adalah V";
			break;
		default:
			cout <<"pilihan hanya untuk 1 sampai 5"<< endl;
	}
		
	return 0;
}

