#include<iostream>

using namespace std;

int main(){
	int count[5] = {};                      //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	
	
	do{
		cout << "Student [" <<i+1<< "]:";
		cin >> grade;                       //The loop must be terminated when grade = '0'
		if(grade=='A'){
			count[0]=count[0]+1;
			i+=1;
		}                                  // if grade is A
		else if(grade=='B'){
			count[1]=count[1]+1;
			i+=1;
		}
		else if(grade=='C'){
			count[2]=count[2]+1;
			i+=1;
		}
		else if(grade=='D'){
			count[3]=count[3]+1;
			i+=1;
		}
		else if(grade=='F'){
			count[4]=count[4]+1;
			i+=1;
		}
		else if(grade=='0'){
			break ;
		}
		else{
			cout<<"Wrong input. Please input again.\n";
		}
		                       	                                //Do something
	
	}while(grade!='0');
	
	
	cout << "In total "<< i << "students.";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";                                        //	and so on ... for grade = C, D, F	
	cout << "F = " << count[4] <<",";
	
	return 0;
}
