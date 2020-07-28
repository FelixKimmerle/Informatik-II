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
	void friss(tier* dersnack);
	virtual void hallo(std::string prefix);
private:
	tier* im_bauch;
};

raubtier::raubtier(std::string p_art = "ein Tier") : tier(p_art)
{
	im_bauch = nullptr;
}

raubtier::~raubtier()
{
}

void raubtier::friss(tier* dersnack)
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
	std::vector<tier*> tiere;
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
	tier *fisch = new tier("ein Fisch");
	raubtier *robbe = new raubtier("eine Robbe");
	raubtier *orca = new raubtier("ein Orca");

	zoo z;
	z.kaufe_tier(fisch);
	z.kaufe_tier(robbe);
	z.kaufe_tier(orca);
    std::cout << "-- Alle vor dem Fressen --" << std::endl;
    z.alle_hallo();
    std::cout << "-- Orca vor dem Fressen --" << std::endl;

    orca->hallo("");

    robbe->friss(fisch);
	orca->friss(robbe);
    std::cout << "-- Orca nach dem Fressen --" << std::endl;

    orca->hallo("");
    std::cout << "-- Alle nach dem Fressen --" << std::endl;

	z.alle_hallo();
}