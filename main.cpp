#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double harmonicSeries = 0, numberOfTerms, actualTerm = 0, partialTerm;
    double interval, counter;
    bool correctInput;
    int nPower;
    cout<<"WELCOME TO THE GENERALIZED HARMONC SERIES CALCULATOR";

    do {
        cout<<endl<<"Insert the power of the general term: ";
        cin>>nPower;
        if (nPower < 1) {
            cout<<endl<<"PLEASE INPUT A POSITIVE NUMBER!";
            correctInput = false;
        } else {
            cout<<endl<<"Input accepted!";
            correctInput = true;
        }
    } while (correctInput == false);

    do {
        cout<<endl<<"Insert the number of terms: ";
        cin>>numberOfTerms;
        if(numberOfTerms < 1) {
            cout<<endl<<"PLEASE INSERT A POSITIVE NUMBER!";
            correctInput = false;
        } else {
            cout<<endl<<"Input accepted!";
            correctInput = true;
        }
    } while (correctInput == false);

    do {
        cout<<endl<<"Insert the interval between the results display: ";
        cin>>interval;
        if (interval < 1) {
            cout<<endl<<"PLEASE INSERT A POSITIVE NUMBER!";
            correctInput = false;
        } else if (interval > numberOfTerms) {
            cout<<"THE INTERVAL CANNOT BE GREATER THAN THE NUMBER OF TERMS!"<<endl;
            correctInput = false;
        } else {
            cout<<"Input accepted!";
            correctInput = true;
        }
    } while (correctInput == false);

    while (partialTerm <= numberOfTerms) {
        partialTerm++;
        counter++;
        actualTerm = partialTerm;
        for (int i=1; i<nPower; i++) {
            actualTerm = actualTerm*partialTerm;
        }
        harmonicSeries = harmonicSeries + 1.0/actualTerm;
        if (counter == interval) {
            cout<<endl<<"The sum of 1/n^"<<nPower<<" for "<<partialTerm<<" terms is: ";
            cout<<harmonicSeries<<endl;
            counter = 0;
        }
    }
    return(0);
}
