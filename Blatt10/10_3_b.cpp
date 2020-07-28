#include <vector>
#include <iostream>

class tier
{
public:
    tier(std::string p_art);
    ~tier();
    virtual void hallo(std::string prefix);

private:
    std::string art;
};

tier::tier(std::string p_art = "ein Tier")
{
    art = p_art;
}

tier::~tier()
{
}

void tier::hallo(std::string prefix)
{
    std::cout << prefix << "Ich bin " << art << std::endl;
}

class raubtier : public tier
{
public:
    raubtier(std::string p_art);
    ~raubtier();
    void friss(tier *dersnack);
    virtual void hallo(std::string prefix);

private:
    tier *im_bauch;
};

raubtier::raubtier(std::string p_art = "ein Tier") : tier(p_art)
{
    im_bauch = nullptr;
}

raubtier::~raubtier()
{
}

void raubtier::friss(tier *dersnack)
{
    im_bauch = dersnack;
}

void raubtier::hallo(std::string prefix)
{
    tier::hallo(prefix);
    if (im_bauch != nullptr)
    {
        im_bauch->hallo(prefix + "  ");
    }
}

class zoo
{
public:
    zoo();
    ~zoo();
    void kaufe_tier(tier *p_tier);
    void alle_hallo();

private:
    std::vector<tier *> tiere;
};

zoo::zoo()
{
}

zoo::~zoo()
{
}

void zoo::kaufe_tier(tier *p_tier)
{
    tiere.push_back(p_tier);
}

void zoo::alle_hallo()
{
    for (tier *t : tiere)
    {
        t->hallo("");
    }
}

int main()
{
    raubtier *A, *B;
    A = new raubtier("der erste Fisch");
    for (int i = 0; i < 5; i++)
    {
        B = new raubtier("der " + std::to_string(i+2) + "te Fisch");
        B->friss(A);
        A = B;
    }
    A->hallo("");
}