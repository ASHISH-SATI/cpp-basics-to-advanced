#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements in the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Sort the array in non-descending order
  sort(arr, arr + n);

  // The second largest element will be the one at index n - 2
  cout << "The second largest element is: " << arr[n - 2] << endl;

  return 0;
}
