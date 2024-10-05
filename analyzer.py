import stringdata
import time

def linear_search(container, element):

    for i in range (len(container)):
        if container[i] == element:
            return i
    return -1

def binary_search(container, element):
    low = 0
    high = len(container)-1
    mid = 8788

    while low <= high:
        mid = (low + high) // 2
        if container[mid] == element:
            return mid
        elif container[mid] > element:
            high = mid - 1
        else:
            low = mid + 1
    return -1
def main():
    dataset = stringdata.get_data()

#Search for not_here
    #Linear
    begin_time = float(time.time())
    linear_search_result = int(linear_search(dataset, "not_here"))
    end_time_linear_search = float(time.time()) - begin_time
    print("Linear search result for not_here: " + str(linear_search_result))

    #Binary
    begin_time = float(time.time())
    binary_search_result = int(binary_search(dataset, "not_here"))
    end_time_binary_search = float(time.time()) - begin_time
    print("Binary search result for not_here: " + str(binary_search_result))

    #Print times
    print("Linear time to find not_here: " + str(end_time_linear_search))
    print("Binary time to find not_here: " + str(end_time_binary_search))

#Search for mzzzz
    #Linear
    begin_time = float(time.time())
    linear_search_result = int(linear_search(dataset, "mzzzz"))
    end_time_linear_search = float(time.time()) - begin_time
    print("Linear search result for mzzzz: " + str(linear_search_result))

    #Binary
    begin_time = float(time.time())
    binary_search_result = int(binary_search(dataset, "mzzzz"))
    end_time_binary_search = float(time.time()) - begin_time
    print("Binary search result for mzzzz: " + str(binary_search_result))

    #print times
    print("Linear time to find mzzzz: " + str(end_time_linear_search))
    print("Binary time to find mzzzz: " + str(end_time_binary_search))

#Search for aaaaa
    #Linear
    begin_time = float(time.time())
    linear_search_result = int(linear_search(dataset, "aaaaa"))
    end_time_linear_search = float(time.time()) - begin_time
    print("Linear search result for aaaaa: " + str(linear_search_result))

    #Binary
    begin_time = float(time.time())
    binary_search_result = int(binary_search(dataset, "aaaaa"))
    end_time_binary_search = float(time.time()) - begin_time
    print("Binary search result for aaaaa: " + str(binary_search_result))

    #Print times
    print("Linear time to find aaaaa: " + str(end_time_linear_search))
    print("Binary time to find aaaaa: " + str(end_time_binary_search))

if __name__ == "__main__":
    main()