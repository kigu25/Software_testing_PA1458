#include "pch.h"
#include "Character.h"

Character::Character(const string& name) {
    this->characterName = name;
}

Character::~Character() {}

string Character::getName() const {
    return characterName;
}

string Character::getInitialGreeting() {
    return "";
}

string Character::query(string safeQuery) {
    InteractionEngine interaction;
    PlotEngine plot;

    string parsedQuery = interaction.parseQuery(safeQuery);
    string nextConversationOptions = plot.getPlotState();
    string theResponse = parsedQuery;

    string formatted = interaction.formatResponse(theResponse, nextConversationOptions);

    return formatted;
}

