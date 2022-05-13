// Library yang digunakan dalam membuat program
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

// Struct data loker
struct data_loker{
	int nomor;
	string nama;
	string barang;
	string nomorHP;
	string tanggal;
}; 

// deklarasi dari struct
data_loker loker[100]={{1,"Herni","Helm","082255966424","13-05-2022"},{2,"Daus","Tas","082255966424","12-05-2022"},{3,"Herni","Tas","082255966424","11-05-2022"}};
int ukuran=3;

// Prosedur sort atribut nama dengan metode bubblesort
void bubble(data_loker loker[], int ukuran){
	int j, pilih;
	data_loker swap;
	cout << "1. Ascending" << endl
		<< "2. Descending" << endl
		<< "Pengurutan berdasarkan: "; 
	cin >> pilih;
	switch (pilih){
		case 1:
			for (int i=0; i<ukuran-1; i++){
				for(j=0; j<ukuran-1; j++){
					if(loker[j].nama>loker[j+1].nama){
						swap = loker[j];
						loker[j] = loker[j+1];
						loker[j+1] = swap;
					}
				}	
			}
			break;	
		case 2:
			for(int i=0; i<ukuran-1; i++){
				for(j=0; j<ukuran-1; j++){
					if(loker[j].nama<loker[j+1].nama){
						swap = loker[j];
						loker[j] = loker[j+1];
						loker[j+1] = swap;
					}
				}	
			}
			break;
		break;
	}
}
//Prosedur untuk swap data dengan pointer
void swap(data_loker *xp, data_loker *yp)
{
	data_loker temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// Prosedur sort atribut barang dengan metode selectionSort
void selectionSort(data_loker loker[], int ukuran)
{
	int i, j, min_idx;
	int pilih;
	cout << "1. Ascending" << endl
		<< "2. Descending" << endl
		<< "Pengurutan berdasarkan: "; cin >> pilih;
	for (i = 0; i < ukuran-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < ukuran; j++)
		{
			switch (pilih){
				case 1:
					if (loker[j].barang < loker[min_idx].barang)
					{
						min_idx = j;	
					}
					break;
				case 2:
					if (loker[j].barang > loker[min_idx].barang)
					{
						min_idx = j;	
					}
					break;
			}
		}
		swap(&loker[i], &loker[min_idx]);
	}
}

// Prosedur sort atribut nomor loker dengan metode quick sort
int partition_askending (data_loker loker[], int low, int high)
{
	int pivot = loker[high].nomor;
	int i = (low - 1);
	for (int j = low; j <= high- 1; j++)
	{
		if (loker[j].nomor <= pivot)
		{
			i++;
			swap(&loker[i], &loker[j]);
		}
	}
	swap(&loker[i + 1], &loker[high]);
	return (i + 1);
}

int partition_diskending (data_loker loker[], int low, int high)
{
	int pivot = loker[high].nomor;
	int i = (low - 1);
	for (int j = low; j <= high- 1; j++)
	{
		if (loker[j].nomor >= pivot)
		{
			i++;
			swap(&loker[i], &loker[j]);
		}
	}
	swap(&loker[i + 1], &loker[high]);
	return (i + 1);
}

void quickSort_askending(data_loker loker[], int low, int high)
{
	if (low < high)
	{
		int pi = partition_askending(loker, low, high);
		quickSort_askending(loker, low, pi - 1);
		quickSort_askending(loker, pi + 1, high);
	}
}

void quickSort_diskending(data_loker loker[], int low, int high)
{
	if (low < high)
	{
		int pi = partition_diskending(loker, low, high);
		quickSort_diskending(loker, low, pi - 1);
		quickSort_diskending(loker, pi + 1, high);
	}
}

