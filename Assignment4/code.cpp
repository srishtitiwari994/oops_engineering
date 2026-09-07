#include <iostream> using namespace std;

class Complex
{
private:
int real, img;

public:
// Take real and imaginary parts void accept(int r, int i)
{
real = r; img = i;
}

// Display the complex number void display()
{
if(img >= 0)
cout << real << " + i" << img << endl; else
cout << real << " - i" << -img << endl;
}

// Add two complex numbers Complex addition(Complex X)
{
Complex add;
add.real = real + X.real;
 
add.img = img + X.img; return add;
}

// Subtract two complex numbers Complex subtract(Complex X)
{
Complex sub;
sub.real = real - X.real; sub.img = img - X.img; return sub;
}

// Multiply two complex numbers Complex multiply(Complex X)
{
Complex mul;
mul.real = (real * X.real) - (img * X.img); mul.img = (real * X.img) + (img * X.real); return mul;
}

// Divide two complex numbers Complex division(Complex X)
{
Complex div;
int denominator = (X.real * X.real) + (X.img * X.img);

div.real = ((real * X.real) + (img * X.img)) / denominator; div.img = ((img * X.real) - (real * X.img)) / denominator;

return div;
}

// Change the sign of imaginary part Complex conjugate()
{
Complex con; con.real = real; con.img = -img;
 
return con;
}
};

int main()
{
Complex C1, C2, C3;

cout << "Enter first complex number:\n"; C1.accept(3, -5);
C1.display();

cout << "\nEnter second complex number:\n"; C2.accept(4, 5);
C2.display();

cout << "\nAddition of Complex Numbers:\n"; C3 = C1.addition(C2);
C3.display();

cout << "\nSubtraction of Complex Numbers:\n"; C3 = C1.subtract(C2);
C3.display();

cout << "\nMultiplication of Complex Numbers:\n"; C3 = C1.multiply(C2);
C3.display();

cout << "\nDivision of Complex Numbers:\n"; C3 = C1.division(C2);
C3.display();

cout << "\nComplex Conjugate of C1:\n"; C3 = C1.conjugate();
C3.display();

return 0;
}
 
Output
