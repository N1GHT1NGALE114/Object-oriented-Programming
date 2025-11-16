#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the amount of numbers you want to add"<<endl;
    cin>>n;
    if(n<0)
    {
        cout<<"Invalid input!!"<<endl;
        return 1;
    }
    float numbers[n];
    float *ptr=numbers;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" number"<<endl;
        cin>>*(ptr+i);
    }
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ *(ptr+i);
    }
    float average = sum/n;
    cout<<"The average is: "<<average<<endl;
    return 0;
}
