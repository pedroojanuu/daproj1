#ifndef DA_PROJ1_DISTRICT_H
#define DA_PROJ1_DISTRICT_H

#include <string>
#include <vector>

#include "VertexEdge.h"

class Station;

/**
 * @brief A class for a Portuguese district.
 *
 * Represents a district of Portugal by its name and includes pointers to the stations on it.\n
 * Note: all the methods time complexity is O(1), except where specified.
 */
class District {
public:
    /**
     * Constructor for District
     *
     * @param name District name
     */
    District(const std::string& name);

    /**
     * Adds a given station pointer to the district's stations.
     *
     * @param station Station Pointer
     */
    void addStation(Station* station);

    /**
     * Less than (District A < District B) comparison operator. Lexicographically compares the districts' names.
     *
     * @param other Other District Pointer
     * @return True if A's name is lexicographically lower than B's name, false otherwise.
     */
    bool operator<(const District& other) const;

    /**
     * District name's getter.
     *
     * @return The string that is the District's name.
     */
    std::string getName() const;
private:
    /**
     * District name
     */
    std::string name;

    /**
     * Vector of stations in the district
     */
    std::vector<Station*> stations;
};

#endif //DA_PROJ1_DISTRICT_H
