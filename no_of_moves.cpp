#include <iostream>
using namespace std;
#define prev_x 2  //assume that 1 present at 1st from row
#define prev_y 2   //assume that 1 present at 2st from col
 
int main()
{
 
	int arr[5][5];
	int after_x, after_y;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];  // now tum apana matrix put karo 
			if (arr[i][j] == 1)// 1 ka position find  karo 
			{
				after_x = i;
				after_y = j;
			}
		}
 
	}
 
 
// yah absolute deference nikalne ka code hai (after-prev)
int x=(after_x-prev_x);
int y=(after_y-prev_y);
if (x<0)
{
	x=-x;
}
 
if (y<0)
{
	y=-y;
}
  int n0_of_moves=(x+y);// add no. of swap.
  cout<<n0_of_moves;// result
	return 0;
}