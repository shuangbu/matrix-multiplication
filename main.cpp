#include<iostream>
#include<string> 
#include<vector> 
using namespace std;

vector<vector<float>> input(string mat1);  //state a external function 'input' which can input a matrix form txt file

vector<vector<float>> timemat(vector<vector<float>> mat1, vector<vector<float>> mat2); //state a external function 'timemat' which is matrix multiplication

string data1="data1.txt";
string data2="data2.txt";
 
int main()
{
	float a;
	vector<vector<float>> mat1,mat2,mat3; //set mat1 mat2 mat3 to be a two-dimensional array 
	mat1 = input(data1); //obtain mat1 and mat2 by using function 'input'
	mat2 = input(data2);
	cout << "answer1 is "<<mat1[0][0]<<endl;
	cout << "answer2 is "<<mat2[0][0]<<endl;
	mat3=timemat(mat1,mat2); //mat3=mat1*mat2 by using function 'timemat'
	a=mat3[0][0];
	cout << "answer3 is "<<a<<endl;
	for(int i=0; i< mat3.size(); i++)
    {
        for(int j=0;j<mat3[i].size();j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}