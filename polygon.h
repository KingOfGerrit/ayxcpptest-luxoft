#ifndef POLYGON_H
#define POLYGON_H

#include "spatial.h"
#include <list>

namespace AyxCppTest
{
    class Polygon : public Area
    {
        std::list<Point> m_ls;
    public:
        Polygon(std::initializer_list<Point> ls);
        bool Contains(const Point &pt) override;
    };
}


#endif
