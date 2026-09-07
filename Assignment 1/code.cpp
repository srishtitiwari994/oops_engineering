#include <iostream> using namespace std;

// Finds the factorial of a number int fact(int p)
{
int res = 1;

for(int i = p; i > 1; i--)
{
res *= i;
}

return res;
}

// Finds the binomial coefficient int Binocoef(int n, int r)
{
int coef;
coef = fact(n) / (fact(r) * fact(n-r)); return coef;
}

// Prints the Pascal Triangle void printTriangle(int n)
{
for(int l = 0; l < n; l++)
{
for(int m = 0; m <= l; m++)
{
cout << "\t" << Binocoef(l, m);
}
 
cout << "\n";
}
}

int main()
{
int n;

cout << "Enter the no. of rows: "; cin >> n;

// Display the triangle printTriangle(n);

return 0;
}


