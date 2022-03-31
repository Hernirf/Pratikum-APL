#include <iostream>
using namespace std;

// fungsi utama
int main()
{
	// Display user
	cout << "Nama: Herni Suhartati " << endl;
	cout << "NIM : 2109106001" << endl;
    cout << endl;
    cout << "============================================================================================" << endl;
    cout << "----------------------------POSTTEST 2 ALGORITMA PEMROGRAMAN DASAR -------------------------" << endl;
    cout << "----------------------Menampilkan Matriks 5x5 dan Alamatnya dengan Pointer -----------------" << endl;
    cout << "============================================================================================" << endl;
    cout << endl;
    cout << "Rumus yang digunakan : ((1x+5y)10)/5" << endl;
    cout << endl;
    
    // Deklarasi tipe data
	int herni_01[5][5];
	int a, b, x, y;
	
	// Perulangan nilai matriks
	for(a=0; a<5; a++)
	{
		for(b=0; b<5; b++)
		{
			x = a;
			y = b;
			herni_01[a][b] = ((1*x+5*y)*10)/5;
		}
	}
	// Deklarasi tipe data pointer
	int *ptr;
	ptr= &herni_01[0][0];
	
	//Perulangan menampilkan matriks dengan pointer
	cout << " ========================== " << endl;
	cout << " ---Tampilan Matriks 5x5--- " << endl;
	cout << " ========================== " << endl;
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5; b++){
			cout <<" " << *ptr << " ";
			ptr++;
		}
		cout << endl;
	}
	// Perulangan menampilkan alamat dari matriks dengan pointer
	cout << endl;
	cout << " ================================= " << endl;
	cout << " ---Tampilan Alamat Matriks 5x5--- " << endl;
	cout << " ================================= " << endl;
	for(int a=0; a<5; a++)
	{
		for(int b=0; b<5; b++){
			cout <<" " << ptr << " ";
			ptr++;
		}
		cout << endl;
	}
	return 0;	
}
