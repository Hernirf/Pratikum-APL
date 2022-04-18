
// Library yang digunakan dalam membuat program
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// Struct data loker
struct data{
	int nomor;
	string nama;
	string barang;
	string nomorHP;
	string tanggal;
}; 


// deklarasi dari struct
data loker[100];
int a;

// Prosedur untuk tampilan judul kodingan
void tampilan(){
	cout << "Nama: Herni Suhartati " << endl;
	cout << "NIM : 2109106001" << endl;
    cout << endl;
    cout << "============================================================================================" << endl
    	<<  "----------------------------------- POSTTEST 4 STRUCT --------------------------------------" << endl
     	<<  "----------------------------- Program Manajemen Data Loker ---------------------------------" << endl
    	<<  "============================================================================================" << endl;
    cout << endl;	
}

// Prosedur untuk tampilan menu manajemen
void menu_utama(){
	cout <<  "======================" << endl
	 	<< 	 "     MENU MANAJEMEN   " << endl
	   	<<   "======================" << endl
	 	<<   "[1] Lihat Data 		" << endl
	 	<<   "[2] Tambah Data		" << endl
		<<   "[3] Ubah Data 		" << endl
		<<   "[4] Hapus Data 		" << endl
		<<   "[5] Keluar Program 	" << endl;
}

// Prosedur untuk menambahkan data loker
void menambahkan(){
	system("cls");
	int jumlah;
	cout << "Jumlah data yang ingin ditambahkan: "; cin >> jumlah;
	cout << endl;
	for (int i=0; i<jumlah; i++){
		cout << "Masukkan nama		             	" << ": "; fflush(stdin);
		getline(cin, loker[a].nama);
		cout << "Masukkan nama barang  yang dititip	" << ": "; cin >> loker[a].barang;
		cout << "Masukkan nomor HP  \t\t\t: "; cin >> loker[a].nomorHP;
		cout << "Masukkan tanggal (DD-MM-YY)		" << ": "; cin >> loker[a].tanggal; cout <<"\n";
		a++;
	}
}

// Prosedur untuk menampilkan data loker
void menampilkan(){
	system("cls");
	if (a==0)
	{
		cout << "Data loker tidak ada "; getch();
	}
	else if (a>0)
	{
		for (int i=0; i<a; i++){
				loker[i].nomor=i+1;
				cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
					<< "\nNama        			" << ": "<< loker[i].nama
					<< "\nNama Barang 			" << ": "<< loker[i].barang
					<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
					<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n"; 
		}
	}	getch();
}

// Prosedur untuk mengubah data loker
void ubah_data(){
	system("cls");
	if (a==0){
		cout << "Tidak ada data yang bisa diubah "; getch();
	}
	else {
		menampilkan();
		int nomor_ubah;
		cout << "\nMasukkan nomor loker data yang ingin diubah: "; cin >> nomor_ubah;
		system("cls");
		int indeks=nomor_ubah-1;
		cout << "Masukkan nama		             	" << ": "; fflush(stdin); getline(cin, loker[indeks].nama);
		cout << "Masukkan nama barang  yang dititip	" << ": "; cin >> loker[indeks].barang;
		cout << "Masukkan nomor HP  \t\t\t: "; cin >> loker[indeks].nomorHP;
		cout << "Masukkan tanggal (DD-MM-YY)		" << ": "; cin >> loker[indeks].tanggal; cout <<"\n";	
	}	
}

// prosedur untuk menghapus data loker
void hapus_data(){
	system("cls");
	if (a==0){
		cout << "Tidak ada data yang bisa dihapus "; getch();
	}
	else{
		int nomor_ubah;
		char pilih;
		if (a==1){
			system("cls");
			menampilkan();
			cout << "\nApakah ingin menghapus data? (y/t) "; cin >> pilih;
			switch (pilih){
				case 'y':
					loker[a]=loker[a+1];
					cout << "\nData berhasil terhapus "; getch();
					a--;
					break;
				case 't':
					cout << "Data tidak terhapus "; getch();
					break;
			} 
		}
		else {
			system("cls");
			menampilkan();
			cout << "\nMasukkan nomor loker data yang ingin diubah: "; cin >> nomor_ubah;
			int indeks=nomor_ubah-1;
			for (int i=indeks; i<a; i++){
				cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
					<< "\nNama        			" << ": "<< loker[i].nama
					<< "\nNama Barang 			" << ": "<< loker[i].barang
					<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
					<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n"; 
				cout << "\nApakah ingin menghapus data? (y/t) "; cin >> pilih;
				a--;
				switch (pilih){
					case 'y':
						loker[i]=loker[i+1];
						cout << "\nData berhasil terhapus "; getch();
						break;
					case 't':
						cout << "Data tidak terhapus "; getch();
						break;
				}	
			}		
		}		
	}	
}

// prosedur untuk keluar program
void keluar(){
	system("cls");
	cout << "Anda telah keluar dari program "; getch();
}

//fungsi utama program
int main(){
	int pilih;
	awal:
		system("cls");
		tampilan();
		menu_utama();
  		cout<<"\n\nMasukkan Pilihan : ";
		cin >> pilih;
		switch(pilih){
			case 1:
				{menampilkan();goto awal;} // kondisi jika user memilih untuk menampilkan data
			case 2:
				{menambahkan();goto awal;} // kondisi jika user memilih untuk menambahkan data
			case 3:
				{ubah_data();goto awal;} // kondisi jika user  memilih untuk ubah data
			case 4:
				{hapus_data(); goto awal;} // kondisi jika user memilih untuk hapus data
			case 5:
				keluar(); // kondisi jika user memilih untuk keluar program
				break;
			default:
				{goto awal;}

		}		
}
