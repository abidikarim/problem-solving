class TweetCounts {
public:
    map<string,multiset<int>>tweets;
    TweetCounts() {
        
    }
    
    void recordTweet(string tweetName, int time) {
        tweets[tweetName].insert(time);
        
    }
    
    vector<int> getTweetCountsPerFrequency(string freq, string tweetName, int startTime, int endTime) {
        int interval = (freq == "minute" ? 60 : freq == "hour" ? 3600 : 86400);
        int size = (endTime - startTime) / interval + 1;
        vector<int>ans(size,0);
        multiset<int>times=tweets[tweetName];
        for(auto t:times){
             if(t>= startTime && t<= endTime){
                 int index = (t - startTime) / interval;
                 ans[index]++;
            }
        }
        return ans;
    }
};

/**
 * Your TweetCounts object will be instantiated and called as such:
 * TweetCounts* obj = new TweetCounts();
 * obj->recordTweet(tweetName,time);
 * vector<int> param_2 = obj->getTweetCountsPerFrequency(freq,tweetName,startTime,endTime);
 */