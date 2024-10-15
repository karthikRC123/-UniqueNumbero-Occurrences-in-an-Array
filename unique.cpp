class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr)
    {
        map<int,int>hash;
        for(int i=0;i<arr.size();i++)
        {
            hash[arr[i]]++;
        }
       
        priority_queue<int>s;
        for(auto x:hash)
        {
            s.emplace(x.second);
        }
        int max1=99999999;
        while(!s.empty())
        {
           
            if(max1==s.top())
            {
            return false;
            break;
            }
            else
            max1=s.top();
            s.pop();
        }
        return true;
    }
};
