#include<iostream>
#include<conio.h>

using namespace std;

int main() 
{
float number, sum = 0.0;
do
{
cout<<"Enter a number: ";
cin>>number;
sum += number;
}
while(number != 0.0);
cout<<"Total sum = "<<sum; 
return 0;
}

