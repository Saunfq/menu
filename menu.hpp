#pragma once

namespace IBusko {
    struct MenuItem {
        const char* const title;
        MenuItem* (*func)(const MenuItem* current);

        const MenuItem* parent;

        const MenuItem* const *children;
        const int children_count;
    };
}