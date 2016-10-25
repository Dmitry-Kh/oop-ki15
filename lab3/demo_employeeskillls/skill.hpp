// (C) 2013-2016, Sergei Zaychenko, KNURE, Kharkiv, Ukraine

#ifndef _SKILL_HPP_
#define _SKILL_HPP_

/*****************************************************************************/

#include <string>

/*****************************************************************************/


class Skill
{

/*-----------------------------------------------------------------*/

public:

/*-----------------------------------------------------------------*/

	Skill ( const std::string & _name, int _level );

	const std::string & getName () const;

	int getLevel () const;

/*-----------------------------------------------------------------*/

private:

/*-----------------------------------------------------------------*/

	const std::string m_name;

	const int m_level;

/*-----------------------------------------------------------------*/  

};

/*****************************************************************************/


inline const std::string & 
Skill::getName () const
{
	return m_name;
}


/*****************************************************************************/


inline int 
Skill::getLevel () const
{
	return m_level;
}


/*****************************************************************************/

#endif //  _SKILL_HPP_
