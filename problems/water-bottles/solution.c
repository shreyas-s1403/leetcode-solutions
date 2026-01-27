int numWaterBottles(int numBottles, int numExchange) {
    int filled=0;
    int emptybot=0;
    while (numBottles!=0){
        filled+=numBottles;
        emptybot+=numBottles;
        numBottles=emptybot/numExchange;
        emptybot=emptybot%numExchange;
    }
    return filled;
}