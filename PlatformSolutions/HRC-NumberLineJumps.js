//https://www.hackerrank.com/contests/mountblue-technologies/challenges/kangaroo

function kangaroo(x1, v1, x2, v2) {
    // Write your code here
    let distx1 = x1
    let distx2 = x2
    let first
    let distcatch
    if(x1>x2) {
        first = 1
        distcatch = distx1-distx2
    }
    else {
        first = 2
        distcatch = distx2-distx1
    }
    distx1 += v1;
    distx2 += v2;
    while(true) {
        if(distx1 == distx2) return "YES"
        if(first == 1) {
            if(distx2>distx1) return "NO"
            if(distcatch <= (distx1-distx2)) return "NO"
            distcatch = distx1-distx2
        } 
        else {
            if(distx1>distx2) return "NO"
            if(distcatch <= (distx2-distx1)) return "NO"
            distcatch = distx2-distx1
        }
        distx1 += v1;
        distx2 += v2;
    }
    

}