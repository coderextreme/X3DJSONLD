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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='UpperDeck.x3d',name='title'),
    meta(content='Upper optical deck for the MSADS Assembly',name='description'),
    meta(content='Ron Hatt',name='creator'),
    meta(content='17 September 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Space/SatelliteLab/UpperDeck.x3d',name='identifier'),
    meta(content='Wings3D, VizX3D',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Shape(DEF='UpperDeck',
      appearance=Appearance(
        material=Material(diffuseColor=(0.2,0.2,0.2))),
      geometry=IndexedFaceSet(coordIndex=[0,1,5,-1,0,5,4,-1,0,3,2,-1,0,2,1,-1,0,4,7,-1,0,7,3,-1,1,2,6,-1,1,6,5,-1,2,3,7,-1,2,7,6,-1,4,5,6,-1,4,6,7,-1],creaseAngle=0.524,
        coord=Coordinate(point=[(-2.25,-0,2.25),(-2.25,.1,2.25),(2.25,.1,2.25),(2.25,-0,2.25),(-2.25,-0,-2.25),(-2.25,.1,-2.25),(2.25,.1,-2.25),(2.25,-0,-2.25)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UpperDeck.py")
