#include <iostream>
#include <iomanip>

using namespace std; 

main()
{
	string makanan[4] = {"Chicken Roll Banjir", "Korean Spicy Chicken Roll", "Original Chicken Roll", "Original Popcorn Chicken "};
	double hargaMakanan[4] = {8.00, 9.00, 5.5, 9.5};
	
	string minuman[6] = {"Signature Bang Bang", "Milk Tea", "Coco and Smoothie", "Matcha", "Fruit Tea ","Classic Coffee"};
	double hargaMinuman[6] = {6.5, 7.00, 8.5, 9.0, 8.5, 9.5};
	double jumlahHarga;
	
	int pilih, pilihMakanan, pilihMinuman;
	char tambah;
	
	cout << "+-----------------------------+---------------+--+-----------------------+---------------+" << endl;
	cout << "|           Food              |     Price     |  |        Drinks         |     Price     |" << endl;
	cout << "+-----------------------------+---------------+--+-----------------------+---------------+" << endl;
	
	for(int i=0; i<4; i++)
	{
		cout << "|" << i+1 << "." 
		<< setw(27) << left << makanan [i] << setw(5) << left << "|    RM " 
		<< setw(8) << left << hargaMakanan[i] << "|  |" << i+5 << ". " 
		<< setw(20) << left << minuman[i] << "|   RM " << setw(9) << hargaMinuman[i]  << left << "|" << endl;
	}
	
    for (int i = 4; i < 5; i++)
    {
        cout << "|" << setw(29) << " " << "|               |  " << "|" << i+5 << ". " << setw(20) << left << minuman[i] << setw(7) << "|   RM"
             << setw(9) << hargaMinuman[i] << "|" << endl;
    }
    
     for (int i = 5; i < 6; i++)
    {
        cout << "|" << setw(29) << " " << "|               |  " << "|" << i+5 << ". " << setw(19) << left << minuman[i] << setw(7) << "|   RM"
             << setw(9) << hargaMinuman[i] << "|" << endl;
    }
	
	cout << "+-----------------------------+---------------+--+-----------------------+---------------+" << endl << endl;
	
	do
	{
	cout << "Tekan :" << endl << endl;
	cout << "1. Makanan" << endl;
	cout << "2. Minuman" << endl << endl;
	
	cout << "Pilihan Anda : " ; 
	cin >> pilih;
	
	cout <<"\n";
	
	if (pilih == 1)
	{
		cout << "Anda Memilih Makanan" << endl << endl;
		for(int i=0; i<4; i++)
		{
			cout << i+1 <<"." << setw(27) << left  << makanan[i] << ": RM " << hargaMakanan[i] << endl;	
		}
		
		cout <<"\n";
		do{
			cout << "Masukkan Kod Makanan :"; 
			cin >> pilihMakanan;
			if(pilihMakanan >=1 && pilihMakanan <=4)
			{
				cout << makanan[pilihMakanan-1] << ": RM " << hargaMakanan[pilihMakanan-1] << endl << endl;
				jumlahHarga += hargaMakanan[pilihMakanan-1];
				
				cout << "Adakah anda mahu menambah makanan?(Y/N) :";
				cin >> tambah;	
			}else
			{
				cout << "Tiada dalam senarai!" << endl;
			}
		}while(tambah =='y' || tambah =='Y');
		
	}else if (pilih == 2)
	{
		cout << "Anda Memilih Minuman" << endl << endl;
		for(int i=0; i<5; i++)
		{
			cout << i+5 <<"." << setw(27) << left  << minuman[i] << ": RM " << hargaMinuman[i] << endl;	
		}
		
		for(int i=5; i<6; i++)
		{
			cout << i+5 <<"." << setw(26) << left  << minuman[i] << ": RM " << setprecision(4) << hargaMinuman[i] << endl;	
		}		
		
		cout <<"\n";
		do{
			cout << "Masukkan Kod Minuman :"; 
			cin >> pilihMinuman;
			if(pilihMinuman >=5 && pilihMinuman <=10)
			{
				cout << minuman[pilihMinuman-5] << ": RM " << hargaMinuman[pilihMinuman-5] << endl << endl;
				jumlahHarga += hargaMinuman[pilihMinuman-5];
				
				cout << "Adakah anda mahu menambah minuman?(Y/N) :";
				cin >> tambah;	
			}	
		}while(tambah =='y' || tambah =='Y');		
	}else
	{
		cout << "Kod Anda Salah!" << endl;
	}
		cout << "Adakah Anda Mahu Tambah Makanan atau Minuman lagi?(Y/N) :";
		cin >> tambah;
	}while(tambah =='y' || tambah =='Y');
	
	cout << "Jumlah Kesemuanya Berharga : RM " << jumlahHarga;
	
	
return 0;
}
