
class Solution{
    public:

    int getMiddle(Node* head){
        if(head == NULL) return -1;

        //slow and fast ko head me rakha
        Node* slow = head;
        Node* fast = head;

        while(head != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        //jab tak fast end tak pochega itne me slow mid par puhuch jayega
        return slow->data;
    }
}