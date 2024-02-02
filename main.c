//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    int f =5;
    struct node a,b,d,*head ;
    a.value = f;
    a.next=&b;
    head=&a;
    b.value=head->value+3;
    

    printf("%d\n", head ->value ); //what value for 5
    printf("%d\n", head ->next->value ); //what value for 8

    struct node c;
    b.next = &c;
    head->next->next->value = 11;
    c.next =NULL;
    printf("%d\n", head->next->next->value ); // = c.value
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
    4.ปริ้นโดยใช้ head ด้วย
 */
    
/*  Exercise II
        1. Add 1 more than at the begining!!!!+
        2. Add value (2) 
        
*/
    struct node BeforeA;
    BeforeA.value = 2;
    BeforeA.next = head;
    head = &BeforeA
    typedef struct node* NodePtr;
    NodePtr tmp=head; //add temp value to faciliate
        
     //Exercise III Use loop to print everything
        int i,n=4;
        for(i=0;i<n;i++){
            printf("%d\n", tmp->value);
            tmp = tmp -> next;
          // What is missing???
        }
    
   /*  Exercise IV change to while loop!! (you can use NULL to help) */
         tmp = head;
         while(tmp != NULL){
            printf("%d ", tmp->value);
           tmp =tmp -> next;
        }
    
    // 2 5 8 11
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!! */
         //use a loop to help
        head = (struct node*) malloc(sizeof(struct node));
        tmp = head;

        for(int i=2;i<=11;i+=3)
        {
            tmp -> value =i;
            if(i ==11)
            {
                tmp->next=NULL;
            }
            else{
                tmp->next = (NodePtr)malloc(sizeof(struct node));
            }
            tmp = tmp -> next;
        }

    /*  Exercise VI Free all node !! */
         //use a loop to help
          printf("\n");
          while(head!=NULL){
            tmp=head;
            head=head->next;
            printf("%d ",tmp->value);
            free(tmp);
          }

    
    return 0;
}
