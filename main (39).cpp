#include <iostream>
using namespace std;
int
main ()
{
  int i = 1;                   // abcd
                                //abcd
  int n;                       // abcd
                               // abcd
  


  cin >> n;
  while (i <= n)
    {
      char k = 'a';
      int j = 1;
      while (j <= n)
	{
	  cout << k;
	  k++;
	  j++;
	}
      cout << endl;
      i++;
    }
}
