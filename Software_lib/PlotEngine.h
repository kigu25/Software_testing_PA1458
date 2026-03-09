#pragma once
#include <string>
using namespace std;

class PlotEngine {
private:
	string currentPlot;
public:
	PlotEngine();
	~PlotEngine();

	void setPlotState(const string& plot);
	string getPlotState() const;
};