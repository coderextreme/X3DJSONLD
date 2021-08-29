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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='MountainX.x3d',name='title'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='A mountain using a 9x9 elevation grid - I have used the mountain example of the VRML SourceBook as a base an changed its values to adopt my scene.',name='description'),
    meta(content='15 September 2002',name='created'),
    meta(content='16 February 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainX.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.4,0.1))),
      geometry=ElevationGrid(creaseAngle=1.57,height=[-3,-2,0.5,1.0,0.5,-1,-2,-3,-4,-2,0.0,0.0,0.0,2.5,0.5,0.0,0.0,-3,-2,0.0,0.5,0.5,3.0,1.0,0.5,0.0,1.0,-1,0.0,0.5,2.0,4.5,2.5,1.0,1.5,0.5,1.0,2.5,3.0,4.5,5.5,3.5,3.0,1.0,-2,0.5,2.0,2.0,2.5,3.5,4.0,2.0,0.5,-1,0,0.0,0.5,1.5,1.0,2.0,3.0,1.5,-4,-2,0.0,0.0,0.0,0.0,0.0,2.0,1.5,0.5,-4,0,1,-3,-1,-2,0.5,0.0,-3],solid=False,xDimension=9,zDimension=9))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MountainX.py")
