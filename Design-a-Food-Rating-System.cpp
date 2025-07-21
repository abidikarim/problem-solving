class FoodRatings {
public:
struct CustomCompare {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
        if (a.first != b.first)
            return a.first > b.first;
        return a.second < b.second;
    }
};
    map<string,pair<string,int>>foodRating;
    map<string,set<pair<int,string>,CustomCompare>>cuisMap;
    FoodRatings(vector<string>& f, vector<string>& c, vector<int>& r) {
        for(int i=0; i<f.size(); i++){
            foodRating[f[i]] = {c[i],r[i]};
            cuisMap[c[i]].insert({r[i],f[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        int oldRating = foodRating[food].second;
        foodRating[food].second = newRating;
        cuisMap[foodRating[food].first].erase(cuisMap[foodRating[food].first].find({oldRating,food}));
        cuisMap[foodRating[food].first].insert({newRating,food});
    }
    
    string highestRated(string cuisine) {
       return (*cuisMap[cuisine].begin()).second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */