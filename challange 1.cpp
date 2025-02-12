#include<iostream>
using namespace std;
int main ()
{
	int rows,cols,i,j,sum=0,z=6;
	cout<<"----Size of Array----"<<endl;
	cout<<"Enter Value of Rows:";
	cin>>rows;
	cout<<"Enter Value of Column:";
	cin>>cols;
	int arr[rows][cols];

	cout<<"----Give Values to Array----"<<endl;
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) {
        	cout << "Enter the elements of the array:";
            cin >> arr[i][j];
        }
	cout<<"----Displaying Array----"<<endl;
    for (int i = 0; i < rows; i++) 
	{
	    for (int j = 0; j < cols; j++) 
		{
        	cout<<arr[i][j]," "; 
	    }
      cout<<endl;
	}
for (int i = 0; i < rows; i++) 
    for (int j = 0; j < cols; j++)
        if (arr[i][j] == z) 
            sum++;

cout<<"No. of times "<<z<<" appeared in Array: "<<sum;
	
	return 0;
}