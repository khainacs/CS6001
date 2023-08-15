/*
làm sao có thể giải bài toán này?
    ba điều kiện earn rating
    If the player has never completed the level before and completes it with a 1-star rating, 
        that player earns 1 star.
    If the player has never completed the level before and completes it with a 2-star rating, 
        that player earns 2 stars.
    If the player has only completed the level before with a 1-star rating 
        and completes it this time with a 2-star rating, the player earns 1 more star.
    từ đề bài ta có thể hiểu là 
        với số sao hiện tại, ta có thể ăn những level i 1 star or 2 star 
                                mà tổng số sao tăng lên là lớn nhất
            -> vì thế ta có thể nghĩ tới greedy

    Nhưng chúng ta greedy như thế nào ?
        có thể nhìn rõ ràng là ta phải bắt đầu với 2 star ở mỗi level i
        + 2 star: chúng ta có thể earn rating 2 star ở level i nào?
                        + đó phải là rating chưa earn
                        + Số sao cần phải nhỏ hơn hoặc bằng số sao hiện tại ta có
                        + Nhưng nếu hai level đều có rating level điều 
                            phù hợp điều kiện trên -> thì ta phải làm sao?
                                        + Ưu tiên level có rating 1 lớn hơn 
                                            BỞI vì ăn đc 2 rating ở level này nữa
                                            thì ta sẽ ko cần xét lại rating 1 nữa
                                            -- mỗi lần hoàn 1 rating ta phải mất
                                            1 số lượng sao, vì thế phải giảm số
                                            lượng sao tối thiệu phải mất
        + 1 star:   
                + rating chưa earn
                + số phải nhỏ hơn
                + If the player has never completed the level before
                 and completes it with a 2-star rating, that player earns 2 stars.
                 câu này khá quan trọng, chúng ta có hiểu là giảm thiểu chọn level
                 mới mà earn để có earn số sao lớn nhất mà số bước giảm thiểu
                 -> nếu ở level này mà 2 rating đã earn nó cũng sẽ đc xem xét
                + phải chọn level có rating 2 là nhỏ nhất để có thể earn luôn 
                ở turn sau         
                + nếu earn

    - chúng ta nên tính kết quả như nào ?
        + Trong ba điều kiện earn rating -> hiểu là nêu chúng ta ăn đc 2 star rồi,
        không nhất thiết phải xét lại level đó nữa, bởi vì rating 1 lúc đó
        là vô nghĩa
        -> vì thế chúng ta có thể đánh dấu lại những rating nào đã earn
        ->  đánh dáu như nào ?
            có thể dánh dấu là -1, thì biết nó có thể ăn hết hay không
                    ví dụ như : 2
                            level 1  0 1
                            level 2  0 2
                        lúc đầu earnStar = 0
                        step 1: earn level 1 rating 1 -> earnStar += 1 và đánh dấu lại = -1
                        step 2: earn level 1 rating 2 -> earnStar += 1 -> earnStar = 2 và đánh dấu lại = -1
                        step 3: earn Level 2 rating 2 -> kết thức và đánh dấu lại = -1 và dánh lại = -1
                                                            nhưng chưa hết đánh dấu luôn rating 1
                                                            -> như đã nói ở trên nếu đã earn đc rating 2, thì
                                                            rating 1 đã trở nên vô nghĩa nên đánh dấu nó là -1

                        after: 2
                            Level 1  -1 -1
                            Level 2  -1 -1

                            -> có đã ăn hết rating 2 every level 
                            suppose: ta có biến score tính điểm hết tất cả các rating level
                                nếu score == -2*N thì là done
                                unless thì too bad                            

*/
#include<iostream>
using namespace std;
void solve(){
    freopen("input_Kingdom", "r", stdin);
    int n;
    cin >> n;
    int level1[n];
    int level2[n];
    for (int i = 0; i < n; i++){
        cin >> level1[i] >> level2[i];
    }
    int star = 0; //total of  star
    int turn = 0; //to know how many step to earn every 2 rating
    int isDone = false; //earn every 2 rating or not ?
    int flag = true; //should stop loop or not
    while(flag){
        flag = false;
        int max_two = -1; //the best choice rating 2 that we have in this case
        for (int i = 0; i < n; i++){
            if (level2[i] != -1 && level2[i] <= star && (max_two == -1 || level1[max_two] < level1[i])){
                max_two = i;
            }
        }
        if (max_two != -1){
            flag = true;
            level2[max_two] = -1; //đánh dấu lại vị trí nào đã earn
            turn += 1;
            if (level1[max_two] != -1){
                star += 2;
            }
            else{
                star += 1;
            }
            continue;
        }

        int one_max = -1;
        for (int i = 0; i < n; i++){
            if (level1[i] != -1 && level1[i] <= star && (one_max == -1 || level2[one_max] < level2[i] || level2[i] == -1)){
                one_max = i;
                if (level2[i] == -1){
                    break;
                }
            }
        }

        if (one_max != -1){
            flag = true;
            turn += 1;
            level1[one_max] = -1;
            star += 1;
            continue;
        }
        int score = 0;
        for (int i = 0; i < n; i++){
            score += level1[i] + level2[i];
        }
        isDone = (score == -2*n);
        break;
    }
    if (isDone){
        cout << turn << endl;
    }
    else{
        cout << "Too bad" << endl;
    }

}
int main(){
    solve();
}