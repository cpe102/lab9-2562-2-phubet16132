#include <iostream>
#include<string>
#include<fstream>

using namespace std;


int main(){
	
	ifstream source;
	source.open("D:\\c++\\lab9-2562-2-phubet16132\\cheerbook.txt");
	
	string textline;
	
	ofstream dest("D:\\c++\\lab9-2562-2-phubet16132\\cheerbook_copy.txt");
	
	dest<<"-------------------- SOTUS ---------------------\n";
	while(getline(source,textline)){
		
		dest<<textline<<endl;
	}
	dest<<"-------------------- SOTUS ---------------------";
	source.close();
	dest.close();
	return 0;
}





//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
