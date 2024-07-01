#include <iostream>
using namespace std;

void helper(int n, int &ans)
{
    // Base condition
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n << '*';
    helper(n - 1, ans);
    ans *= n;
}
int main()
{

    int n, ans = 1;
    cout << "Enter the number " << endl;
    cin >> n;
    helper(n, ans);
    cout << "value" << ans;
    return 0;
}