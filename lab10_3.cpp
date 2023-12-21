#include <iostream>
#include <fstream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;
  int main(){
    int count = 0 ;
    double mean , sd ;
    double sum = 0 ;
    double square = 0.0 ;
    string textline ;
    ifstream source("score.txt") ;
    while (getline(source,textline)){
        sum += atof (textline.c_str()) ;
        square += pow(atof(textline.c_str()),2) ;
        count++;
    }
    mean = sum/count ;
    sd = sqrt(((square)/count)-pow((sum/count),2)) ;
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n" ;
    cout << setprecision(3);
    cout << "Standard deviation = " << sd;
  }
