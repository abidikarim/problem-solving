class FoodRatings {
public:
    struct Compare {
        bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
            if(a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        }
    };
    map<string, int>food_rate;
    map<string, string>cuisine_per_food;
    map<string, set<pair<int, string>, Compare>>food_rate_per_cuisine;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        int n = foods.size();
        for(int i=0; i<n; i++){
            food_rate[foods[i]] = ratings[i];
            cuisine_per_food[foods[i]] = cuisines[i];
            food_rate_per_cuisine[cuisines[i]].insert({ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = cuisine_per_food[food];
        food_rate_per_cuisine[cuisine].erase(food_rate_per_cuisine[cuisine].find({food_rate[food], food}));
        food_rate_per_cuisine[cuisine].insert({newRating, food});
        food_rate[food] = newRating;
    }
    
    string highestRated(string cuisine) {
        return food_rate_per_cuisine[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */