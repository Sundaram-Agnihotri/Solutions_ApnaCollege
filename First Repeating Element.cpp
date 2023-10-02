int firstRepeated(int arr[], int n) {
        // code here
       int ans=-1;
       unordered_map<int, int> umap;
         
      for(int i=0;i<n;i++){
       umap[arr[i]]++;
      }
      
      for(int i=0;i<n;i++){
         if(umap[arr[i]]>1){
        ans=i+1;
        break;
         }
      }
      return ans;
