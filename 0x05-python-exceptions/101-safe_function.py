#!/usr/bin/python3
def safe_function(fct, *args):
    import sys
    try:
        result = fct(*args)
    except Exception as inst:
        print("Exception:", inst, file=sys.stderr)
        result = None
    return result
