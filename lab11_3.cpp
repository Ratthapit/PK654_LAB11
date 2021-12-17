#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    ifstream source;
	ofstream dest;
	source.open("score.txt");

    int count=0;
    double msum=0,ssum=0;
    string textline;
	while(getline(source,textline)){
	    dest<<textline<<"\n";
        count++;
        msum += atof(textline.c_str());
        ssum += pow(atof(textline.c_str()),2);
	}

    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<msum/count<<"\n";
    cout << "Standard deviation = "<<sqrt((ssum/count)-pow((msum/count),2))<<"\n";

    return 0;
}