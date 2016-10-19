/**
An indexed array entry.

@see IndexedArray

@date edited 25/09/2016
@date authored 15/09/2016

@author Nathan Sainsbury */

#ifndef INDEXED_ARRAY_ENTRY_H
#define INDEXED_ARRAY_ENTRY_H

template <class ElementType, class IdType>
struct IndexedArrayEntry
{
	/** 
	The data. */
	ElementType data;

	/** 
	The version. */
	IdType version;

	/** 
	True if the entry is in use. */
	bool bActive;
};

#endif