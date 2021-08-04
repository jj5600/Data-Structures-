/******************************************************************************
Practice Usage with a Vector
*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
template <typename ElementType>
void display(ElementType array[], int numElements)
{
    for(int i=0;i<numElements;i++)
    {
        
        
        cout<<array[i]<<" ";
       
        
        
    }
    
    cout<<endl;
    
}

int main()
{   
    vector<double> dubVector(5,5.1);
    vector<double> dubVtwo(3,3.3);
    for (int i = 0; i < dubVector.size(); i++) {cout << dubVector[i]<<"\t";}
    cout<<endl;
    dubVector.push_back(2.2);
    dubVector.swap(dubVtwo);
    for(int i=0; i<dubVector.size();i++){cout<< dubVector[i]<<"\t";}
    cout<<endl;
    cout<<dubVector.max_size()<<endl;
    double x[]{1.1,1.2,1.3,1.4,1.5};
    display(x,5);
    int num[]{1,2,3,4,5};
    display(num,5);
    
    

    return 0;
}


