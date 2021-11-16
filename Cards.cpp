
class Rank {
	enum rank {two, three, four, five, six, seven, eight, nine, ten,
		Jack = 10, Queen = 10, King = 10, Ace = 11};
};

class Suits{
public:
	enum Suit { Diamonds, Hearts, Clubs, Spades};
};

class Card {
public:
	Card(Suits suit, Rank rank):
		_suit(suit),
		_rank(rank)
	{}
	Suits suit()const;
	Rank rank()const;
	int getScore()const {

	}
private:
	Suits _suit;
	Rank _rank;

};

Suits Card::suit() const
{
	return Suits();
}

Rank Card::rank() const
{
	return Rank();
}
