#pragma once

#include <string>

namespace star_map {
enum class System {
    EpsilonEridani,
    Sol,
    Omicron2Eridani,
    DeltaEridani,
    AlphaCentauri,
    EpsilonIndi,
    BetaHydri
};
}
namespace heaven {
class Vessel {
   public:
    Vessel(std::string name, int generation,
           star_map::System current_system = star_map::System::Sol)
        : name(name), generation(generation), current_system(current_system) {}
    void make_buster();
    void shoot_buster();
    void install_roamers(int num);

    std::string name{};
    int generation{};
    star_map::System current_system{};
    int busters{};
    int roamers{};
};

std::string get_older_bob(const Vessel& vessel1, const Vessel& vessel2);

}  // namespace heaven

namespace robots {
class Flower {
   private:
    bool needs_water{};
    int size{};
    std::string name{};

   public:
    Flower(std::string name, int size = 0);
    void give_water();
    std::string get_name();
    int get_size();
    void start_next_day();
};
}  // namespace robots