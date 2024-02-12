class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int i,candidate=-1,vote=0;
        int n=arr.size();
	for(i=0;i<n;i++){
		if(vote==0){
			candidate=arr[i];
			vote=1;
		}
		else{
			if(arr[i]==candidate)
				vote++;
			else
				vote--;
		}
	}
	int count=0;
	for(i=0;i<n;i++){
		if(arr[i]==candidate)
			count++;
	}
	if(count>n/2)
		return candidate;
	return -1;
	
}
};