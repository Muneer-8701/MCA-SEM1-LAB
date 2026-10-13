#include<iosteam>
using namespace std;

void transpose(int matrix[10][10],int rows,int cols)
{
	cout <<"\nTranspose of matrix: \n"
    
    for(int i=0;i<cols;i++)
    {
    	for (int j=0;j<rows;j++)
    	
    	 {
    	 	cout<<matrix[j][i];
		 }
	}


}
