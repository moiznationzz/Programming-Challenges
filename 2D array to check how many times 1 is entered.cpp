#include<iostream>
using namespace std;
int main ()
{
	int rows,cols,i,j,sum=0;
	cout<<"----Size of Array----"<<endl; //determine size of array
	cout<<"Enter Value of Rows:";
	cin>>rows;
	cout<<"Enter Value of Column:";
	cin>>cols;
	int arr[rows][cols];

	cout<<"----Give Values to Array----"<<endl; //Give values to Array
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) {
        	cout << "Enter the elements of the array:";
            cin >> arr[i][j];
        }
	cout<<"----Displaying Array----"<<endl; //Display the Array
    for (int i = 0; i < rows; i++) 
	{
	    for (int j = 0; j < cols; j++) 
		{
        	cout<<arr[i][j]," "; 
	    }
      cout<<endl;
	}                                   //check how many time the value is entered in this program
for (int i = 0; i < rows; i++) 
    for (int j = 0; j < cols; j++)
        if (arr[i][j] == 1) 
            sum++;
cout<<"No. of times 1 appeared in Array: "<<sum;
	
	return 0;
}