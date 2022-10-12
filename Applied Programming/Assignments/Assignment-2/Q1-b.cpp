#include <iostream>
using namespace std;
 
int main()
{
    int a[4][5];
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
			cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) 
		{
			if(a[i][j]%3==0 && a[i][j]%5==0)
			{
				cout<<a[i][j]<<"\t";
			}
        }
       //cout<<endl;
    }
 
    return 0;
}
