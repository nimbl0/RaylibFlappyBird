//
// Created by master on 31.03.21.
//

#include <iostream>
#include "json.hpp"
#include <fstream>
#include "../config/GameConfig.h"
#include <vector>
#include <filesystem>
#include <any>

int main() {
    GameConfig gc("resources/gameConfig/gameConfig.json");


    // gc.read();

    // printf("%s", GameConfig::values["width"].c_str());

    std::string path("resources/level/");
    for(auto &entry : std::filesystem::directory_iterator(path)) {
        std::string p(entry.path());
        p.substr(16);
        printf("%s\n", p.substr(16).c_str());
    }


    return 0;
}