//Fungsi untuk search dengan metode binari
int binarisearch(int pilih)
{
	system("cls");
    string num;
	int beg = 0;
	int end=ukuran-1;
	int index= -1;
	cout<<"Data yang dicari: ";
	cin>>num;
	switch (pilih){
		case 2:
			for (int i=0; i<ukuran-1; i++){
				for(int j=0; j<ukuran-1; j++){
					if(loker[j].nama>loker[j+1].nama){
						data_loker swap = loker[j];
						loker[j] = loker[j+1];
						loker[j+1] = swap;
					}
				}	
			}
			while(beg<=end){
				int mid=(end+beg)/2;
				if(loker[mid].nama==num){
					index= mid +1;
					for (int i=0; i<ukuran; i++){
						if (loker[mid].nama==loker[i].nama){
							cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
							<< "\nNama        			" << ": "<< loker[i].nama
							<< "\nNama Barang 			" << ": "<< loker[i].barang
							<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
							<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n";
						}
						getch();
					}
					break;
				}
				else{
					if(num>loker[mid].nama){
						beg= mid+1;
					}
					else{
						end=mid-1;
					}
				}
			}
			break;
		case 3:
			for (int i = 0; i < ukuran-1; i++)
			{
				int min_idx = i;
				for (int j = i+1; j < ukuran; j++)
				{

					if (loker[j].barang < loker[min_idx].barang)
					{
						min_idx = j;	
					}
				}
				swap(&loker[i], &loker[min_idx]);
			}
			while(beg<=end){
				int mid=(end+beg)/2;
				if(loker[mid].barang==num){
					index= mid +1;
					for (int i=0; i<ukuran; i++){
						if (loker[mid].barang==loker[i].barang){
							cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
							<< "\nNama        			" << ": "<< loker[i].nama
							<< "\nNama Barang 			" << ": "<< loker[i].barang
							<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
							<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n";
						}
						getch();
					}
					break;
				}
				else{
					if(num>loker[mid].barang){
						beg= mid+1;
					}
					else{
						end=mid-1;
					}
				}
			}
			break;
	}

	if (index==-1){
		cout << "\nData tidak ditemukan"; getch();
	}
}

void interpolation_search(int pilih)
{
	quickSort_askending(loker,0,ukuran-1);
    // inisiasi nilai variabel indeks
    int i_awal = 0, i_posisi;
    int proses = 0;
    int i_akhir = ukuran - 1;
    // input nilai yang ingin dicari
    int key;
    cout << "Masukkan nomor loker yang ingin anda cari : ";
    cin >> key;
	switch (pilih){
		case 1:
			while (true)
			{
				proses++;
				// rumus interpolation search
				i_posisi = (i_awal + ((key - loker[i_awal].nomor) * (i_akhir - i_awal)) / (loker[i_akhir].nomor + loker[i_awal].nomor));
				// proses pembandingan search
				if (loker[i_posisi].nomor == key)
				{
					for (int i=0; i<ukuran; i++){
						if (loker[i_posisi].nomor==loker[i].nomor){
							cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
							<< "\nNama        			" << ": "<< loker[i].nama
							<< "\nNama Barang 			" << ": "<< loker[i].barang
							<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
							<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n";
						}
						getch();
					}
					break;
				}
				else if ((loker[i_posisi].nomor < key) && (loker[i_posisi].nomor >= loker[i_posisi].nomor))
				{
					i_awal = i_posisi + 1;
					continue;
				}
				else if ((loker[i_posisi].nomor > key) && (loker[i_posisi].nomor <= loker[i_posisi].nomor))
				{
					i_akhir = i_posisi - 1;
					continue;
				}
				else
				{
					cout << "Nilai yang anda cari tidak ada" << endl;
					break;
				}
			}
			break;
	}
}

//Prosedur untuk cari data
void search(){
	system("cls");
	int pilih;
	cout << "=============================	" << endl
	 	<< 	 "    Data yang dicari				" << endl
	   	<<   "=============================		" << endl
	 	<<   "[1] Nomor Loker					" << endl
	 	<<   "[2] Nama 							" << endl
	 	<<   "[3] Nama Barang					" << endl;
	cout << endl;
	cout << "Masukkan pilihan: "; cin >> pilih;
	switch (pilih)
	{
	case 1:
		interpolation_search(1);
		break;
	case 2:
		binarisearch(2);
		break;
	case 3:
		binarisearch(3);
		break;
	default:
		cout << "Inputan salah"; getch();
	}
}


//Proser untuk print data
void print()
{
	system("cls");
	int i;
	for (i=0; i < ukuran; i++){
		cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
			<< "\nNama        			" << ": "<< loker[i].nama
			<< "\nNama Barang 			" << ": "<< loker[i].barang
			<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
			<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n";
	}
	getch();
}

// Prosedur untuk tampilan judul kodingan
void tampilan(){
	cout << "Nama: Herni Suhartati " << endl;
	cout << "NIM : 2109106001" << endl;
    cout << endl;
    cout << "============================================================================================" << endl
    	<<  "----------------------------------- POSTTEST 6 SEARCHING --------------------------------------" << endl
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
		<<   "[3] Cari data			" << endl
		<<   "[4] Ubah Data 		" << endl
		<<   "[5] Hapus Data 		" << endl
		<<   "[6] Keluar Program 	" << endl;
}

