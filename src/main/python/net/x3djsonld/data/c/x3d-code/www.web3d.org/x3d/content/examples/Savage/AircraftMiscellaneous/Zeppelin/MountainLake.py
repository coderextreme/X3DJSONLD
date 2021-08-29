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
    meta(content='MountainLake.x3d',name='title'),
    meta(content='This a mountain under my Zeppelin which has a lake on top.',name='description'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='25 August 2002',name='created'),
    meta(content='16 February 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/MountainLake.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.4,0.1))),
      geometry=ElevationGrid(creaseAngle=2.5,height=[-3.5,-0.3,0.5,1.0,0.5,-4.1,-0.2,-0.3,-3.5,-0.4,0.0,0.0,0.0,2.5,0.5,0.0,0.0,0.0,-0.1,0.0,0.5,3.5,4.0,3.0,0.5,0.0,1.0,-0.5,0.0,0.5,3.5,1.5,3.5,1.0,1.5,0.5,1.0,2.5,3.0,3.5,1.5,3.5,3.0,1.0,0.0,0.5,2.0,2.0,2.5,1.5,3.0,2.0,0.5,-4.2,-3.2,0.0,0.5,2.5,4.0,3.5,3.0,1.5,0.0,0.5,0.0,0.0,0.0,0.0,0.0,2.0,1.5,0.5,-3.4,-0.3,-0.2,0.4,0.3,-4.2,0.5,-0.1,-3.3],xDimension=9,zDimension=9)),
    Transform(rotation=(1,0,0,3.14),scale=(1,1,1.90),translation=(4,1.5,4.3),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Cone(side=False))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MountainLake.py")
