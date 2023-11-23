#include <iostream>
using namespace std;
class b
{
public:
    int x;
    public:
    b() { x = 10; }
};
class d : protected b
{
public:
    void display()
    {
        cout << " vlaue of x =" << x;
    }
};
int main()
{
    b b1;
    d d1;
    d1.x = 15;
    cout << d1.x;
}