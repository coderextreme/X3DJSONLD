'''
x3d.py package 4.0.63.7 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Script(DEF="Browser", 
#['', 'ecmascript:', '                function initialize() {', '\t\t    Browser.print(\'DUDES
#\'+\'"DUDETTES\');', '                }', '', '']
),
Script(DEF="Clouds", 
#['', '', 'ecmascript:', '', '', 'function cumulustranslation() // These values designate the boundary location of the cloud', '{', "var xxx = ' '+' '+", "'\tTransform\t\t
#'+", "'    ' + '               \t
#';", '', '}', '', '']
)]))
.XML())
