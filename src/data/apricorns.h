struct ApricornTree
{
    u8 minimum;
    u8 maximum;
    enum ApricornType apricornType;
};

const struct ApricornTree gApricornTrees[APRICORN_TREE_COUNT] =
{
    #if IS_FRLG
    [APRICORN_TREE_NONE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_CHERI,
    },

    [APRICORN_TREE_ROUTE_29_GREEN_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_GREEN,
    },
    #endif
};
