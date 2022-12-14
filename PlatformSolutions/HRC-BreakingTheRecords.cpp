//https://www.hackerrank.com/contests/mountblue-technologies/challenges/breaking-best-and-worst-records

vector<int> breakingRecords(vector<int> scores) {
    int min, max;
    vector<int> counts;
    counts.push_back(0);
    counts.push_back(0);
    
    min = max = scores[0];
    
    for(int i =1; i < scores.size(); i++){
        if(scores[i]>max){
            counts[0]++;
            max = scores[i];
        }
        else if(scores[i]<min){
            counts[1]++;
            min = scores[i];
        }
    }
    
    return counts;
}