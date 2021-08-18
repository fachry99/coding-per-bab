#include <iostream>
using namespace std;

int main()
{
	int y, z, data;
	kembali:
	cout <<"masukan sandi anda : ";
	cin>> data;
	if (data==1212){
		goto masuk;
	}
	else
	cout<< endl;
	cout << "sandi yang anda masukkan salah \n";
	goto kembali;
	
	masuk:
	cout<< endl;
	cout<<"hello selamat datang ";
	
	return 0;
	
}