// Prosedur untuk menambahkan data loker
void menambahkan(){
	system("cls");
	int jumlah;
	cout << "Jumlah data yang ingin ditambahkan: "; cin >> jumlah;
	cout << endl;
	for (int i=0; i<jumlah; i++){
		cout << "Masukkan nama		             	" << ": "; fflush(stdin);
		getline(cin, loker[ukuran].nama);
		cout << "Masukkan nama barang  yang dititip	" << ": "; cin >> loker[ukuran].barang;
		cout << "Masukkan nomor HP  \t\t\t: "; cin >> loker[ukuran].nomorHP;
		cout << "Masukkan tanggal (DD-MM-YY)		" << ": "; cin >> loker[ukuran].tanggal; cout <<"\n";
		loker[ukuran].nomor=ukuran+1;
		ukuran++;
	}
	
}

// Prosedur untuk menampilkan data loker berdasarkan sorting
void menampilkan(){
	system("cls");
	int pilih, urutan;
	if (ukuran==0)
	{
		cout << "Data loker tidak ada "; getch();
	}
	else if (ukuran>0)
	{
		cout << "=============================	" << endl
	 	<< 	 "Tampilan Berdasarkan Sorting		" << endl
	   	<<   "=============================		" << endl
	 	<<   "[1] Nomor Loker					" << endl
	 	<<   "[2] Nama 							" << endl
	 	<<   "[3] Nama Barang					" << endl;
		cout << endl;
		cout << "Masukkan pilihan: "; cin >> pilih;
		system("cls");
		if (pilih==1){
			cout << "1. Ascending" << endl
				<< "2. Descending" << endl
				<< "Pengurutan berdasarkan: "; cin >> urutan;
				switch (urutan){
					case 1:
						quickSort_askending(loker, 0, ukuran-1 );
						print();
						break;
					case 2:
						quickSort_diskending(loker, 0, ukuran-1 );
						print();
						break;
				}
		}
		else if (pilih==2){
			bubble(loker, ukuran);	
			print();
		}	
		else if (pilih==3){
			selectionSort(loker,ukuran);
			print();
		}	
		else{
			cout << "Pilihan tidak ada\n"; getch();
		}
	}
}

// Prosedur untuk mengubah data loker
void ubah_data(){
	system("cls");
	if (ukuran==0){
		cout << "Tidak ada data yang bisa diubah"; getch();
	}
	else {
		print();
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
	if (ukuran==0){
		cout << "Tidak ada data yang bisa dihapus "; getch();
	}
	else{
		int nomor_ubah;
		char pilih;
		if (ukuran==1){
			system("cls");
			print();
			cout << "\nApakah ingin menghapus data? (y/t) "; cin >> pilih;
			switch (pilih){
				case 'y':
					loker[ukuran]=loker[ukuran+1];
					cout << "\nData berhasil terhapus "; getch();
					ukuran--;
					break;
				default:
					cout << "Data tidak terhapus "; getch();
			} 
		}
		else {
			system("cls");
			print();
			cout << "\nMasukkan nomor loker data yang ingin diubah: "; cin >> nomor_ubah;
			int indeks=nomor_ubah-1;
			for (int i=indeks; i<ukuran; i++){
				cout << "\nNomor Loker 			" << ": "<< loker[i].nomor
					<< "\nNama        			" << ": "<< loker[i].nama
					<< "\nNama Barang 			" << ": "<< loker[i].barang
					<< "\nNomor HP    			" << ": "<< loker[i].nomorHP
					<< "\nTanggal (DD-MM-YY)\t\t" << ": "<< loker[i].tanggal <<"\n"; 
				cout << "\nApakah ingin menghapus data? (y/t) "; cin >> pilih;
				ukuran--;
				switch (pilih){
					case 'y':
						loker[i]=loker[i+1];
						cout << "\nData berhasil terhapus "; getch();
						break;
					default:
						cout << "Data tidak terhapus "; getch();
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
	system("cls");
	tampilan();
	menu_utama();
	cout<<"\n\nMasukkan Pilihan : ";
	cin >> pilih;
	switch(pilih){
			case 1:
				menampilkan(); // kondisi jika user memilih untuk menampilkan data yang telah tersort
				main();
				break;
			case 2:
				menambahkan();
				main();
				break; // kondisi jika user memilih untuk menambahkan data
			case 3:
				search(); // kondisi jika user memilih untuk mencari data
				main();
				break;
			case 4:
				ubah_data();
				main();
				break; // kondisi jika user  memilih untuk ubah data
			case 5:
				hapus_data();
				main();
				break;
			case 6:
				keluar(); // kondisi jika user memilih untuk keluar program
				break;
			default:
				main();
		
	}		
}

