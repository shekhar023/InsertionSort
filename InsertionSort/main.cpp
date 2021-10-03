//
//  main.cpp
//  InsertionSort
//
//  Created by Shekhar Chaudhary on 03/10/21.
//

#include <iostream>

using namespace std;

void printArray(int array[], int size)
{
    for(auto index = 0 ; index < size ; index++)
    {
        cout<<array[index]<<" ";
    }
    cout<<endl;
}

void Insert(int array[], int size, int pointer)
{
    for(auto index = pointer - 1; index >= 0 ; --index)
    {
        if(array[index] > array[index +1])
        {
            swap(array[index], array[index +1]);
        }
        else
        {
            break;
        }
    }
}

void InsertionSort(int array[], int size)
{
    for( int pointer = 0; pointer < size ; ++pointer)
    {
        Insert(array,size, pointer);
    }
}

int main(int argc, const char * argv[]) {
    
    int size;
    cout << "Enter Size of Array"<< endl;
    cin>>size;
    
    int *array = new int[size];
    
    cout<<"Enter "<< size <<" elements"<<endl;
    
    for(auto index = 0; index < size; index++)
    {
        cin>>array[index];
    }
    cout <<" Array before Insertion Sort" <<endl;
    printArray(array,size);
    InsertionSort(array,size);
    cout <<" Array after Insertion Sort" <<endl;
    printArray(array,size);
   
    return 0;
}
