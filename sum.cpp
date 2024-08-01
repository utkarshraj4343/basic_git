#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b + 2;
}
int main()
{
    int a = 4;
    int b = 5;
    int ans = add(a, b);
    cout << ans << endl;
    return 0;
}