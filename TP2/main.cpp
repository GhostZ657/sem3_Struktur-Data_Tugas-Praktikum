#include <iostream>
using namespace std;

void tampilkanNilai(int *ptr, int jumlah)
{
   for (int i = 0; i < jumlah; i++)
   {
      cout << "Nilai Mahasiswa " << i + 1 << " = " << *(ptr + i) << endl;
   }
}

int hitungTotal(int *ptr, int jumlah)
{
   int total = 0;
   for (int i = 0; i < jumlah; i++)
   {
      total += *(ptr + i);
   }
   return total;
}

int main()
{
   int mahasiswa[5] = {85, 60, 90, 95, 80};

   tampilkanNilai(mahasiswa, 5);

   int total = hitungTotal(mahasiswa, 5);
   cout << "Total Nilai = " << total << endl;

   return 0;
}
