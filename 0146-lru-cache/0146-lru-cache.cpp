class LRUCache {
public:
    int k ; 
    unordered_map<int , pair<list<int>::iterator , int>>mp ; 
    list<int>dll ; 
    LRUCache(int capacity) {
        k = capacity ; 
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()){
            auto cadd = mp[key].first ; 
            dll.erase(cadd) ; 
            dll.push_front(key) ; 
            auto newadd = dll.begin() ; 
            int value = mp[key].second ; 
            mp[key] = {newadd , value} ; 
            return value ; 
        }
        else{
            return -1 ; 
        }
    }
    
    void put(int key, int value) {
         if(mp.find(key) != mp.end()){
           auto cadd = mp[key].first ; 
            dll.erase(cadd) ; 
            dll.push_front(key) ; 
            auto newadd = dll.begin() ; 
            mp[key] = {newadd , value} ; 
        }
        else{
            while(dll.size() >= k){
                auto front = dll.back() ; 
                dll.pop_back() ; 
                mp.erase(front) ; 
            }
            dll.push_front(key) ; 
            auto front = dll.begin() ;
            mp.insert({key , {front , value}}) ; 
            
        }


    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */