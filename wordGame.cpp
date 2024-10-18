#include <iostream>
#include <string>
using namespace std ;

int main() {

	string name ;

	cout << "Enter the name: " << endl ;
	cin >> name ;

	char arr[10] = {} ;
	char temp ;

	int wordlen = name.length() ;
	int wordlen1 = wordlen - 1 ;

	for (int i = 0; i < wordlen; i++)
	{
		temp = name[i] ;
		name[i] = name[i];
		arr[i] = temp ;
	}

	char arr1[10] = {} ;
	char temp2 ;
	int a = 0 ;
	
	for (int j = wordlen1; j >= 0; j--)
	{
		temp2 = name[j] ;
		arr1[a] = temp2 ;
		a++ ;
	}

	bool Plag = true ;

	for (int i = 0; i <= wordlen1; i++)
	{
		if (arr[i] != arr1[i])
		{
			Plag = false ;
			break;
		}	
		
	}

	
	if (Plag == true)
	{
		cout << "It is ok " << endl ;
	}
	else if (Plag == false)
	{
		cout << "It is not ok " << endl ;
	}
	
	return 0;
}