#include<iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
    Complex(int r=0, int i=0)
    {
        real=r;
        imag=i;
    }
    Complex operator+(Complex const& obj)
    {
        Complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    void print()
    {
        cout<<"THE Complex number is :"<<endl;
        cout<< real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(10,5),c2(2,4),c3(7,8);
    Complex c4 = c1+c2+c3;
    c4.print();
}
/*OUTPUT
THE Complex number is :
19+17i
*/