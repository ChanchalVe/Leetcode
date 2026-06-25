class Solution {
public:
const long long MOD = 1e9 + 7;
  long long solve( long long x, long long n){
    if( n == 0){
        return 1;
    }

    long long half = solve(x , n/2);
    if(n % 2 == 0){
        return (half * half)  % MOD;
    }
    return (x * half * half) % MOD;
  }

    int countGoodNumbers(long long n) {

        long long evenpos = (n+1)/2;
        long long oddPos = n/2;

        long long ans = 1;

        ans = (solve(5, evenpos) * solve(4 , oddPos)) % MOD;
        return ans;
        
    }
};