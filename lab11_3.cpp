#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double Xi_2 = 0;
    double Xi = 0;
    int N;
    string textline;
    ifstream source;
    source.open("score.txt");

    while(getline(source,textline)) {
        Xi += stod(textline);
        Xi_2 += pow(stod(textline),2);
        N++;
    }
    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << Xi/N << endl;
    cout << "Standard deviation = " << sqrt(Xi_2/N - pow(Xi/N,2));
}