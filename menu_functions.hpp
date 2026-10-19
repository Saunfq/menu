#pragma once

#include "menu.hpp"

namespace IBusko {
    const MenuItem* show_menu(const MenuItem* current);

    const MenuItem* exit(const MenuItem* current);

    const MenuItem* study_summ(const MenuItem* current);
    const MenuItem* study_substract(const MenuItem* current);
    const MenuItem* study_go_back(const MenuItem* current);

};