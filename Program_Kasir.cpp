#include <iostream>
#include <cstdio>
using namespace std;
int main() {
		int p,b,c,kk,s,t,hb,hc,hkk,hs,ht,th,jp,kem;
		char ulg;
		do {
		cout<<"  KASIR TOKO SUMBER SUTERA"<<endl;
		cout<<" --------------------------"<<endl;
		cout<<"	Menu : "<<endl;
		cout<<"	1. Member "<<endl;
		cout<<"	2. Non member "<<endl;
		cout<<" --------------------------"<<endl;
		cout<<" Pilihan : ";
		cin>>p;
		cout<<endl;
		if(p==1||p==2){
		cout<<" Jumlah pembelian produk : "<<endl;
		cout<<" - Celana 	: ";
		cin>>c;
		cout<<" - Baju		: ";
		cin>>b;
		cout<<" - Kaos kaki 	: ";
		cin>>kk;
		cout<<" - Sepatu 	: ";
		cin>>s;
		cout<<" - Topi		: ";
		cin>>t;
		hb = b * 50000;
		if(hb>=1000000){
			hb = hb * 75 / 100;
		}
		else if(hb>=500000){
			hb = hb * 80 / 100;
		}
		else if(b>=5){
			hb = hb * 85 / 100;
		}
		hc = c * 100000;
		if(hc>=1000000){
			hc = hc * 75 / 100;
		}
		else if(hc>=500000){
			hc = hc * 80 / 100;
		}
		else if(c>=4){
			hc = hc * 90 / 100;
		}
		hkk = kk * 15000;
		if(hkk>=1000000){
			hkk = hkk * 75 / 100;
		}
		else if(hkk>=500000){
			hkk = hkk * 80 / 100;
		}
		else if(kk>=7){
			hkk = hkk * 75 / 100;
		}
		hs = s * 200000;
		if(hs>=1000000){
			hs = hs * 75 / 100;
		}
		else if(s>=3){
			hs = hs * 80 / 100;
		}
		ht = t * 20000;
		if(ht>=1000000){
			ht = ht * 75 / 100;
		}
		else if(ht>=500000){
			ht = ht * 80 / 100;
		}
		cout<<" Harga baju 		: "<<hb<<endl;
		cout<<" Harga celana		: "<<hc<<endl;
		cout<<" Harga kaos kaki 	: "<<hkk<<endl;
		cout<<" Harga sepatu 		: "<<hs<<endl;
		cout<<" Harga topi 		: "<<ht<<endl;
		cout<<" ------------------------------------------------------------"<<endl;
		if(p==1){
		th = (hb + hc + hkk + hs + ht) * 90 / 100;
		cout<<" Total Harga (Sudah termasuk diskon member 10%) : "<<th<<endl;
		}
		else if(p==2){
		th = hb + hc + hkk + hs + ht;
		cout<<" Total Harga : "<<th<<endl;	
		}
		cout<<" Jumlah Pembayaran : ";
		cin>>jp;
		kem = jp - th;
		cout<<" Jumlah Kembalian : "<<kem<<endl;
		}
		else {
			cout<<" Pilihan tidak tersedia..."<<endl<<endl;
		}
		cout<<" Input ulang data? (y/t) : ";
		cin>>ulg;
		cout<<endl;
		}
		while(ulg=='y'||ulg=='Y');
		cout<<"Ketik apapun untuk keluar..."<<endl;
		std::getchar();
}
