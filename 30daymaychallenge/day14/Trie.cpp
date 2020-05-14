class TrieNode{
    public:
        vector<TrieNode*> child;
        bool is_end;
        TrieNode(){
            child = vector<TrieNode*>(26,NULL);
            is_end=false;
        }
};


class Trie {
public:
    /** Initialize your data structure here. */
    TrieNode* root;
    Trie() {
        root=new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* temp = root;
        for(auto c:word){
            if(temp->child[c-'a']==NULL){
                temp->child[c-'a']=new TrieNode();
            }
            temp=temp->child[c-'a'];
        }
        temp->is_end=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* temp = root;
        for(auto c:word){
            if(temp->child[c-'a']==NULL){
                return false;
            }
            temp=temp->child[c-'a'];
        }
        return temp->is_end;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* temp=root;
        for(auto c:prefix){
            
            if(temp->child[c-'a']==NULL){
                return false;
            }
            temp=temp->child[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
