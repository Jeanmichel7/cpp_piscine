/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <jrasser@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:06:06 by jrasser           #+#    #+#             */
/*   Updated: 2022/08/07 19:16:53 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define RED "\033[0;31m"
#define END "\033[0m"
#define UND "\033[4m"

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm("Shrubbery Form", 145, 137)
{
	const_cast<std::string&>(_target) = "";
	return;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm("Shrubbery Form", 145, 137)
{
	const_cast<std::string&>(_target) = target;
	return;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}
ShrubberyCreationForm::ShrubberyCreationForm(AForm const &tmp) : AForm(tmp)
{
	return;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const &tmp)
{
	setName(tmp.getName());
	setIsSign(tmp.getIsSign());
	setGradToSign(tmp.getGradToSign());
	setGradToExec(tmp.getGradToExec());
	return (*this);
}




std::string ShrubberyCreationForm::getTarget()
{
	return (_target);
}

void	ft_fill_trees(const char *str_tree[5])
{

	str_tree[0] = 
"              v .   ._, |_  .,\n \
           `-._\\/  .  \\ /    |/_\n \
               \\  _\\, y | \\//\n \
         _\\_.___\\, \\/ -.\\||\n \
           `7-,--.`._||  / / ,\n \
           /'     `-. `./ / |/_.'\n \
                     |    |//\n \
                     |_    /\n \
                     |-   |\n \
                     |   =|\n \
                     |    |\n \
--------------------/ ,  . \\--------._\n\n\n";

	str_tree[1] =
"\n \
       _-_\n \
    /~~   ~~\\ \n \
 /~~         ~~\\ \n \
{               }\n \
 \\  _-     -_  /\n \
   ~  \\ //  ~\n \
_- -   | | _- _\n \
  _ -  | |   -_\n \
      // \\\n";
	str_tree[2] = 
"\n \
          &&& &&  & &&\n \
      && &\\/&\\|& ()|/ @, &&\n \
      &\\/(/&/&||/& /_/)_&/_&\n \
   &() &\\/&|()|/&\\/ % \\& \\(\\)\n \
  &_\\_&&_\\ |& |&&/&__%_/_& &&\n \
&&   && & &| &| /& & % ()& /&&\n \
 ()&_---()&\\&\\|&&-&&--%---()~\n \
     &&     \\|||\n \
             |||\n \
             |||\n \
             |||\n \
       , -=-~  .-^- _\n\n\n";
	str_tree[3] =
"               ,@@@@@@@,\n \
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n \
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n \
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n \
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n \
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n \
   `&%\\ ` /%&'    |.|        \\ '|8'\n \
       |o|        | |         | |\n \
       |.|        | |         | |\n \
jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n\n\n \
";
	str_tree[4] = 
"              _{\\ _{\\{\\/}/}/}__\n \
             {/{/\\}{/{/\\}(\\}{/\\} _\n \
            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n \
         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n \
        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n \
       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n \
      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n \
      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n \
     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n \
      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n \
       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n \
      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n \
       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n \
         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n \
          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n \
            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n \
             {/{\\{\\{\\/}/}{\\{\\\\}/}\n \
              {){/ {\\/}{\\/} \\}\\}\n \
              (_)  \\.-'.-/\n \
          __...--- |'-.-'| --...__\n \
   _...--    .-'   |'-.-'|  ' -.  --.\n \
 -     ' .  . '    |.'-._| '  . .  '   jro\n \
 .  '-  '    .--'  | '-.'|    .  '  . '\n \
          ' ..     |'-_.-|\n \
  .  '  .       _.-|-._ -|-._  .  '  .\n \
              .'   |'- .-|   '.\n \
  ..-'   ' .  '.   `-._.-    .'  '  - .\n \
   .-' '        '-._______.-'     '  .\n \
        .      ~,\n \
    .       .   |\\   .    ' '-.\n \
";


}

void	ft_create_file(ShrubberyCreationForm t)
{
	FILE		*file;
	std::string file_name = t.getTarget() + "_shrubbery";
	char		name[100];
	const char		*str_tree[5];

	strncpy(name, file_name.c_str(), 100);
	ft_fill_trees(str_tree);
	file = fopen(name, "w");
	if (file != NULL)
	{
		for(int i = 0; i < 5; i++)
			fputs (str_tree[i], file);
		fclose (file);
	}
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (getIsSign() == 1)
		{
			if (executor.getGrade() <= getGradToExec())
				ft_create_file(*this);
			else
				throw( ShrubberyCreationForm::GradeTooLowException());
		}
		else
			throw( ShrubberyCreationForm::FormNotSigned());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
