#include <iostream>
using namespace std;

class SUM
{
    private:
    int m_x, m_y, m_sum;
    public:
    SUM()
    {
        m_x = 0;
        m_y = 1;
    }

    SUM(int x, int y)
    {
        m_x = x;
        m_y = y;
    }

    void initialization()
    {
        cout << "Enter \"x\" and \"y\" ";
        cin >> m_x >> m_y;
    }

    void outpul()
    {
        cout << "x = " << m_x << endl;
        cout << "y = " << m_y << endl;
        cout << "Sum \"x\" and \"y\" = " << m_sum << endl;
    }

    void amount()
    {
        m_sum = m_x +m_y;
        cout << "Sum \"x\" and \"y\" = " << m_sum << endl;
    }

};

int main()
{
    SUM s1, s2;
    SUM *ps = &s2;
    s1.initialization();
    s1.amount();
    s1.outpul();
    ps->amount();
    ps->outpul();
  

    return 0;
}


