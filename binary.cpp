#include <iostream>
#include <fstream> // file stream
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;

	ofstream binaryfile {"abc.bin", ios::binary}; //open file for writing

	if(binaryfile) //if file exist write the 3 viriables
		{
			binaryfile.write (reinterpret_cast<char*>(&a), sizeof(a));
			binaryfile.write (reinterpret_cast<char*>(&b), sizeof(b));
			binaryfile.write (reinterpret_cast<char*>(&c), sizeof(c));
		}
	else
		cout << "error opening abc.bin" << endl;

   return 0;
}
