//Some basic pointer work and review
//pointer variable stores an address
//since it stores another address, it "points" to other data
//we have also worked with referenves by passing
//pointers refernce variables and also can make changes to the 
//variables themselves rather than making copies
//pointers in a sense are more "low level"
// note pointer declaration and pointer usage 
//note that vals[i]==*(vals+i);

// int * const ptr=nullptr;
// const ptr to an int 
// const int * const ptr=nullptr;
//constant ptr to a constant int

//dynamic memory allocation 
//you can allocate memory dynamically during run time
// double * dptr=nullptr;
//dptr= new double;
//dynamically alllocated memory is placed on the heap
// after dynamically allocating it needs to be deleted

// C++ 11 has what is called "smart pointers"
//smart pointers automatically delete themselves

#include<memory>
#include <iostream>
int num=5;


using namespace std;
int numOfDonuts(int &donut);
int messWith(int *);

int main() {
	unique_ptr<int>myptr(new int);
	*myptr=456;
	cout<<*myptr<<endl;
	int zz;
	int vals[]{5,8,7,3};
	int * const ptr= &num;
	cout<<"Please enter a value: ";
	cin>>zz;
	int * ptr3=new int(zz);
	cout<<endl<<ptr3;
	cout<<endl<<*ptr3<<endl;
	//this is what is called a constant pointer 
	//once it is assigned an address, you cannot change it
	

	int *valptr=vals;
	int *valptr2=vals+1;
	cout<<*valptr<<endl;
	cout<<*valptr2<<endl;
	cout<<valptr[0]<<endl;
	cout<<*vals<<endl;
	cout<<*(vals+1)<<endl;
	int donut=2;
	int var=5;
	int *ptr1= &var;
	cout<<"here is the mess with val"<<endl;
	cout<<var<<endl;
	messWith(ptr1);
	cout<<"after" <<var<<endl;

	// this is a pointer to an int
	int * intptr=&var; 
	//always initialize pointers to nullptr;
	cout<<"The address of var is(&var) : "<<&var<<endl;
	cout<<"The address of var is (inptr): "<<intptr<<endl;
	cout<<"The value of var is(var): "<<var<<endl;
	cout<<"The value of var is *intptr: "<<*intptr<<endl;

	intptr=&var;
	cout<<"Here is the donut count:  "<<donut;
	numOfDonuts(donut);
	cout<<"\nHere is the donut count after function: "<<donut;
	int x=1;
	cout<<"\nThis is the address that stores x=1(&x): "<<&x;
  cout << "\nHello World!\n";
	delete ptr3;
	return 0;
	
} 
int numOfDonuts(int &donut)
{
	return donut*=donut;
}
int messWith(int * ptr)
{
	*ptr=*ptr * 8;

	return *ptr;

}
