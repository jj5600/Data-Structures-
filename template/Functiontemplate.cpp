/******************************************************************************
Practice Usage with a Function Template

*******************************************************************************/
#include <iostream>

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
    
    double x[]{1.1,1.2,1.3,1.4,1.5};
    display(x,5);
    int num[]{1,2,3,4,5};
    display(num,5);
    
    

    return 0;
}
