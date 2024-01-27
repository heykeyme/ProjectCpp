#include <iostream>
#include <iomanip>

using namespace std; 

void jumlah(string nama, double jumlahHarga) // function setelah semua proses selesai dan akan display nama pembeli dan jumlah harga makanan dibeli
{
	cout << "TERIMA KASIH " << nama << " MEMBELI DI TEALAIV" << endl;
	cout << "JUMLAH PERBELANJAAN ANDA IALAH : RM " << jumlahHarga;
}

main()
{
	string nama; //declare nama;
	
	string makanan[4] = {"Chicken Roll Banjir", "Korean Spicy Chicken Roll", "Original Chicken Roll", "Original Popcorn Chicken "}; // declare 4 array yang menyimpan 4 data makanan
	double hargaMakanan[4] = {8.00, 9.00, 5.5, 9.5}; // data array menyimpan harga makanan
	
	string minuman[6] = {"Signature Bung Bung", "Milk Tea", "Coco and Smoothie", "Matcha", "Fruit Tea ","Classic Coffee"}; // declare 6 array menyimpan 6 data minuman
	double hargaMinuman[6] = {6.5, 7.00, 8.5, 9.0, 8.5, 9.5}; // declare 6 array menyimpan harga minuman
	
	double jumlahHarga; // declare jumlah harga yang akan menyimpan data double
	
	int pilih, pilihMakanan, pilihMinuman; // declare pilih untuk pilih makanan atau minumanan, pilihMakanan untuk pemilihan makanan dan pilihMinuman untuk pemilihan minuman;
	char tambah; // declare tambah untuk fungsi penambahan item di dalam sistem
		
	cout << "==========================================================================================" << endl; // greeting sentence
	cout << "                               SELAMAT DATANG KE TEALAIV                                  " << endl;
	cout << "==========================================================================================" << endl;
	
	cout << "+-----------------------------+---------------+--+-----------------------+---------------+" << endl; // Header menu dan harga
	cout << "|           Food              |     Price     |  |        Drinks         |     Price     |" << endl;
	cout << "+-----------------------------+---------------+--+-----------------------+---------------+" << endl;
	
	for(int i=0; i<4; i++) // display untuk 4 item makanan dan 4 item minuman
	{
		cout << "|" << i+1 << "." 
		<< setw(27) << left << makanan [i] << setw(5) << left << "|    RM " 
		<< setw(8) << left << hargaMakanan[i] << "|  |" << i+5 << ". " 
		<< setw(20) << left << minuman[i] << "|   RM " << setw(9) << hargaMinuman[i]  << left << "|" << endl;
	}
	
    for (int i = 4; i < 5; i++) // display untuk minuman ke 5
    {
        cout << "|" << setw(29) << " " << "|               |  " << "|" << i+5 << ". " << setw(20) << left << minuman[i] << setw(7) << "|   RM"
             << setw(9) << hargaMinuman[i] << "|" << endl;
    }
    
     for (int i = 5; i < 6; i++) // display untuk minuman ke 6
    {
        cout << "|" << setw(29) << " " << "|               |  " << "|" << i+5 << ". " << setw(19) << left << minuman[i] << setw(7) << "|   RM"
             << setw(9) << hargaMinuman[i] << "|" << endl;
    }
	
	cout << "+-----------------------------+---------------+--+-----------------------+---------------+" << endl << endl; // penutup menu dan harga
	
	cout << "Berikan Nama Anda : "; // Pertanyaan nama
	cin >> nama; // input nama
	cout << endl; // skip 1 line
	
	do 
	{
		do{
			cout << "Tekan :" << endl << endl; // Arahan untuk pilihan makanan atau minuman
			cout << "1. Makanan" << endl; 
			cout << "2. Minuman" << endl << endl;
	
			cout << "Pilihan Anda : " ; // masukkan nombor tertera untuk Makanan dan Minuman
			cin >> pilih; // input untuk pilih
			
			if(pilih != 1 && pilih !=2) // pilihan mestilah nombor 1 dan 2 sahaja
			{
				cout << endl << "Kod anda Salah" << endl << endl; // output sekiranya kod bukan 1 atau 2
			}
	
		}while(pilih !=1 && pilih != 2 ); // looping akan dilakukan sekiranya pilih bukan 1 atau 2

	cout <<"\n";
	
	if (pilih == 1) // sekiranya pilihan 1, maka user memilih makanan
	{
		cout << "Anda Memilih Makanan" << endl << endl;
		for(int i=0; i<4; i++)
		{
			cout << i+1 <<"." << setw(27) << left  << makanan[i] << ": RM " << hargaMakanan[i] << endl;	 // display semua menu dan harga makanan
		}
		
		cout <<"\n"; // skip 1 line
		do{
			do{
				cout << "Masukkan Kod Makanan :"; // meminta masukkan kod makanan
				cin >> pilihMakanan; // input kod makanan
				
				if (pilihMakanan<1 || pilihMakanan >4) // sekiranya kod yang dimasukkan bukan memenuhi ciri2 kod makanan
				{
				cout << "Tiada dalam senarai!" << endl; // error akan diberitahu
				cout << "Masukkan Kod Yang Betul!" << endl << endl; // arahan untuk memasukkan semula kod
				}	
			}while (pilihMakanan <1 || pilihMakanan>4); // do while loop selagi kod tidak betul

			if(pilihMakanan >=1 && pilihMakanan <=4) // selection sekiranya makana
			{
				cout << makanan[pilihMakanan-1] << ": RM " << hargaMakanan[pilihMakanan-1] << endl << endl; // makanan yang dipilih berdasarkan kod pilihan makanan ditolakkan dengan nilai 1 kerana index array bermula daripada 0 dan makanan bermula daripada 1.
				jumlahHarga += hargaMakanan[pilihMakanan-1]; // jumlah harga akan menyimpan harga makanan yang dipilih
				
				cout << "Adakah anda mahu menambah makanan?(Y/N) :"; // pertanyaan untuk menambah makanan
				cin >> tambah; // input untuk tambah makanan
			}
		}while(tambah =='y' || tambah =='Y'); // sekiranya input tambah yang dimasukkan adalah 'y' atau 'Y' bermakna user mahu menambah makanan dan sistem akan looping untuk makanan
		
	}else if (pilih == 2) // sekiranya user memilih 2, maka user memilih makanan
	{
		cout << "Anda Memilih Minuman" << endl << endl;
		for(int i=0; i<5; i++)
		{
			cout << i+5 <<"." << setw(27) << left  << minuman[i] << ": RM " << hargaMinuman[i] << endl;	// display kod makanan 1-5
		}
		
		for(int i=5; i<6; i++)
		{
			cout << i+5 <<"." << setw(26) << left  << minuman[i] << ": RM " << hargaMinuman[i] << endl;	// display kod makanan 6
		}		
		
		cout <<"\n"; // skip 1 line
		do{
			do{
				cout << "Masukkan Kod Minuman :"; // minta masukkan kod minuman yang tertera
				cin >> pilihMinuman; // input kod minuman
				if (pilihMinuman <5 || pilihMinuman >10) // sekiranya kod yang diberikan tidak memenuhi ciri2 ini, mesej error di dalam statement di bawah akan diberikan
				{
					cout << "Tiada Dalam Senarai!" << endl;
					cout << "Masukkan Kod Yang Betul!" << endl << endl;
				}								
			}while(pilihMinuman <5 || pilihMinuman >10);

			if(pilihMinuman >=5 && pilihMinuman <=10) // pilihan minuman di antara kod 5 - 10
			{
				cout << minuman[pilihMinuman-5] << ": RM " << hargaMinuman[pilihMinuman-5] << endl << endl; // minuman yang dipilih berdasarkan kod pilihan minuman ditolak dengan nilai 5 kerana index array bermula dari nilai 0 dan kod minuman bermula dari 5
				jumlahHarga += hargaMinuman[pilihMinuman-5]; // harga minuman yang dipilih akan disimpan di dalam nilai jumlah harga
				
				cout << "Adakah anda mahu menambah minuman?(Y/N) :"; // pertanyaan untuk menambah minuman lagi
				cin >> tambah;	// input tambah minuman
			}	
		}while(tambah =='y' || tambah =='Y'); // looping sekiranya tambah = 'y' atau 'Y', maka sistem akan meminta user untuk masukkan kod minuman lagi	
	}
		cout << "Adakah Anda Mahu Tambah Makanan atau Minuman lagi?(Y/N) :"; // pertanyaan untuk menambah minuman atau makanan lagi
		cin >> tambah; // input tambah makanan atau minuman
	}while(tambah =='y' || tambah =='Y'); // Do...while loop akan mengulang untuk menambah makanan atau minuman lagi sekiranya tambah = 'y' atau 'Y'
	
	cout << endl; // skip satu line
	
	jumlah(nama, jumlahHarga); // call function dalam main function untuk memaparkan output jumlah harga
	
return 0;
}

