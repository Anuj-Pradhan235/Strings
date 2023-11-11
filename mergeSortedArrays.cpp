class Solution{
public:
    void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            long long arr[n+m];
            int index=0,i=0,j=0;
            while(i<n && j<m){
                if(arr1[i]<arr2[j])arr[index++]=arr1[i++];
                else arr[index++]=arr2[j++];
            }
            while(i<n)arr[index++]=arr1[i++];
            while(j<m)arr[index++]=arr2[j++];
            i=0,j=0,index=0;
            while(i<n)arr1[i++]=arr[index++];
            while(j<m)arr2[j++]=arr[index++];
            
        } 
};