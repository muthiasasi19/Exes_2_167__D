#include <iostream>
using namespace std;


// input
int main();
int input()
{
	int count, i, number, median;     //  number = angka yg di cari, count= jlmh elemen, i = indeks
	int sasi[36], muthia, marsakina;

	cout << "Berapa banyak elemen yang diinginkan ? :"; // mengeluarkan karakter yg berada pd tanda kutip ke layar
	cin >> count;									 // memasukkkan nilai user pd program

	for (i = 0; i < count; i++) 					
	{													// eksekusi program
		cout << "Masukkan angka " << (i + 1) << ":";				// i+1 (i akan bertambah 1 sesuai dgn elemen yg diinginkan/  ingin menampilkan nomor angka yang diminta dimulai dari 1.)
		cin >> number;									// nilai nilai yg dimasukkan oleh user
	}

	//  BinarySearch
	void BinarySearch(); {
		cout << "Masukkan angka yang ingin dicari:";
		cin >> number;


		muthia = 0;								// upperbound
		marsakina = number - 1;						 // lowerbound
		median = (marsakina + muthia) / 2;
		while (muthia <= marsakina)				// menunjukkan perulangan yg tdk dpt dihitung karena membutuhkan kondisi utk looping bs berhenti (selama muthia <= marsakina)
		{
			if (sasi[median] < number) // statemen dengan satu kondisi
			{
				muthia = median + 1;

			}
			else if (sasi[median] == number) //  menggunakan if else if else karena >2 kondisi (arr[middle] lebih kecil dari, sama dengan, atau lebih besar dari number)
			{
				cout << number << " ditemukan dalam array pada lokasi ke " << median + 1 << "\n"; // angka yang dicari (number) ditemukan dalam array pada lokasi (median + 1)
				break;
			}
			else
			{
				marsakina = median - 1;
			}
			median = (muthia + marsakina) / 2;
			{

				if (muthia > marsakina)
				{
					cout << number << " tidak ditemukan dalam array";
				}
				return 0;
			}

			int main(); {
		
				BinarySearch();
			}
		}
	}
