vector<int> ans(nums.size(),0);
        int n=nums.size();
        int sumA=0;//sum after i
        int sumB=0;//sum before i
        for(int i=0;i<n;i++){
            sumA+=nums[i];
        }
        ans[n-1]=(n*nums[n-1])-sumA;//last number
        sumA-=nums[n-1];
        sumB+=nums[n-1];
        int k=1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]==nums[i+1]){
                ans[i]=ans[i+1];
            }else{
                ans[i]=(((n-k)*nums[i])-sumA)+(sumB-nums[i]*(k));
            }
            sumA-=nums[i];
            sumB+=nums[i];
            k++;
        }
        return ans;
