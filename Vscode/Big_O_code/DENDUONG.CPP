/*
Trong đêm, An đi dạo dọc theo con đường thẳng có chiều dài L. 
Con đường được chiếu sáng bởi nn bóng đèn điện.

Xét hệ tọa độ trong đó điểm bắt đầu của con đường có tọa độ 0 còn đầu kia của con đường có tọa độ L.

Bóng đèn thứ i được gắn tại điểm có tọa độ a_i​
​Mỗi bóng đèn chiếu sáng tất cả những điểm nằm trong khoảng cách không vượt quá dd. 
Trong đó dd là một số dương.

Hãy tìm giá trị d nhỏ nhất sao cho toàn bộ con đường được chiếu sáng.

Dữ liệu nhập
Trên dòng đầu tiên ghi hai số nguyên n,L, lần lượt cho biết số lượng bóng đèn và chiều dài con đường (1 <= n <= 10^5, 1 <= L <= 10^9)

Trên dòng tiếp theo ghi nn số nguyên a_i(0 <= a_i <= L)

Một số bóng đèn có thể cùng đặt tại một điểm. Các bóng đèn cũng có thể đặt tại các điểm đầu hoặc cuối con đường.

Dữ liệu xuất
Một số thực dd với hai số lẻ ở phần thập phân.

Ví dụ
input
7 15
15 5 3 7 9 14 0
output
2.50
*/
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
void Denduong(long L, long n, double light[])
{
    /*
    ///cin >> n;
    ///cin >> L;
    for (int i = 0; i < n; i++)
    {
        cin >> light[i];
    }
    */
    double distance = light[0];
    sort(light, light+n);

    distance = max(light[0], L - light[n-1]);
    for (int i = 0; i < n-1; i++)
    {
        
        distance = max((light[i+1] - light[i]) / 2.0, distance);
    }
    
    
    
    cout << setiosflags(ios::fixed) << setprecision(2) << distance << endl;
    
    
}

int main()
{
    long L = 15;
    long n = 7;
    double light[20] = {15, 5, 3, 7, 9, 14, 0};
    Denduong(L, n, light);
}