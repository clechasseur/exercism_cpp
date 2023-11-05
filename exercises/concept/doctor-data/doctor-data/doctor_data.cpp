#include "doctor_data.h"

namespace heaven {



void Vessel::make_buster() { ++busters; }
void Vessel::shoot_buster() { --busters; }

void Vessel::install_roamers(int num) { roamers += num; }

std::string get_older_bob(const Vessel& vessel1, const Vessel& vessel2) {
    return vessel1.generation < vessel2.generation ? vessel1.name
                                                   : vassel2.name;
}
}  // namespace heaven



robots::Flower::Flower(std::string name, int size) {this->name = "Robotica " + name; this->size = size;}
void robots::Flower::start_next_day() {if (!needs_water) ++size; needs_water = true;}
std::string robots::Flower::get_name() {return name;}
int robots::Flower::get_size() {return size;}