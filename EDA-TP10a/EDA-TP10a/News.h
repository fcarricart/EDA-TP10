#pragma once
class ARTICLE 
{
	string date;
	string title;
};
class NEWS_FEED 
{
public:
	string get_title(news_index);
	string get_date(news_index);
	void add_article();
	int get_article_ammount();
	string set_title(news_index);
	string set_date(news_index);

private:
	vector(ARTICLE)
};
