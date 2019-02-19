void merge(int* nums1, int m, int* nums2, int n) {
    int *tmp=(int*)malloc(sizeof(int)*(m+n));
    int f1=0, f2=0, ft=0;
    while(f1<m && f2<n){
		if(nums1[f1]<nums2[f2]){
			tmp[ft++] = nums1[f1++];
		}else{
			tmp[ft++] = nums2[f2++];
		}
	}
	while(f1<m){
		tmp[ft++] = nums1[f1++];
	}
	while(f2<n){
		tmp[ft++] = nums2[f2++];
	}
    
    ft = 0;        
	while(ft<(m+n)){
		nums1[ft++] = tmp[ft];
	}
}