//
//  main.cpp
//  ca3
//
//  Created by Andrea d Cazares on 9/14/24.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;
int main(){
int maxValue=6;
 int minValue=1;
 srand(time(0));
float firstVal=rand()%(maxValue-minValue+1) +minValue;
int secondVal = rand() % (maxValue - minValue + 1) + minValue;
cout<< firstVal<<endl;
cout<<secondVal<<endl;

return 0;
}

//class acivity 3
