#include <iostream>
#include<vector> 
using namespace std;

vector<vector<float> > timemat(vector<vector<float>> mat1, vector<vector<float>> mat2)
{
	int row1,column1,row2,column2;
    row1=mat1.size(); 
    column1=mat1[0].size();
	row2=mat2.size();
    column2=mat2[0].size();
	
	vector<vector<float> > newmat; 


	for (int i=0;i<row1;i++)
	{
		vector<float> tmp1; 
		for (int j=0;j<column2;j++)
		{
			float temp=0;
			for (int n=0;n<column1;n++)
			{
				temp+=mat1[i][n]*mat2[n][j];
			}
			tmp1.push_back(temp);
		}
		newmat.push_back(tmp1);
	}
	return newmat;		
}




