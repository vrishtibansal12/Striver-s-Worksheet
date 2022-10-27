int gap,p1,p2;
        
        //EDGE CASES(not necessary but results in faster run time for testcases!)
        if(m == 1 && n == 0) return;
        
        if(m == 0 && n == 1){
            nums1[0]=nums2[0];
            return;
        }
        //EDGE CASES(not necessary but results in faster run time for testcases!)
        
        
        for(int i=m;i<m+n;++i){
            nums1[i]=nums2[i-m];
        }
        
        if((m+n)%2 == 0) gap = (m+n)/2;
        else gap = (m+n+1)/2;
        
        while(gap>=1){
            
            p1=0;
            p2=gap;
            
            while(p2<m+n){
                
                if(nums1[p1]>nums1[p2]){
                    int k = nums1[p1];
                    nums1[p1] = nums1[p2];
                    nums1[p2] = k;
                }
                
                ++p1;
                ++p2;
            }
            
            if(gap == 1) break;
            
            if(gap%2 == 0) gap = gap/2;
            else gap = (gap+1)/2;
        }
        