/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
      vector<int>v;
      while(head) {
        v.push_back(head->val);
        head=head->next;
      }  
      bool x =false;
      for(int i=0;i<v.size();i++) {
        for(int j=i+1;j<v.size();j++) {
            if(v[i] < v[j]) {
                v[i] = v[j];
                x=true;
                break;
            }
        }
        if(!x){
             v[i] =0;
        }else {
            x=false;
        }
      }
      return v;
    }
};