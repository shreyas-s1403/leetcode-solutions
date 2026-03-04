class MedianFinder {
    private PriorityQueue<Integer> minHeap,maxHeap;
    public MedianFinder() {
        minHeap=new PriorityQueue<>();
        maxHeap=new PriorityQueue<>(Collections.reverseOrder());
    }
    
    public void addNum(int num) {
        minHeap.add(num);
        if (minHeap.size()>maxHeap.size()+1) maxHeap.add(minHeap.poll());
        if (!maxHeap.isEmpty() && maxHeap.peek()>minHeap.peek()){
            int temp=maxHeap.poll();
            maxHeap.add(minHeap.poll());
            minHeap.add(temp);
        }
    }
    
    public double findMedian() {
        if (minHeap.size()==maxHeap.size()) return (minHeap.peek()+maxHeap.peek())/2.0;
        if (minHeap.size()>maxHeap.size()) return minHeap.peek()/1.0;
        return maxHeap.peek()/1.0;
    }
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */