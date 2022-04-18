#include <iostream>
using namespace std;

// prosedur tampilan program
void tampilan(){
	cout << "Nama: Herni Suhartati " << endl;
	cout << "NIM : 2109106001" << endl;
    cout << endl;
    cout << "============================================================================================" << endl
    	<<  "---------------------------- POSTTEST 3 FUNGSI DAN PROSEDUR --------------------------------" << endl
     	<<  "----------------------------- Program Kalkulator Sederhana ---------------------------------" << endl
    	<<  "============================================================================================" << endl;
    cout << endl;	
}

// prosedur tampilan menu utama
void menu_utama(){
	cout <<  "======================" << endl
	 	<< 	 "     MENU UTAMA       " << endl
	   	<<   "======================" << endl
	 	<<   "[1] Penjumlahan" << endl
	 	<<   "[2] Pengurangan" << endl
		<<   "[3] Perkalian " << endl
		<<   "[4] Pembagian " << endl
		<<   "[5] Modulus " << endl;	
}

// fungsi overloading penjumlahan
int penjumlahan(int bil1, int bil2){
	return bil1 + bil2;
}
int penjumlahan(int bil1, int bil2, int bil3){
	return bil1 + bil2 + bil3;
}

// Fungsi overloading pengurangan
int pengurangan(int bil1, int bil2){
	return bil1 - bil2;
}
int pengurangan(int bil1, int bil2, int bil3){
	return bil1 - bil2 - bil3;
}

// fungsi overloading perkalian
int perkalian(int bil1, int bil2){
	return bil1 * bil2;
}
int perkalian(int bil1, int bil2, int bil3){
	return bil1 * bil2 * bil3;
}

// fungsi overloading pembagian
double pembagian(double bil1, double bil2){
	return bil1 / bil2;
}
double pembagian(double bil1, double bil2, double bil3){
	return bil1 / bil2 / bil3;
}

// fungsi overloading modulus
int mod(int bil1, int bil2){
	return bil1 % bil2;
}
int mod(int bil1, int bil2, int bil3){
	return bil1 % bil2 % bil3;
}

// fungsi utama
int main(){
	// deklarasi variavel
	int jumlah, menu, bil1, bil2, bil3;
	tampilan();
	// inputan untuk menentukan jumlah parameter
	cout << "Jumlah bilangan yang dimasukkan (2/3): " ; cin >> jumlah;
	cout << endl;
	switch (jumlah){
		//percabangan jika parameter = 2
		case 2:
			// user diminta untuk memasukkan 2 buah bilangan
			cout << "Bilangan 1: " ; cin >> bil1;
			cout << "Bilangan 2: " ; cin >> bil2;
			cout << endl;
			menu_utama();
			// inputan untuk memilih operator yang digunakan
			cout << "Masukkan pilihan anda: " ; cin >> menu;
			cout << endl;
			switch (menu){
				// percabangan jika memilih penjumlahan
				case 1:
					cout << "Hasil penjumlahan dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "========== +" << endl
						<<  "Total : "<< penjumlahan(bil1,bil2) << endl;
					break;
				// percabangan jika memilih pengurangan
				case 2:
					cout << "Hasil pengurangan dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "========== -" << endl
						<<  "Total : "<< pengurangan(bil1,bil2) << endl;
					break;
				// percabangan jika memilih perkalian
				case 3:
					cout << "Hasil perkalian dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "========== *" << endl
						<<  "Total : "<< perkalian(bil1,bil2) << endl;
					break;
				// percabangan jika memilih pembagian
				case 4:
					cout << "Hasil pembagian dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "========== /" << endl
						<<  "Total : "<< pembagian(bil1,bil2) << endl;
					break;
				// percabangan jika memilih modulus	
				case 5:
					cout << "Hasil modulus dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "========== %" << endl
						<<  "Total : "<< mod(bil1,bil2) << endl;
					break;
				default:
					cout << "Pilihan tidak ada" << endl;
			}
			break;
		// percabangan jika memilih 3 parameter
		case 3:
			// user diminta untuk memasukkan 3 buah bilangan
			cout << "Bilangan 1: " ; cin >> bil1;
			cout << "Bilangan 2: " ; cin >> bil2;
			cout << "Bilangan 3: " ; cin >> bil3;
			cout << endl;
			menu_utama();
			cout << "Masukkan pilihan anda: " ; cin >> menu;
			cout << endl;
			switch (menu){
				// percabangan jika memilih penjumlahan
				case 1:
					cout << "Hasil penjumlahan dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "Bilangan 3 = " << bil3 << endl
						<<  "========== +" << endl
						<<  "Total : "<< penjumlahan(bil1,bil2,bil3) << endl;
					break;
				// percabangan jika memilih pengurangan
				case 2:
					cout << "Hasil pengurangan dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "Bilangan 3 = " << bil3 << endl
						<<  "========== -" << endl
						<<  "Total : "<< pengurangan(bil1,bil2,bil3) << endl;
					break;
				// percabangan jika memilih perkalian
				case 3:
					cout << "Hasil perkalian dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "Bilangan 3 = " << bil3 << endl
						<<  "========== *" << endl
						<<  "Total : "<< perkalian(bil1,bil2,bil3) << endl;
					break;
				// percabangan jika memilih pembagian
				case 4:
					cout << "Hasil pembagian dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "Bilangan 3 = " << bil3 << endl
						<<  "========== /" << endl
						<<  "Total : "<< pembagian(bil1,bil2,bil3) << endl;
					break;	
				// percabangan jika memilih modulus
				case 5:
					cout << "Hasil modulus dari:"<<endl
						<<  "Bilangan 1 = " << bil1 << endl
						<<  "Bilangan 2 = " << bil2 << endl
						<<  "Bilangan 3 = " << bil3 << endl
						<<  "========== %" << endl
						<<  "Total : "<< mod(bil1,bil2,bil3) << endl;
	
					break;
				default:
					cout << "Pilihan tidak ada" << endl;			
			}
		default:
			cout << "Terima kasih" << endl;	
	}
	
}

