
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& dis, int start, int destination) {
        int s = min(start, destination);
        int d = max(start, destination);
        int ans= accumulate(dis.begin()+s,dis.begin()+d,0);
        int total = accumulate(dis.begin(),dis.end(),0);
        return min(ans,total-ans);
    }
};
