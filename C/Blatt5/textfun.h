enum{ LAENGE = 25};

typedef struct listEle{
    char suchWort[LAENGE];
    char ersatzWort[LAENGE];
    struct listEle *next;
}ListEle;

struct Fundstelle{
    const char *stelleImSuchString;
    ListEle *ersetzung;
};

void addPair(const char *such,const char *ersatz);

void clearList(void);

struct Fundstelle find(const char *s);

int replaceAll(char *s);