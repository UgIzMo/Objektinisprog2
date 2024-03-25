#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>

enum class ContainerType { None, Vector };
enum class Action { None, Generate, Sort };
ContainerType getContainerChoice();
Action getActionChoice();

void performAction(ContainerType containerChoice, Action actionChoice, const std::vector<int>& sizes);
void runApp();

#endif
