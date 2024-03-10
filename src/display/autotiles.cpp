struct StaticRect { float x, y, w, h; };

/*
Calculated coordinates for autotile pieces. 
Autotiles are 3 x 4 tiles in size, and they're sliced into
half pieces and rearranged to form autotiles. This
pre-calculates all of the rects for these slices.
*/
static const float tileSize = 16;
static const float halfTile = tileSize / 2;
// static const int tileSize = 16;
// static const int halfTile = tileSize / 2;

extern const StaticRect autotileRects[] =
{
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*3, halfTile*5, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*3, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize, tileSize*2, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {0, tileSize*2, halfTile, halfTile},
    {halfTile, tileSize*2, halfTile, halfTile},
    {0, halfTile*5, halfTile, halfTile},
    {halfTile, halfTile*5, halfTile, halfTile},
    {0, tileSize*2, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {0, halfTile*5, halfTile, halfTile},
    {halfTile, halfTile*5, halfTile, halfTile},
    {0, tileSize*2, halfTile, halfTile},
    {halfTile, tileSize*2, halfTile, halfTile},
    {0, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {0, tileSize*2, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {0, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize, tileSize, halfTile, halfTile},
    {halfTile*3, tileSize, halfTile, halfTile},
    {tileSize, halfTile*3, halfTile, halfTile},
    {halfTile*3, halfTile*3, halfTile, halfTile},
    {tileSize, tileSize, halfTile, halfTile},
    {halfTile*3, tileSize, halfTile, halfTile},
    {tileSize, halfTile*3, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize, tileSize, halfTile, halfTile},
    {halfTile*3, tileSize, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*3, halfTile*3, halfTile, halfTile},
    {tileSize, tileSize, halfTile, halfTile},
    {halfTile*3, tileSize, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize*2, tileSize*2, halfTile, halfTile},
    {halfTile*5, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile*5, halfTile, halfTile},
    {tileSize*2, tileSize*2, halfTile, halfTile},
    {halfTile*5, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile*5, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile*5, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, tileSize*2, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile*5, halfTile, halfTile},
    {tileSize, tileSize*3, halfTile, halfTile},
    {halfTile*3, tileSize*3, halfTile, halfTile},
    {tileSize, halfTile*7, halfTile, halfTile},
    {halfTile*3, halfTile*7, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*3, tileSize*3, halfTile, halfTile},
    {tileSize, halfTile*7, halfTile, halfTile},
    {halfTile*3, halfTile*7, halfTile, halfTile},
    {tileSize, tileSize*3, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize, halfTile*7, halfTile, halfTile},
    {halfTile*3, halfTile*7, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {tileSize, halfTile*7, halfTile, halfTile},
    {halfTile*3, halfTile*7, halfTile, halfTile},
    {0, tileSize*2, halfTile, halfTile},
    {halfTile*5, tileSize*2, halfTile, halfTile},
    {0, halfTile*5, halfTile, halfTile},
    {halfTile*5, halfTile*5, halfTile, halfTile},
    {tileSize, tileSize, halfTile, halfTile},
    {halfTile*3, tileSize, halfTile, halfTile},
    {tileSize, halfTile*7, halfTile, halfTile},
    {halfTile*3, halfTile*7, halfTile, halfTile},
    {0, tileSize, halfTile, halfTile},
    {halfTile, tileSize, halfTile, halfTile},
    {0, halfTile*3, halfTile, halfTile},
    {halfTile, halfTile*3, halfTile, halfTile},
    {0, tileSize, halfTile, halfTile},
    {halfTile, tileSize, halfTile, halfTile},
    {0, halfTile*3, halfTile, halfTile},
    {halfTile*5, halfTile, halfTile, halfTile},
    {tileSize*2, tileSize, halfTile, halfTile},
    {halfTile*5, tileSize, halfTile, halfTile},
    {tileSize*2, halfTile*3, halfTile, halfTile},
    {halfTile*5, halfTile*3, halfTile, halfTile},
    {tileSize*2, tileSize, halfTile, halfTile},
    {halfTile*5, tileSize, halfTile, halfTile},
    {tileSize*2, halfTile, halfTile, halfTile},
    {halfTile*5, halfTile*3, halfTile, halfTile},
    {tileSize*2, tileSize*3, halfTile, halfTile},
    {halfTile*5, tileSize*3, halfTile, halfTile},
    {tileSize*2, halfTile*7, halfTile, halfTile},
    {halfTile*5, halfTile*7, halfTile, halfTile},
    {tileSize*2, 0, halfTile, halfTile},
    {halfTile*5, tileSize*3, halfTile, halfTile},
    {tileSize*2, halfTile*7, halfTile, halfTile},
    {halfTile*5, halfTile*7, halfTile, halfTile},
    {0, tileSize*3, halfTile, halfTile},
    {halfTile, tileSize*3, halfTile, halfTile},
    {0, halfTile*7, halfTile, halfTile},
    {halfTile, halfTile*7, halfTile, halfTile},
    {0, tileSize*3, halfTile, halfTile},
    {halfTile*5, 0, halfTile, halfTile},
    {0, halfTile*7, halfTile, halfTile},
    {halfTile, halfTile*7, halfTile, halfTile},
    {0, tileSize, halfTile, halfTile},
    {halfTile*5, tileSize, halfTile, halfTile},
    {0, halfTile*3, halfTile, halfTile},
    {halfTile*5, halfTile*3, halfTile, halfTile},
    {0, tileSize, halfTile, halfTile},
    {halfTile, tileSize, halfTile, halfTile},
    {0, halfTile*7, halfTile, halfTile},
    {halfTile, halfTile*7, halfTile, halfTile},
    {0, tileSize*3, halfTile, halfTile},
    {halfTile*5, tileSize*3, halfTile, halfTile},
    {0, halfTile*7, halfTile, halfTile},
    {halfTile*5, halfTile*7, halfTile, halfTile},
    {tileSize*2, tileSize, halfTile, halfTile},
    {halfTile*5, tileSize, halfTile, halfTile},
    {tileSize*2, halfTile*7, halfTile, halfTile},
    {halfTile*5, halfTile*7, halfTile, halfTile},
    {0, tileSize, halfTile, halfTile},
    {halfTile*5, tileSize, halfTile, halfTile},
    {0, halfTile*7, halfTile, halfTile},
    {halfTile*5, halfTile*7, halfTile, halfTile},
    {0, 0, halfTile, halfTile},
    {halfTile, 0, halfTile, halfTile},
    {0, halfTile, halfTile, halfTile},
    {halfTile, halfTile, halfTile, halfTile}
};

extern const int autotileRectsN = sizeof(autotileRects) / sizeof(autotileRects[0]);
