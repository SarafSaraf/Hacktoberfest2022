#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // define an array
    int num[]= {12,9,37,86,2,17,5};
    int i,j,t;

    cout<<"Array before Bubble Sort"<<endl;
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }

    // run an outer loop i from 0 to N-1 to repeat the process of bubble sort
    for(i=0; i<6; i++)
    {
        // run an inner loop j for bubble sort from 0 to N-1-i
        for(j=0; j<6-i; j++)
        {
            // now check if the value at num[j] is greater than value at num[j+1]
            if(num[j]>num[j+1])
            {
                // if the value is greater then swap the numbers
                t=num[j];
                num[j]=num[j+1];
                num[j+1]=t;
            }
        }
    }

    // print the sorted list
    cout<<"\n\nArray after Bubble Sort\n";
    for(i=0; i<7; i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;
}

//credits: dremendo.com
