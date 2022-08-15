#include <iostream>
using namespace std;

/*
int: integer veri tipi bellekte 4 baytlık yer kaplar. Tam sayılar için kullanılır.
float: float veri tipi bellekte 4 baytlık yer kaplar. Ondalıklı sayılar için kullanılır.
double: double veri tipi bellekte 8 baytlık yer kaplar. Virgülden sonra daha çok değer var ise float yerine double kullanılır.
char: char veri tipi bellekte 1 baytlık yer kaplar. Krakter verileri için kullanılır.
*/

int main(){

	int a = 32;
	float b = 3.52;
	double c = 4.546;
	char d = 'A'; 
	char e = 65; // Ascii tablosunda karşılık gelen karakter döndürülür.
	bool f = true;

  // Değişkenleri ekrana yazdırma
	cout << "a :" << a << endl;
	cout << "b :" << b << endl;
	cout << "c :" << c << endl;
	cout << "d :" << d << endl;
	cout << "e :" << e << endl;
	cout << "f :" << f << endl;

	// Toplama operatörü ile int, double, float gibi veri tipindeki değerleri toplayabiliriz.
	double sum = a + b + c;

	cout << "Addition: " << sum << endl;


	return 0;

}
