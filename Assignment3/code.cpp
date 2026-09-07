#include <iostream> using namespace std;

// Read array elements void accept(int &a, int c[])
{
cout << "\nEnter number of array elements: "; cin >> a;

cout << "\nEnter array elements: "; for(int i = 0; i < a; i++)
{
cin >> c[i];
}
}

// Display the array
void display(int m, int arr1[])
{
cout << "The array is:\n";

for(int i = 0; i < m; i++)
{
cout << arr1[i] << endl;
}
}

// Swap two numbers void swap(int &a, int &b)
 
{
int temp = a;
a = b;
b = temp;
}

// Sort the array
void sort(int m, int arr1[])
{
for(int i = 0; i < m - 1; i++)
{
for(int j = 0; j < m - i - 1; j++)
{
if(arr1[j] > arr1[j + 1])
{
swap(arr1[j], arr1[j + 1]);
}
}
}
}

int main()
{
int n, arr[10]; accept(n, arr);
cout << "\nThe unsorted array is:" << endl; display(n, arr);

sort(n, arr);

cout << "\nThe sorted array is:\n"; display(n, arr);

return 0;
}
 
