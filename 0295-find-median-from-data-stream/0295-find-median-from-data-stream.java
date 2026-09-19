class MedianFinder {
    PriorityQueue<Integer>pq1 = new PriorityQueue<>() ; 
    PriorityQueue<Integer>pq2 = new PriorityQueue<>(Collections.reverseOrder()) ; 

    public MedianFinder() {
        
    }
    
    public void addNum(int num) {
      if(!pq1.isEmpty() && pq1.peek() > num){
        pq1.add(num) ; 
      }      
      else{
        pq2.add(num) ; 
      }

      while(pq1.size()+1 > pq2.size() ){
        pq2.add(pq1.poll()) ; 
      }
      while(pq2.size() > pq1.size() ){
        pq1.add(pq2.poll())  ; 
      }
    }
    
    public double findMedian() {
        if((pq1.size() + pq2.size()) % 2 == 0){
            return ((double) pq1.peek() + (double) pq2.peek())/2.0 ; 
        }
        else return (double)pq1.peek() ; 
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */