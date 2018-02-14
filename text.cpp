#include <iostream>
#include <fstream> //file stream
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<endl<<endl;
 
	ofstream textfile {"abc.txt"}; //open file for writing a b c

	if(textfile)
		textfile << a << " " << b << " " << c << endl;
	else
		cout << "error opening abc.txt" << endl;

	textfile.close();

   return 0;
}
