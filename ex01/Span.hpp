#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span {
    private:
        unsigned int _maxSize;
        std::vector<int> _numbers;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& assign);
        ~Span();
    
        void addNumber(int nb);
        template <typename iterator>
        void addRange(iterator begin, iterator end);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        unsigned int get_numbers();

        void printNumbers(void) const;
    
};

#endif