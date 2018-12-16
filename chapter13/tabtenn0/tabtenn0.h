// tabtenn0.h -- a table-tennis base class
#ifndef TABTENN0_H_
#define TABTENN0_H_

#include <string>

class TableTennisPlayer
{
private:
	std::string firstname;
	std::string lastname;
	bool hasTable;
public:
	TableTennisPlayer(const std::string &fn = "none", const std::string &ln = "none", bool ht = false);
	void Name() const;
	bool HasTable() const { return hasTable; };
	void ResetTable(bool v) { hasTable = v; };
};

#endif // TABTENN0_H_
