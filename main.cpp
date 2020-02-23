#include "Tree.h"
int main()
{
    Tree* binTree = new Tree();
    int a;
    std::cout << "Enter the numbers: \n";
    std::cin >> a;
    while(a != 0)
    {
        binTree->add(a);
        std::cin >> a;
    }
    std::cout << "Result: \n";
    binTree->printTree();
    return 0;
}
