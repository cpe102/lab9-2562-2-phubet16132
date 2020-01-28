//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<string>
#include<fstream>
#include<cmath>

using namespace std;

int main(){
	ifstream source;
	source.open("D:\\c++\\lab9-2562-2-phubet16132\\score.txt");
	string num;
	float sum,mean,SD,powsum;
	int i=0;
	while(getline(source,num)){
		
		sum =sum + stof(num);
		powsum = powsum+ pow(stof(num),2);
		i++;
	}
	mean=sum/i;
	
	
	SD=pow((powsum/i)-pow(mean,2),0.5);
	
	cout << "Number of data = "<<i<<endl;
	cout << "Mean = "<<mean<<endl;
	cout << "Standard deviation = "<<SD<<endl;
	
	source.close();
	return 0;
	
}
