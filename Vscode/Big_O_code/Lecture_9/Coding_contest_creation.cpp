#include<iostream>
using namespace std;
int problem[100001];
int main()
{
    int test_case;
    cin >> test_case;
    for (int index = 0; index < test_case; index++)
    {
        int element;
        cin >> element;
        for (int i = 0; i < element; i++)
        {
			cin >> problem[i];
        }
    	int contest = 0;
    	int answer = 0;
    	for (int i = 0; i < element; i++)
        {
        	if (contest == 4)
            {
            	contest = 0;
            }
        	if (contest > 0)
            {
            	if (problem[i] <= problem[i-1])
                {
                	answer += 4- contest;
                	contest = 0;
                }
            	else if (problem[i] - problem[i-1] > 10)
                {
                	int temp = problem[i-1];
                	int needed = 10;
                	while(problem[i] - temp > 10)
                    {
                    	temp += 10;
                    	needed++;
                    }
                	if(needed > 3 - contest)
                    {
                    	answer += 4 - contest;
                    	contest = 0;
                    }
                	else 
                    {
                    	contest += needed;
                    	answer += needed;
                    }
                } 
            }
        	contest++;
        }
    	answer += 4 - contest;
        cout << "Case #" << index + 1 << ": " << answer << endl;
   }
}