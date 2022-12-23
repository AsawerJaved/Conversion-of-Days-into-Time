#include <iostream>

using namespace std;

int main()
{
    int days, hour, min, sec;
    cout<<"Enter the number of days: ";
    cin>>days;
    
    hour=24*days;
    min=24*60*days;
    sec=24*60*60*days;
    
    cout<<"\nThere are "<<hour<<" hours in "<<days<<" days"<<endl;
    cout<<"There are "<<min<<" minutes in "<<days<<" days"<<endl;
    cout<<"There are "<<sec<<" seconds in "<<days<<" days"<<endl;


    return 0;
}
