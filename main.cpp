#include <iostream>
#include "Functions/read_data.h"

int main() {
    Graph graph;
    readStations("Project1Data/stations_alt.csv", graph);
    readNetwork("Project1Data/network_alt.csv", graph);

//    for(auto d : all_districts)
//        std::cout << d -> getName() << std::endl;
//
//    for(auto m : all_municipalities)
//        std::cout << m -> getName() << std::endl;

    for(auto v : graph.getVertexSet()) {
        std::cout << v->getName() << ", " << v->getDistrict()->getName() << ", " << v->getMunicipality()->getName()
                  << ", " << v->getTownship() << ", " << v->getLine() << std::endl;
        for(auto e : v->getAdj())
            std::cout << "----- " << e->getDest()->getName() << ", " << e->getWeight() << ", " << e->isAlfa() << std::endl;
    }

    graph.edmondsKarp("s", "t");

    return 0;
}
