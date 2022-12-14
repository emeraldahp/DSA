//https://www.hackerrank.com/contests/mountblue-technologies/challenges/sock-merchant

int sockMerchant(int n, vector<int> ar) {
    int count=0;
    map<int, int> socks;
    for(int i=0; i<n; i++)
    {
        if(socks.find(ar[i])!=socks.end()){
            socks[ar[i]]+=1;
            if(socks[ar[i]]%2==0){
                count++;
            }
            
        }
        else{
            socks.insert(pair<int, int>(ar[i], 1));
        }
    }
    return count;
}