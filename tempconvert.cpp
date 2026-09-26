#include <iostream>

using namespace std;

int main(){
  
   double celcius, fahrenheit;
   
   cout << "Konversi Suhu Celcius ke Fahrenheit\n \n";
   cout << "Masukkan Suhu Celcius : " ;
   cin >> celcius;
   
   fahrenheit = (celcius * 9/5) + 32;
   cout << "Konversi ke fahrenheit adalah : "<< fahrenheit << " F" << endl;
  
    return 0;
}
