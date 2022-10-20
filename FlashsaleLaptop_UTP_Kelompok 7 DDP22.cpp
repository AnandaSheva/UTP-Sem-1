/*Anggota Kelompok 7 :
1. Ananda Sheva Hidayat (2217051096)
2. Dede Juniar Putra (2217051015)
3. Farid Sidhiq (2257051028)
*/

#include <iostream>
using namespace std;

//Deklarasi variabel
int jumlah; 
int total(){
	int a = jumlah;
}
//fungsi header untuk menampilkan header
void header(){
	cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout <<"||\t\t\t\t\t                      \t\t\t\t\t||"<<endl;
	cout <<"||\t\t\t\t\tWELCOME TO DFS COM STORE \t\t\t\t||"<<endl;
	cout <<"||\t\t\t\t\t                      \t\t\t\t\t||"<<endl;
	cout <<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl; 
}

//fungsi pilih_laptop sebagai output pilihan laptop
void pilih_laptop(){
	cout <<"Laptop yang kamu ambil \t\t : ";
}
//fungsi closeHeader untuk menampilkan closeHeader
void closeHeader(){
	cout <<"=========================================================="<<endl;
	cout <<"||\tTERIMA KASIH SUDAH BERBELANJA DI TOKO KAMI\t||"<<endl;
	cout <<"||\t\t   HAVE A NICE DAY ^_^\t\t\t||"<<endl;
	cout <<"=========================================================="<<endl<<endl;
}

//Deklarasi variabel
int main (){
	string nama, merklaptop, yes;
	int jml, kodelaptop;
	int harga[10], bayar, minus, kurang;

//looping dengan do 
//menambahkan syntax sistem pembersih layar (CLS)
//syntax sistem color	
	do {
	system("CLS");
	system("COLOR 06");	
	header (); 
	cout <<endl; 
	
//membuat list barang laptop yang akan di flashsale
	cout << "BERIKUT ADALAH 10 LAPTOP YANG AKAN DI FLASHSALE PADA 11/11 :"<<endl; 
	cout <<endl;
	cout << "1.  Lenovo Ideapad Slim 3i 4/256GB\tONLY!!!\t Rp.5.999.000" <<endl;
	cout << "2.  Dell Inspiron 3511 4/256GB \t\tONLY!!!\t Rp.6.499.000"<<endl;
	cout << "3.  Asus Vivobook 14 4/256GB \t\tONLY!!!\t Rp.6.799.000" <<endl;
	cout << "4.  HP 14s-FQ0020AU 8/512GB \t\tONLY!!!\t Rp.7.199.000"<<endl; 
	cout << "5.  Lenovo Ideapad S340 8/512GB \tONLY!!!\t Rp.7.599.000" <<endl;
	cout << "6.  Acer Aspire Slim 5 8/512GB \t\tONLY!!!\t Rp.7.999.000"<<endl;
	cout << "7.  Asus Vivobook Ultra 15 8/256GB \tONLY!!!\t Rp.8.299.000"<<endl;
	cout << "8.  MSI Modern 14 8/512GB \t\tONLY!!!\t Rp.8.799.000"<<endl;
	cout << "9.  HP Pavilion 8/512GB \t\tONLY!!!\t Rp.9.499.000"<<endl;
	cout << "10. Acer Nitro 5 8/512GB \t\tONLY!!!\t Rp.9.999.000"<<endl<<endl;
	cout << "NOTED : HARGA SUDAH TERMASUK PAJAK!"<<endl;
	cout <<endl;
	cout << "Username Customer\t : "; getline(cin.ignore(), nama);
	cout << "Jumlah Pembelian\t : "; cin >> jml;
	cout <<endl;
	
//looping dengan for 
	for (int i=1; i<=jml; i++){
			cout << "Pilihan Laptop ke - " << i <<endl; 
			cout << "Opsi ((1)(2)(3)(4)(5)(6)(7)(8)(9)(10)) : "; cin >> kodelaptop;
			cout<<endl;
//percabangan pernyataan yang akan dieksekusi
		if (kodelaptop == 1){
			pilih_laptop(); cout << "Lenovo Ideapad Slim 3i 4/256GB"<<endl;
			harga[i]=5999000;
		} else if (kodelaptop == 2){
			pilih_laptop(); cout << "Dell Inspiron 3511 4/256GB"<<endl;
			harga[i]=6499000;
		} else if (kodelaptop == 3){
			pilih_laptop(); cout << "Asus Vivobook 14 4/256GB"<<endl; 
			harga[i]=6799000;
		} else if (kodelaptop == 4){
			pilih_laptop(); cout << "HP 14s-FQ0020AU 8/512GB"<<endl; 
			harga[i]=7199000;
		} else if (kodelaptop == 5){
			pilih_laptop(); cout << "Lenovo Ideapad S340 8/512GB"<<endl; 
			harga[i]=7599000;
		}  else if (kodelaptop == 6){
			pilih_laptop(); cout << "Acer Aspire Slim 5 8/512GB"<<endl; 
			harga[i]=7999000;
		}	else if (kodelaptop == 7){
			pilih_laptop(); cout << "Asus Vivobook Ultra 15 8/256GB"<<endl; 
			harga[i]=8299000;
		}	else if (kodelaptop == 8){
			pilih_laptop(); cout << "MSI Modern 14 8/512GB"<<endl; 
			harga[i]=8799000;
		}	else if (kodelaptop == 9){
			pilih_laptop(); cout << "HP Pavilion 8/512GB"<<endl; 
			harga[i]=9499000;
		}	else if (kodelaptop == 10){
			pilih_laptop(); cout << "Acer Nitro 5 8/512GB"<<endl; 
			harga[i]=9999000;
		}	else {
			cout << "Opsi yang anda masukkan tidak valid" <<endl;
			harga[i]=0;
		}
		jumlah += harga[i];
	}
//melakukan pembayaran	
	cout <<endl; 
	cout << "Total Pembayaran\t\t\t\t : " << "Rp. " << total() <<endl; 
	cout << "Bayar\t\t\t\t\t\t : " << "Rp. "; cin >> bayar;
//looping dengan while
	while (bayar < total())
	{
		minus = total() - bayar;
		cout << "Uang anda tidak cukup! Silahkan bayar kembali\t : Rp. " << minus << endl;
		cout << "Bayar Kembali!\t\t\t\t\t : " << "Rp. "; cin >> kurang;
		bayar += kurang;
	}
		cout << "Kembali\t\t\t\t\t\t : " << "Rp. " << bayar - total() <<endl; 
		cout <<endl;
		cout << "Ingin Membeli lagi? [Y/T]\t\t\t : "; cin >> yes; 
		cout <<endl;
		jumlah = 0;
	}
	while (yes == "Y" || yes == "y");
	cout <<endl; 
	closeHeader();
	
	return 0; 
}
