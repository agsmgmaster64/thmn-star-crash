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

    [APRICORN_TREE_ROUTE_29_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_ORAN,
    },

    [APRICORN_TREE_ROUTE_30_TREE_1] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_ORAN,
    },

    [APRICORN_TREE_ROUTE_30_TREE_2] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_PECHA,
    },

    [APRICORN_TREE_ROUTE_31_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_PERSIM,
    },

    [APRICORN_TREE_ROUTE_33_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_PECHA,
    },

    [APRICORN_TREE_ROUTE_35_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_LEPPA,
    },

    [APRICORN_TREE_ROUTE_36_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_RAWST,
    },

    [APRICORN_TREE_ROUTE_37_TREE_1] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_RED,
    },

    [APRICORN_TREE_ROUTE_37_TREE_2] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BLUE,
    },

    [APRICORN_TREE_ROUTE_37_TREE_3] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BLACK,
    },

    [APRICORN_TREE_ROUTE_38_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_WHITE,
    },

    [APRICORN_TREE_ROUTE_39_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BERRY_CHESTO,
    },

    [APRICORN_TREE_ROUTE_42_TREE_1] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_PINK,
    },

    [APRICORN_TREE_ROUTE_42_TREE_2] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_GREEN,
    },

    [APRICORN_TREE_ROUTE_42_TREE_3] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_YELLOW,
    },

    [APRICORN_TREE_ROUTE_43_TREE] =
    {
        .minimum = 1,
        .maximum = 1,
        .apricornType = APRICORN_BLACK,
    },
    #endif
};
