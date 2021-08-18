#include <iostream>
using namespace std;

int main()
{
        char kodeBuku,buku;
       	float totalByr,jumlahBeli,harga,hargabuku;
     	kembali:
        	cout <<endl;
        	cout <<"==============================" << endl;
        	cout <<"     Fachry's BOOK STORE      " << endl;
	        cout <<"==============================" << endl;
	        cout <<" Pilih buku 1 - 3 : ";cin>>kodeBuku;
        	cout <<" Jumlah pembelian : ";cin>>jumlahBeli;cout<<endl;
	
	        cout <<" Nama Buku        :  "<<buku;
 	        switch (kodeBuku)
         	{
	        	case ('1'):
		        	{
			        cout <<"Belajar algoritma dasar"<<buku;
			        hargabuku= 40000;
			        harga= 40000*jumlahBeli;
		            }
		            break;
	            case ('2'):
	    	        {
	    		    cout<<" Belajar dasar hidup"<<buku;
	    		    hargabuku= 60000;
	    		    harga = 60000*jumlahBeli;
			        }
			        break;
		        case ('3'):
		        	{
			    	cout<<" Belajar Ilmu Ekonomi"<<buku;
				    hargabuku= 35000;
				    harga= 35000*jumlahBeli;
		        	}
			        break;
			
			}
	   cout<<endl;
	   
	   cout<<" Jumlah Buku         : "<<jumlahBeli<<endl;
	   cout<<" Harga Buku          : "<<hargabuku<<endl;
	   cout<<" Total Harga Buku    : "<<harga<<endl;
	   totalByr= harga;
	   cout<<"=========================="<<endl;
	   cout<<" Total Bayar          : Rp."<<totalByr<<endl;
return 0;
}
