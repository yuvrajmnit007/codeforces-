void merge(int nums[],int i,int mid,int j){
    int nums2[j-i];
    int p=i;
    int q=mid+1;
    int t=0;
    while(p<=mid && q<=j){
        if(nums[p]<=nums[q]){
            nums2[t]=nums[p];
            p++;
            t++;
        }else{
            nums2[t]=nums[q];
            q++;
            t++;
        }
    }
    if(p<mid){
        while(p<=mid){
            nums2[t]=nums[p];
            p++;
            t++;
        }
    }else{
        while(q<=j){
            nums2[t]=nums[q];
            q++;
            t++;
        }
    }
    for(int m=0;m<j-i;m++){
        nums[i]=nums2[i];
    }
}
void mergesort(int nums[], int i, int j){
    if(i<j){
        int mid=i+(j-i)/2;
        mergesort(nums,i,mid);
        mergesort(nums,mid+1,j);
        merge(nums,i,mid,j);
    }
}