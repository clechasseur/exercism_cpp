#include "doctor_data.h"
#ifdef EXERCISM_TEST_SUITE
#include <catch2/catch.hpp>
#else
#include "test/catch.hpp"
#endif

TEST_CASE("Create different plants", "[task_1]") {
    heaven::Vessel bob{"Robert Johansson", 1, star_map::System::BetaHydri};
    heaven::Vessel riker{"Robert Johansson 2", 2};

    robots::Flower percy = robots::Flower{"Hello", 1};
}

#if defined(EXERCISM_RUN_ALL_TESTS)


#endif