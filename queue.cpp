#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

struct ListNode {
     int val;
     struct ListNode *next;
 };
 
 struct ListNode* get_node(){
    struct ListNode* node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val=0;
    node->next=NULL;
    
    return node;
}

 struct ListNode* insert_first(struct ListNode *queue){
 	struct ListNode* node = (struct ListNode *)malloc(sizeof(struct ListNode));
    node->val=123;
    node->next=queue;
    
    return node;
}

int main(void) {
	
	struct ListNode *queue = get_node();
    
    printf("queue first val=%d\n",queue->val);
    
    queue=insert_first(queue);
    
    printf("queue first val=%d\n",queue->val);
    
    //printf("queue val3=%d\n",queue->next->val);
    
    
    getchar();
    return 0;
}
