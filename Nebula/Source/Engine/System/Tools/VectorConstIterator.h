/**
A const forward iterator for a vector.

@date edited 05/01/2017
@date authored 18/12/2016

@author Nathan Sainsbury */

#ifndef VECTOR_CONST_ITERATOR_H
#define VECTOR_CONST_ITERATOR_H

template <class ElementType>
class VectorConstIterator
{
	private:
		typedef VectorConstIterator<ElementType> Iter;
		ElementType* m_pElement;

	protected:

	public:
		/**
		Constructs an iterator targetting the given element.
		@param pElement The address of the element to target */
		VectorConstIterator(ElementType* pElement)
		{
			m_pElement = pElement;
		}

		/**
		Copy constructs an iterator.
		@param other The iterator to copy */
		VectorConstIterator(const Iter& other)
		{
			m_pElement = other.m_pElement;
		}

		/**
		Assigns an iterator.
		@param other The iterator to copy
		@return A reference to this iterator */
		Iter& operator=(const Iter& other)
		{
			m_pElement = other.m_pElement;
			return *this;
		}

		/**
		Destructs the iterator. */
		~VectorConstIterator()
		{
			m_pElement = nullptr;
		}

		/**
		Moves the iterator to the next element. Integer parameter is a dummy parameter that
		indicates post-increment.
		@return A copy of the iterator */
		Iter operator++(int)
		{
			Iter temp = *this;
			++m_pElement;
			return temp;
		}

		/**
		Moves the iterator to the next element.
		@return A reference to this iterator */
		Iter& operator++()
		{
			++m_pElement;
			return *this;
		}

		/**
		Moves the iterator to the previous element. Integer parameter is a dummy parameter that
		indicates post-decrement.
		@return A copy of the iterator */
		Iter operator--(int)
		{
			Iter temp = *this;
			--m_pElement;
			return temp;
		}

		/**
		Moves the iterator to the previous element.
		@return A reference to this iterator */
		Iter& operator--()
		{
			--m_pElement;
			return *this;
		}

		/**
		Compares two iterators for equality.
		@param other The iterator to compare with
		@return True if the iterators are considered equal, false if they are not */
		bool operator==(const Iter& other)
		{
			return m_pElement == other.m_pElement;
		}

		/**
		Compares two iterators for inequality.
		@param other The iterator to compare with
		@return True if the iterators are not considered equal, false if they are */
		bool operator!=(const Iter& other)
		{
			return m_pElement != other.m_pElement;
		}

		/**
		Dereferences the currently addressed element. If the iterator is not targetting a valid
		element undefined behaviour will be invoked.
		@return A reference to an element */
		const ElementType& operator*()
		{
			return *m_pElement;
		}

		/**
		Dereferences the currently addressed element. If the iterator is not targetting a valid
		element undefined behaviour will be invoked.
		@return A reference to an element */
		const ElementType* operator->()
		{
			return m_pElement;
		}

		/**
		Moves the iterator to the next element. */
		Iter& next()
		{
			++m_pElement;
			return *this;
		}

		/**
		Moves the iterator to the previous element. */
		Iter& prev()
		{
			--m_pElement;
			return *this;
		}
};

#endif