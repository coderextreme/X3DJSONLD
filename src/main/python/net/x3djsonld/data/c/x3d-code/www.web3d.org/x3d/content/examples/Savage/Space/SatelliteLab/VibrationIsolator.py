###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='VibrationIsolator.x3d',name='title'),
    meta(content='A vibration isolator for the optical deck of the MSADS Assembly',name='description'),
    meta(content='Ron Hatt',name='creator'),
    meta(content='13 September 2006',name='created'),
    meta(content='30 December 2013',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Space/SatelliteLab/VibrationIsolator.x3d',name='identifier'),
    meta(content='Wings3D, VizX3D',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(DEF='VibrationIsolator',
      appearance=Appearance(
        material=Material(diffuseColor=(0.2,0.2,0.2))),
      geometry=IndexedFaceSet(DEF='VibrationIsolator_Geo',coordIndex=[0,1,17,-1,0,17,16,-1,0,15,34,-1,0,34,33,-1,0,16,31,-1,0,31,15,-1,0,33,32,-1,0,32,1,-1,1,2,18,-1,1,18,17,-1,1,32,47,-1,1,47,2,-1,2,3,19,-1,2,19,18,-1,2,47,46,-1,2,46,3,-1,3,4,20,-1,3,20,19,-1,3,46,45,-1,3,45,4,-1,4,5,21,-1,4,21,20,-1,4,45,44,-1,4,44,5,-1,5,6,22,-1,5,22,21,-1,5,44,43,-1,5,43,6,-1,6,7,23,-1,6,23,22,-1,6,43,42,-1,6,42,7,-1,7,8,24,-1,7,24,23,-1,7,42,41,-1,7,41,8,-1,8,9,25,-1,8,25,24,-1,8,41,40,-1,8,40,9,-1,9,10,26,-1,9,26,25,-1,9,40,39,-1,9,39,10,-1,10,11,27,-1,10,27,26,-1,10,39,38,-1,10,38,11,-1,11,12,28,-1,11,28,27,-1,11,38,37,-1,11,37,12,-1,12,13,29,-1,12,29,28,-1,12,37,36,-1,12,36,13,-1,13,14,30,-1,13,30,29,-1,13,36,35,-1,13,35,14,-1,14,15,31,-1,14,31,30,-1,14,35,34,-1,14,34,15,-1,16,17,18,-1,16,18,19,-1,16,19,20,-1,16,20,21,-1,16,21,22,-1,16,22,23,-1,16,23,24,-1,16,24,25,-1,16,25,26,-1,16,26,27,-1,16,27,28,-1,16,28,29,-1,16,29,30,-1,16,30,31,-1,32,33,49,-1,32,49,48,-1,32,48,63,-1,32,63,47,-1,33,34,50,-1,33,50,49,-1,34,35,51,-1,34,51,50,-1,35,36,52,-1,35,52,51,-1,36,37,53,-1,36,53,52,-1,37,38,54,-1,37,54,53,-1,38,39,55,-1,38,55,54,-1,39,40,56,-1,39,56,55,-1,40,41,57,-1,40,57,56,-1,41,42,58,-1,41,58,57,-1,42,43,59,-1,42,59,58,-1,43,44,60,-1,43,60,59,-1,44,45,61,-1,44,61,60,-1,45,46,62,-1,45,62,61,-1,46,47,63,-1,46,63,62,-1,48,49,50,-1,48,50,51,-1,48,51,52,-1,48,52,53,-1,48,53,54,-1,48,54,55,-1,48,55,56,-1,48,56,57,-1,48,57,58,-1,48,58,59,-1,48,59,60,-1,48,60,61,-1,48,61,62,-1,48,62,63,-1],creaseAngle=0.524,
        coord=Coordinate(DEF='VibrationIsolator_Coord',point=[(.3,.01,-0),(.27716,.01,.11481),(.21213,.01,.21213),(.11481,.01,.27716),(-0,.01,.3),(-.11481,.01,.27716),(-.21213,.01,.21213),(-.27716,.01,.11481),(-.3,.01,0),(-.27716,.01,-.11481),(-.21213,.01,-.21213),(-.11481,.01,-.27716),(-0,.01,-.3),(.11481,.01,-.27716),(.21213,.01,-.21213),(.27716,.01,-.11481),(.3,-.01,-0),(.27716,-.01,.11481),(.21213,-.01,.21213),(.11481,-.01,.27716),(-0,-.01,.3),(-.11481,-.01,.27716),(-.21213,-.01,.21213),(-.27716,-.01,.11481),(-.3,-.01,0),(-.27716,-.01,-.11481),(-.21213,-.01,-.21213),(-.11481,-.01,-.27716),(-0,-.01,-.3),(.11481,-.01,-.27716),(.21213,-.01,-.21213),(.27716,-.01,-.11481),(.21065,.01,.08725),(.228,.01,0),(.21065,.01,-.08725),(.16122,.01,-.16122),(.08725,.01,-.21065),(-0,.01,-.228),(-.08725,.01,-.21065),(-.16122,.01,-.16122),(-.21065,.01,-.08725),(-.228,.01,0),(-.21065,.01,.08725),(-.16122,.01,.16122),(-.08725,.01,.21065),(-0,.01,.228),(.08725,.01,.21065),(.16122,.01,.16122),(.12217,.17,.05061),(.13224,.17,0),(.12217,.17,-.05061),(.09351,.17,-.09351),(.05061,.17,-.12217),(-0,.17,-.13224),(-.05061,.17,-.12217),(-.09351,.17,-.09351),(-.12217,.17,-.05061),(-.13224,.17,0),(-.12217,.17,.05061),(-.09351,.17,.09351),(-.05061,.17,.12217),(-0,.17,.13224),(.05061,.17,.12217),(.09351,.17,.09351)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VibrationIsolator.py")
