//this is leetcode 1752 question
//check if the array is sorted and rotated
//approach: 1.find by how many rotation index the given array is
//          2.then by getting the value of rotation ,make new vector of same size and rotate it by that value and store it in new array.
//          3.then check the new array if it is in increasing order or not.
class Solution {
public:
    int check_rotation_index(vector<int>& nums,int size){
        for (int i = 0; i <size-1; i++) {  
        if (nums[i] > nums[i + 1]) {
            return size-(i+1); //this gives the rotation index
        }
    }
         return 0;
    }
    bool check(vector<int>& nums) {
      int size=nums.size();
      int x=check_rotation_index(nums,size);
      if(x==0){
        return true;
      }
      else{  
      vector<int> b(size);
      for(int i=0;i<size;i++){
        b[(i+x)%size]=nums[i];
      }
      for(int j=0;j<size-1;j++){
        if(b[j]>b[j+1]) return false;
      }
      return true;
      }
    
    }
};
