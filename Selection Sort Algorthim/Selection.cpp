#include<iostream>
using namespace std;
void Swap(int &A,int &B);
int main(){
	int ArrOfInt[]={40,20,10,30};
	int size=sizeof(ArrOfInt)/sizeof(ArrOfInt[0]);
	cout<<"Befotre Sorting:"<<"\n";
	for(int A=0;A<size;A++){
		cout<<"Item-"<<A+1<<":"<<ArrOfInt[A]<<"\n";
	}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(ArrOfInt[j]<ArrOfInt[i]){
			   Swap(ArrOfInt[j],ArrOfInt[i]); 	 
	     	}
		}
	}
	cout<<"After Sorting :"<<"\n";
	for(int A=0;A<size;A++){
		cout<<"Item-"<<A+1<<":"<<ArrOfInt[A]<<"\n";
	}
  return 0;
}
void Swap(int &First,int &Second){
	int Temp=First;
	First=Second;
	Second=Temp;
}