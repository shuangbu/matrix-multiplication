#include<fstream>  //for ifstream
#include<sstream>  //for istringstream 
#include<vector>   //for vector
#include<string> 
using namespace std;
float a;

vector<vector<float> > input(string mat1)
{

//extract the matrix 'num'
	ifstream f;
	f.open(mat1);  //read file to f
 
	string str;
	vector<vector<float> > num;  //set num to be a two-dimensional array
	                             
	while(getline(f, str))  // read a row elements from f and give them to str
	{
		istringstream input(str); //creat and initialize istringstream 'input' which is connected with str
		vector<float> tmp;  //set tmp to be a array
		float a;
		while(input >> a)  // give an element from input to a
		tmp.push_back(a); //add a to the end of the array of tmp
		num.push_back(tmp);  //add tmp to the end of row of num
	}

	return num;
}
