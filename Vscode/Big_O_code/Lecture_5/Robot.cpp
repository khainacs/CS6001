#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> s, cnt;
void read(int a[],int b[], int n, int l, int r)
{
    cin >> n >> l >> r;
    s.emplace_back(l);
    s.emplace_back(r);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        s.emplace_back(a[i]);
        s.emplace_back(b[i]);
    }
}
#define find(x, v) (lower_bound(x.begin(), x.end(), v) -x.begin()+1)
void solve(int a[])
{
    sort(s.begin(), s.end());
    s.resize(unique(s.begin(), s.end()) - s.begin());
    cnt.resize(s.size()+3, 0);
    for(int i = 1; i <= n; i++)
    {
        cnt[find(s, a[i])]++;
        cnt[find(s, b[i])]--;
    }
    vector <int> one;
    for(int i = 1; i <= (int)s.size(); i++)
    {
        cnt[i] +=  cnt[i - 1];
        if (cnt[i] == 1)
        {
            one.emplace_back(s[i - 1]);
        }
    }
    int answer = 0;
    for (int i = 0; i <= n; i++)
    {
        int x = max(l, a[i]);
        int y = min (r, b[i]);
        if (lower_bound(one.begin(), one.end(), y) - lower_bound(one.begin(), one.end(), x) <= 0)
        {
            answer = max(answer, b[i] - a[i]);
        }
    }
    cout << answer << endl;
}
int main()
{
    int N = 1e5;
    int n, l, r, a[N+7], b[N+5];
    read(a, b, n, l, r);
    solve(a);
    
}