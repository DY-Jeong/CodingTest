party_set = {3, 6, 10, 7, 3, 18, 5, 2, 15, 6}
study_set = set(['파이썬', '자바', 'C', 'C++', '자바스크립트', '파이썬'])
print(party_set)
print(type(party_set))

party_set.add(20)
print(party_set)
party_set.add(3)
print(party_set)

party_set.update([2,3,4,6,8,9,20])
print(party_set)

party_set.discard(3)

my_set = party_set.union(study_set)
print(my_set)
or_set = party_set | study_set
print(or_set)
and_set = party_set.intersection(study_set)
print(and_set)

dif_set = party_set - study_set
print(dif_set)
