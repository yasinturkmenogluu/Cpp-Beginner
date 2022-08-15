#include <iostream>

using namespace std;

int main() {
  // Stringler aşağıdaki gibi string anahtar kelimesi ile tanımlanır.
	string str1 = "Ali top oynuyor.";
	string str2 = "Ahmet bisiklet sürüyor.";
  
  // stringleri toplayabiliriz. Eğer toplarsak stringler sırsaıyla arka arkaya toplanır. 
	string str3 = str1 + str2;
 
  
	cout << "str1: " << str1 << endl;
	cout << "str2: " << str2 << endl;
	cout << "str3: " << str3 << endl;
  cout << "str4: " << str3 << endl;

	return 0;
}
