//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){

    ifstream source ;
    source.open("score.txt") ;
    string str_number ;
    int count = 0 ;
    double sum = 0 ;
    double avg ;

    while(getline(source,str_number)){
        sum = sum + stod(str_number) ;
        count++ ;
    }

    avg = sum/count ;

    source.close() ;
    source.open("score.txt") ;

    double zum = 0  ;

    while(getline(source,str_number)){
        zum = zum + pow(stod(str_number) - avg , 2) ; 
        
    }
    double SD = sqrt(zum/count) ;
    

cout << "Number of data = "<< count << endl;
cout << setprecision(3) ;
cout << "Mean = " << avg << endl;
cout << "Standard deviation = " << SD << endl;





}