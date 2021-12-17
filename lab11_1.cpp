#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int i=1;
	
	do{
		cout << "Student [" <<i<< "]: ";
		char grade;
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){ // if grade is A
			count[0]++;
			i++;
		}
		else if(grade=='B'){ // if grade is B
			count[1]++;
			i++;
		}
		else if(grade=='C'){ // if grade is C
			count[2]++;
			i++;
		}
		else if(grade=='D'){ // if grade is D
			count[3]++;
			i++;
		}
		else if(grade=='F'){ // if grade is F
			count[4]++;
			i++;
		}
		else if(grade=='0') // if grade is 0
			break;
		else{ // grade is wrong input
			cout << "Wrong input. Please input again.\n";
		} 
	}while(true);
	
	cout << "In total "<< i-1 <<" student";
		if(i-1>1)	cout<<"s.\n";
		else cout<<".\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	
	return 0;
}