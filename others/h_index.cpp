//nlogn solution
//if output has too be number in the array

int hIndex(vector<int>& c) {
    sort(c.begin(),c.end());
    int i;
    int n=c.size();
    for(i=n-1;i>=0;i--){
        if(i+c[i]==n){

            return c[i];
        }
    }
    return 0;
}
