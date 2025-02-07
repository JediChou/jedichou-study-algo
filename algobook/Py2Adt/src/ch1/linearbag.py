# -*- coding: utf-8 -*-
# file: linearbag.py
# From Data Structures and Algorithms Using python.pdf, page 19

# Listing 1.3 The linearbag.py module.
# Implements the Bag ADT container using a Python list.
class Bag:
	# Constructs an empy bag.
	def __init__(self):
		self._theItems = list()

	# Returns the number of items in the bag.
	def __len__(self):
		return len(self._theItems)

	# Determins if an item is contained in the bag
	def __contains__(self, item):
		return item in self._theItems

	# Adds a new item to the bag.
	def add(self, item):
		self._theItems.append(item)

	# Removes and returns an instance of the item from the bag.
	def remove(self, item):
		assert item in self._theItems, "The item must be in the bag."
		ndx = self._theItems.index(item)
		return self._theItems.pop(ndx)

	# Returns an iterator for traversing the list of items
	def __iter__(self):
		return _BagIterator(self._theItems)

# List 1.4 the _BagIteraor class, which is part of the linearbag.py module.
# An iterator for the Bag ADT implemented as Python list.
class _BagIterator:
	def __init__(self, theList):
		self._bagItems = theList
		self._curItem = 0
	
	def __iter__(self):
		return self

	def next(self):
		if self._curItem < len(self._bagItems):
			item = self._bagItems[self._curItem]
			self._curItem += 1
			return item
		else:
			raise StopIteration

