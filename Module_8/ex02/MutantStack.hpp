#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	private:
		Container c;

	public:
		MutantStack() : std::stack<T, Container>() {}
		MutantStack(const MutantStack &other) : std::stack<T, Container>(other) {}
		virtual ~MutantStack() {}
		MutantStack & operator=(MutantStack const & rhs) { (void)rhs; return *this; }

		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		typedef typename Container::reverse_iterator reverse_iterator;
		typedef typename Container::const_reverse_iterator const_reverse_iterator;

		iterator begin() { return c.begin(); }
		iterator end() { return c.end(); }
		const_iterator begin() const { return c.begin(); }
		const_iterator end() const { return c.end(); }
		reverse_iterator rbegin() { return c.rbegin(); }
		reverse_iterator rend() { return c.rend(); }
		const_reverse_iterator rbegin() const { return c.rbegin(); }
		const_reverse_iterator rend() const { return c.rend(); }

		bool empty() const { return c.empty(); }
		size_t size() const { return c.size(); }
		T & top() { return c.back(); }
		T const & top() const { return c.back(); }
		void push(T const & val) { c.push_back(val); }
		void pop() { c.pop_back(); }


};


#endif