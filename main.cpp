//
//  Final Question 1
//
//  Created by Edgar Esparza on 7/22/15.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE=10;

double array_average(int randNumArr[ARRAY_SIZE]);

int main ()
{
    int randNumArr[ARRAY_SIZE];
    srand (time(0));
    
    cout << "The randomly generated integers are: \n";
    
    for (int i=0; i<ARRAY_SIZE; i++)
    {
        randNumArr[i] = rand() % 20;
        
        cout << randNumArr[i] <<"  ";
    }
    cout<<endl;
    double array_average(int randNumArr[ARRAY_SIZE]);
    cout<<"The average is: "<<array_average(randNumArr);
    
    return 0;
}

double array_average(int randNumArr[ARRAY_SIZE]){
    double sum = 0;
    double average = 0;
    for (int i = 0; i < 10; ++i)
        sum+=randNumArr[i];
    average = sum/10;
    return average;
}