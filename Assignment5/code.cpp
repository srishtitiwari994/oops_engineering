#include <iostream> using namespace std;

// Add two integers int add(int a, int b)
{
return a + b;
}

// Add three integers
int add(int a, int b, int c)
{
return a + b + c;
}

// Add two float numbers float add(float a, float b)
{
return a + b;
}

int main()
{
cout << "Addition of 2 numbers = " << add(10, 20) << endl; cout << "Addition of 3 numbers = " << add(10, 20, 30) << endl;
cout << "Addition of 2 float numbers = " << add(10.5f, 20.5f) << endl;

return 0;
}
