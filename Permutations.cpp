class Solution {
private:
void per(int i, vector<int>& arr, vector<vector<int>>& ans)
{
   if(i==arr.size())
   {
       ans.push_back(arr);
       return;
   }
   for(int j=i; j<arr.size(); j++)
   {
       swap(arr[i], arr[j]);
       per(i+1, arr, ans);
       swap(arr[i], arr[j]);
   }
}
public:
    vector<vector<int>> permute(vector<int>& arr) 
    {
        vector<vector<int>> ans;
        per(0, arr, ans);
        return ans;
    }
};
