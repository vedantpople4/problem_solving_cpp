class Solution {
public:
int min(int a,int b)
{
if(a<b)
return a;
else
return b;
}
int minCostToMoveChips(vector& position) {
int odd=0,even=0;
for(int i=0;i<position.size();i++)
{
if(position[i]%2==0)
even++;
else
odd++;
}return min(odd,even);
}
};
