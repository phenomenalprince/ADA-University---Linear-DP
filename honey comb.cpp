 /*
    “Don't raise your voice, improve your argument."
                                      - Desmond Tutu
*/

        #include <bits/stdc++.h>
        using namespace std;
        
        #define ll long long int
        #define sonic               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        int main()
        {
            int n;
            cin >> n;
            int dp[n+1];
            memset(dp,0,sizeof(dp));
            dp[0]=0,dp[1]=1,dp[2]=1;
            for (int i=3;i<=n;i++)
            {
                dp[i] = dp[i-1] + dp[i-2];
            }
            cout << dp[n] << endl;
            
            return 0;
        }

