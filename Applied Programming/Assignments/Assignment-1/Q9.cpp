//9. What does the following program print?
using std::cout;
using std::endl;
int main()
{
	int y, x = 1, total = 0;

	while (x <= 10) 
	{ 
		y = x * x;
		cout << y << endl; 
		total += y;
		++x;
	}
	cout << "Total is " << total << endl; return 0;
}
/*
ANS:
	Output: std::cout; was not decelerated in the Scope.
*/
