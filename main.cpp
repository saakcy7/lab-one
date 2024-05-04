 #include<iostream>
 #include "linkedlist.h"
 int main()
 {
    LinkedList list;//initialization of the list
    std::cout << "Is list empty? " << (list.isEmpty() ? "Yes" : "No") << std::endl;

    list.addToHead(5);
    list.addToHead(7);
    list.addToTail(4);
    list.addToTail(6);
    list.remove(6);
    list.removeFromHead();
 /*  
  Node* node4;
    if (list.retrieve(4,&node4)) {
        list.add(12, node4);
    }
    list.traverse();
    //std::cout<<"searching the element with value 6"<<std::endl;//
    //list.search(6);//

   /*  Node* ptr;
    if (list.retrieve(4, &ptr)) {
        std::cout << "Data retrieved successfully: " << ptr->info<< std::endl;
    } else {
        std::cout << "Data retrieval failed." << std::endl;
    }
    */
}
