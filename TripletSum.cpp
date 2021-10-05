#include<bits/stdc++.h>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
  int k;
  cin >> k;
  sort (arr, arr + n);
  int l;
  int r;
  for (int i = 0; i < n-2; i++)
    {
      l = i+1;
      r = n - 1;
      while (l < r)
	{

	  if (arr[i] + arr[l] + arr[r] == k)
	    {
	      cout << arr[i] << " " << arr[l] << " " << arr[r] << "\n";
          break;
	    }

	  else if (arr[i] + arr[l] + arr[r] > k)
	    {
	      r--;
	    }
	  else
	    {
	      l++;
	    }

	}
    }
}
