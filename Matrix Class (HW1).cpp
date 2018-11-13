// CANBERK TOPAL 040160057 OBJECT ORIENTED PROGRAMMING 1. HOMEWORK

#include <iostream>

using namespace std;

const int N = 3;		//N is a constant symbol which has a value of 3

class Matrix{
	
public:
								
	int array [N][N];				// NXN integer array
	
	Matrix(){ 					//default constructor
		for(int i = 0 ; i < N ; i++){
				for(int j = 0 ; j <N ; j++ ){
					array[i][j] = 0;
				}
			}
	}
	
	Matrix(int data[N][N]){				//parametrized constructor with Two Dimensional Array argument
		for(int i = 0 ; i < N ; i++){
			for(int j = 0 ; j <N ; j++ ){
				array[i][j] = data[i][j];
			}
		}
	}
	
	Matrix operator+ (Matrix Other){		//overloading the + operator
	
int localArray [N][N];
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
		
			localArray[i][j]= this->array[i][j]+Other.array[i][j];
			
	}
		
	}
	
	return localArray;
	
	}

	Matrix Transpose(){						//Transpose Function
		
		int Temp[N][N];	
	
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
		
			Temp[i][j] = array[j][i];
			
		}	
		
	}
	
	return Matrix(Temp);	
		
	}

};


ostream& operator<<(ostream& ekran,Matrix Mat){			//non-member overloaded << operator
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			
			cout<< Mat.array[i][j]<< " ";
			
		}
		cout<<endl;
	}

	return ekran;
		
}

int main()
{

int data1 [N][N] = { {1,2,3} , {4,5,6} , {7,8,9} };
int data2 [N][N] = { {10,20,30} , {40,50,60} , {70,80,90} };

Matrix A= Matrix(data1);
Matrix B= Matrix(data2);
Matrix C, T;

cout <<"A Matrix = \n"<<A<<endl<<"B Matrix = \n"<<B<<endl;

C = A + B;

cout<<"C = A+B \n"<<C<<endl;

T = A.Transpose();

cout<<"T= A' \n"<<T<<endl;



return 0;




}


