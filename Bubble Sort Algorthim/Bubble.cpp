#include<iostream>
using namespace std;
void Bubble(int Arr[],int row);
void Swap(int &A,int &B);
void Print(int Arr[],int row);
int main(){
	int size;
	cout<<"Enter Size Of Arr:";
	cin>>size;
	int ArrofInt[size];
	// Enter Arr 
	cout<<"Before Sort"<<"\n";
	for(int i=0;i<size;i++){
		cout<<"Item-"<<i+1<<":";
		cin>>ArrofInt[i];
	}
    // invoked Element
    Bubble(ArrofInt,size);
    // Print
    cout<<"After Sort:"<<"\n";
    Print(ArrofInt,size);
	return 0;
}
// Check Ascending (Buuble Sort)
void Bubble (int Arr[],int row){
		int Swap_Bubble;
	bool flag=false;
	for(int A=0;A<row;A++){
		for(int B=0;B<row-A-1;B++){
			if(Arr[B]<Arr[B+1]){
			   Swap(Arr[B],Arr[B+1]);
				flag=true;
			}
		}
		if(flag==false){
		  break;	
		}
		
	}
}
// Swap
void Swap(int &A,int &B){
  int Temp=A;
  A=B;
  B=Temp;	
}
// Print
void Print(int Arr[],int row){
	for(int i=0;i<row;i++){
	  cout<<"item-"<<i+1<<":"<<Arr[i];
	  cout<<endl;	
	}	
}
/***********Run***********/
/*
Enter Size Of Arr:5
Before Sort
Item-1:30
Item-2:40
Item-3:20
Item-4:10
Item-5:50
After Sort:
item-1:50
item-2:40
item-3:30
item-4:20
item-5:10
Press any key to continue . . .
*/
/*******************************/
