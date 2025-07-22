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
    string addStrings(string a, string b) {
    string result;
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0 ? a[i--] - '0' : 0);
        int digit2 = (j >= 0 ? b[j--] - '0' : 0);
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result.push_back((sum % 10) + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string s1="",s2="";
        while(l1){
            s1+=to_string(l1->val);
            l1=l1->next;
        }
        while(l2){
            s2+=to_string(l2->val);
            l2=l2->next;
        }
        cout<<s1<<" not reverse "<<s2<<"\n";
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        string s = addStrings(s1,s2);
        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for (int i = s.size() - 1; i >= 0; i--) {
            int digit = s[i] - '0';  // convert char to int
            ListNode* newNode = new ListNode(digit);

            if (!head) {
                head = tail = newNode;  // first node
            } else {
                tail->next = newNode;
                tail = tail->next;
            }
        }
        return head;
    }
};