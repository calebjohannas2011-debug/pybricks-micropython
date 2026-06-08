# Virtual sys module map for Move Hub
from usys import *

try:
    import usys as _sys
    modules = _sys.modules
    path = _sys.path
    argv = _sys.argv
    version = _sys.version
except ImportError:
    pass
