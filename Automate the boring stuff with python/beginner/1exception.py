try:
    # Some code that may raise an exception
    result = 10 / 0  # This will raise a ZeroDivisionError
except ZeroDivisionError as e:
    # Catch the exception and assign it to the variable 'e'
    print("An exception occurred:", str(e))
