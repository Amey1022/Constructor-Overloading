#include <iostream>
using namespace std;
class Cal
{
    public:
    int add(int a, int b)
    {
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
    int multi(int a,int b )
    {
        return a*b;
    }
    float multi(int a, float b, float c)
    {
        return a*b*c;
    }
    float div(float a, float b)
    {
        return a/b;
    }
};
int main()
{
    Cal c;
    cout<<c.add(10,20)<<endl;
    cout<<c.add(10,20,30)<<endl;
    cout<<c.multi(15,5)<<endl;
    cout<<c.multi(5,10.5,5.4)<<endl;
    cout<<c.div(10.5,5)<<endl;
    return 0;
}
/*OUTPUT
30
60
75
283.5
2.1
*/