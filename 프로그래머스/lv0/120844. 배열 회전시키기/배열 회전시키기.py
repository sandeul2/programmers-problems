def solution(numbers, direction):
    from collections import deque
    numbers_deque = deque(numbers)
    if direction == "right":
        numbers_deque.rotate(1)
    elif direction == "left":
        numbers_deque.rotate(-1)
    return list(numbers_deque)