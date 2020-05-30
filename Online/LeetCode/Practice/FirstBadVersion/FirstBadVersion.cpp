int firstBadVersion(int n) {

        long long int last=n, beg=1 , mid;
        long long int pos=1;

        while(beg<=last){
            mid= beg + (last-beg)/2;

            bool check=isBadVersion(mid);
            if(check){
                last = mid-1;
                pos=mid;
            }else{
                beg=mid+1;
            }
        }

        return pos;
    }
