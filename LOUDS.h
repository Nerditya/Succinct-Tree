#pragma once
#include "definitions.h"

extern ldsnode* lds;

//declaration of all the function used

tree* deq();        // deque function for queue
void LOUDS_print(tree* root, int n);
void LOUDS(tree* r);
void enq(tree* p);     // enque function for queue
void create_q(tree* p);        // function to create queue
void display_q();       // function to display queue
void ldstraversal(tree* r);     // LOUDDS traversal
int is_qempty();        // function to check whether queue is empty or not
int ldsrank(char* pattern, int i);      // LOUDDS rank
int ldsselect(char* pattern, int i);        // LOUDDS select
int ldsparent(int x);       // parent of the node
int ldsfirstchild(int x);       // first child of the node
int ldslastchild(int x);        // last child of the node
int ldsdegree(int x);       // degree of the node
int ldsrightsibling(int x);     // right sibling of the node (at the same level)