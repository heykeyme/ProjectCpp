#include <iostream>
using namespace std;

class human{
	public:
		string name, birthday;
		int idCard;
};

main()
{
	float totalPerbelanjaan;
	int enterId;
	string dateToday;
	
	human customer[3];
	
	customer[0].name = "Hakimi";
	customer[0].idCard = 1001;
	customer[0].birthday = "2000-10-11";		
	
	customer[1].name = "Hanis";
	customer[1].idCard = 1002;
	customer[1].birthday = "2000-01-09";		
	
	customer[2].name = "Farhan";
	customer[2].idCard = 1003;
	customer[2].birthday = "2000-06-25";			
	
	cout << "Tarikh Hari Ini: " ;
	cin >> dateToday;
	
	cout << "Masukkan Id Anda : ";
	cin >> enterId;
	
	for (int i = 0; i < 3; i++)
	{	
		if(enterId == customer[i].idCard)
		{
			cout << "Masukkan Total Perbelanjaan Anda : ";	
			if (dateToday == customer[i].birthday)
			{
				cin >> totalPerbelanjaan;
				totalPerbelanjaan *= 0.4;				
			}
			else
			{
				cin >> totalPerbelanjaan;
				totalPerbelanjaan *= 0.5;
			}
			cout << "Anda Hanya Perlu Membayar sebanyak RM " << totalPerbelanjaan;
			return 0;
		} 
	
	}
	
	cout << "ID Card Anda Tidak Sah" << endl;
	
return 0;
}
