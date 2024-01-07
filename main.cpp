#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <limits>


class FireZone {
public:
    std::string name;
    int fireIntensity;
    FireZone(std::string n, int intensity) : name(n), fireIntensity(intensity) {}
};


class FirefightingPlane {
public:
    int fuelCapacity = 5000;
    int waterCapacity = 20000;
    int currentFuel;
    int currentWater;
    std::string currentLocation;

    FirefightingPlane() {
        currentFuel = fuelCapacity;
        currentWater = waterCapacity;
        currentLocation = "B0";
    }

    
    void refillFuel() {
        currentFuel = fuelCapacity;
    }

    void refillWater() {
        currentWater = waterCapacity;
    }

   
};


class ForestMap {
public:
    std::map<std::string, std::vector<std::pair<std::string, int>>> adjList;
    
    
    void readForestMap(const std::string& filename) {
        
    }

    
    std::vector<std::string> findShortestPath(const std::string& source, const std::string& destination) {
      
        return std::vector<std::string>(); // Örnek dönüş
    }
};


void ormanOku(ForestMap& map, const std::string& filename) {
    map.readForestMap(filename);
}

std::vector<std::string> sondurmePlani(ForestMap& map, FirefightingPlane& plane) {
    
    return std::vector<std::string>(); // Örnek dönüş
}

int main() {
    ForestMap forestMap;
    FirefightingPlane plane;

    ormanOku(forestMap, "Orman.txt");

    auto plan = sondurmePlani(forestMap, plane);

   
    for (const auto& location : plan) {
        std::cout << location << std::endl;
    }

    return 0;
}
