#include <iostream>
using namespace std;

int main()
{
   int i, x;
   char str[100];

   cout << "Masukan sebuah kata:\t";
   cin >> str;
	A:
   cout << "\nApa yang anda ingin lakukan?:\n";
   cout << "1 = Enkripsi!\n";
   cout << "2 = Dekripsi!\n";
   cout << "3 = Exit\n";
   cin >> x;

   switch(x)
   {	
      //first case for encrypting a string
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         cout << "\nHasil Enkripsi: " << str << endl;
         goto A;
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

      cout << "\nHasil Dekripsi: " << str << endl;
      goto A;
      break;
 		case 3:
 			cout << "Terima Kasih sudah mencoba Aplikasi saya!";
   }
   return 0;
}
