#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const IBusko::MenuItem IBusko::STUDY_SUMM = {
    "1 - Хочу научиться складывать!", IBusko::study_summ, &IBusko::STUDY
};
const IBusko::MenuItem IBusko::STUDY_SUBSTRACT = {
    "2 - Хочу научиться вычитать!", IBusko::study_substract, &IBusko::STUDY
};
const IBusko::MenuItem IBusko::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", IBusko::study_go_back, &IBusko::STUDY
};

namespace {
    const IBusko::MenuItem* const study_children[] = {
        &IBusko::STUDY_GO_BACK,
        &IBusko::STUDY_SUMM,
        &IBusko::STUDY_SUBSTRACT
    };
    const int study_size = sizeof(study_children)/sizeof(study_children[0]);
};

const IBusko::MenuItem IBusko::STUDY = {
    "1 - Хочу учиться математике", IBusko::show_menu, &IBusko::MAIN, study_children, study_size
};

const IBusko::MenuItem IBusko::EXIT = {
    "0 - Я лучше пойду полежу", IBusko::exit, &IBusko::MAIN
};

namespace {
    const IBusko::MenuItem* const main_children[] = {
        &IBusko::EXIT,
        &IBusko::STUDY,
    };
    const int main_size = sizeof(main_children)/ sizeof(main_children[0]);
};

const IBusko::MenuItem IBusko::MAIN = {
    nullptr, IBusko::show_menu, main_children, main_size
};