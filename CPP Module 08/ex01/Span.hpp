#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <cstddef>

class Span
{
private:
    typedef std::vector<int>::iterator IT;

public:
    Span(unsigned int n);
    Span(const Span& other);
    ~Span();

    Span& operator=(const Span& other);

    void addNumber(int n);
    void addRange(IT begin, IT end);

    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    std::size_t size() const;

private:
    Span();

    std::vector<int> _vector;
    std::size_t _size;

public:
    class SpanIsFullException: public std::exception {
        public: virtual const char* what() const throw();
    };
    class SizeTooSmallException: public std::exception {
        public: virtual const char* what() const throw();
    };
};

#endif