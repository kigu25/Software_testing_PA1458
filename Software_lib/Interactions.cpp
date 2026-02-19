#include "pch.h"
#include "Interactions.h"

Interactions::Interactions(string interactionName)
{
    this->interactionName = interactionName;
}

Interactions::~Interactions()
{
}

string Interactions::getInteraction()
{
    return this->interactionName;
}
