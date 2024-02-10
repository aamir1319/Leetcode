class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int maxi=max({a,b,c});
        int mii=min({a,b,c});
        int mid=a+b+c-mii-maxi;
        if(mii+mid<maxi)return mii+mid;
        return (a+b+c)/2;
    }
};