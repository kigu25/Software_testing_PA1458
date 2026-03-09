#include "pch.h"
#include "PlotEngine.h"

PlotEngine::PlotEngine() {
	currentPlot = "No plot set.";
}

PlotEngine::~PlotEngine() {

}

void PlotEngine::setPlotState(const string& plot)
{
	currentPlot = plot;
}

string PlotEngine::getPlotState() const{
	return currentPlot;
}