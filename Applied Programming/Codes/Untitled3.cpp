#include <iostream>
using namespace std;
 
int main()
{
    int a[4][5],sum=0;
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 5; j++) 
		{
			cin>>a[i][j];
        }
        
    }
    for (int i = 0; i < 4; i++) 
	{
		sum+=a[i][i];
       //cout<<endl;
    }
    cout<<sum;
 
    return 0;
}
