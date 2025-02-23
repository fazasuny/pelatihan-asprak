def has_duplicate_dictionary(lst):
    # dictionary ini berisi key:value, dimana key adalah
    # item yang terdapat di list dan value adalah seberapa
    # sering item tersebut muncul di list
    frequency = {}
    for item in lst:
        if item in frequency:
            return True
        frequency[item] = 1
    return False


def has_duplicate_set(lst):
    # set ini berisi item yang sudah pernah dilihat dalam lst
    seen = set()
    for item in lst:
        if item in seen:
            return True
        seen.add(item)
    return False


def main():
    lst = [1, 2, 3, 4, 5, 6, 7, 7]
    print(has_duplicate_dictionary(lst))  # Output: True
    print(has_duplicate_set(lst))         # Output: True


if __name__ == "__main__":
    main()