#include "polygon.h"

namespace AyxCppTest
{
    Polygon::Polygon(std::initializer_list<Point> ls) :
        m_ls(ls)
    {
    }

    bool Polygon::Contains(const Point &pt)
    {
        bool result = false;
        auto it_j = m_ls.end()--;
        for (auto it = m_ls.begin(); it != m_ls.end(); it++) {

            if ( ((*it).m_y < pt.m_y && (*it_j).m_y >= pt.m_y || (*it_j).m_y < pt.m_y && (*it).m_y >= pt.m_y) &&
                 ((*it).m_x + (pt.m_y - (*it).m_y) / ((*it_j).m_y - (*it).m_y) * ((*it_j).m_x - (*it).m_x) < pt.m_x) )
                result = !result;
            it_j = it;
        }
    }
}
