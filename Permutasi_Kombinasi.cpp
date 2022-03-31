#include <iostream>
using namespace std;

// Fungsi yang digunakan untuk mengitung nilai faktorial
int faktorial(int nilai_bilangan)
{
    int faktor = 1;
    for(int i=1;i<=nilai_bilangan;i++) 
    {
        faktor *= i;
    }
    return faktor;
}

int main()
{
    string melanjutkan="y";
    // Perulangan while digunakan agar program bisa berjalan berulang-ulang
    while (melanjutkan =="y" || melanjutkan =="ya" )
    {
        // Deklarasi dari berbagai variabel yang digunakan
        int n,r,permutasi,pembagi,kombinasi,pilihan;
        // User diminta untuk memasukkan nilai objek keseluruhan atau nilai n
        cout << "\nMasukkan nilai banyaknya objek secara keseluruhan: ";
        cin >> n;
        // // User diminta untuk memasukkan nilai objek yang diamati atau nilai r
        cout << "Masukkan nilai banyaknya objek yang diamati: ";
        cin >> r;
        // Perulangan while digunakan apabila user menginputkan nilai yang diamati lebih dari nilai seluruhnya secara berulang
        while(r>n)
        {
            cout << "\nTidak boleh nilai yang diamati > nilai keseluruhan"<<endl;
            cout << "Masukkan ulang nilai banyaknya objek yang diamati: ";
            cin >> r;
        }
        pembagi=n-r;
        // Pilihan atau kondisi yang harus dipilih oleh user
        cout << "\n1. Permutasi" <<endl;
        cout << "2. Komputasi" <<endl;
        cout << "3. Keluar" <<endl;
        cout << "\nMasukkan pilihan anda: ";
        cin >> pilihan;
        // Kondisi jika memilih untuk menghitung permutasi
        if(pilihan==1)
        {
            permutasi= faktorial(n)/faktorial(pembagi);
            cout << "Nilai dari permutasi yaitu " << permutasi<<endl;
        }
        // Kondisi jika memilih untuk menghitung kombinasi
        else if (pilihan==2)
        {
            kombinasi=faktorial(n)/(faktorial(r)*faktorial(pembagi));
            cout << "Nilai dari kombinasi yaitu " << kombinasi <<endl;
        }
        // Kondisi jika memilih keluar program
        else
        {
            cout << "Terima kasih"<< endl;
            break;
        }
        // Variabel untuk menghentikan atau melanjutkan perulangan
        cout << "\nApakah ingin melanjutkan? ";
        cin >> melanjutkan;
    }
    // Output jika memilih tidak melanjutkan
    cout << "Terima kasih";
}

