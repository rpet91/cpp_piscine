/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rpet <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/27 11:59:56 by rpet          #+#    #+#                 */
/*   Updated: 2021/04/28 14:25:30 by rpet          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <string>

class Enemy {

	public:
		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &original);
		Enemy	&operator=(Enemy const &original);
		virtual ~Enemy();

		std::string virtual	getType() const;
		int					getHP() const;

		virtual void		takeDamage(int dmg);

	protected:
		int			_hp;
		std::string	_type;
	
	private:
		Enemy();

};

#endif
