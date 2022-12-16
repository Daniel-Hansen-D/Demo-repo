#include <iostream>
#include <string>
using namespace std;

void printname();



int main()
{

    	std::cout<<"Hello World!"<<std::endl;
    	cout<<"Read this if its the third commit"<<endl;
    
	printname();

    	return 1;
}


void printname()
{
	cout<<"Please enter your name: ";
	cin >> string name;

	cout<<"Good day to you "<< name <<"."<<endl;


}
