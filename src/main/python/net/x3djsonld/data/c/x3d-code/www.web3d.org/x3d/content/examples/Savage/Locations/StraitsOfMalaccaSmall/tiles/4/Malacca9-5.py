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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca9-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[6,0,0,2,2,3,1,2,0,1,0,2,0,0,0,4,3,6,4,6,5,9,0,2,0,3,1,2,1,2,1,3,1,-1,0,0,2,-2,8,4,6,8,6,10,0,2,1,0,2,0,2,3,1,0,1,0,1,2,-1,4,4,5,4,9,7,4,0,1,3,2,3,0,0,1,0,1,-1,1,1,1,0,6,7,7,8,11,5,9,0,0,1,1,2,1,2,0,1,1,1,1,1,2,6,7,9,3,6,6,8,10,1,0,0,2,1,1,2,0,1,1,0,3,1,3,6,5,7,4,7,6,13,21,1,3,2,1,2,0,2,1,1,0,-1,2,1,7,1,9,2,6,4,15,23,25,0,2,1,2,1,3,0,1,2,0,0,0,5,4,2,3,7,4,14,23,19,20,1,2,1,3,3,2,2,2,2,4,0,2,7,2,2,4,3,14,25,21,21,18,0,1,1,2,2,4,1,0,1,1,1,0,1,4,2,3,15,17,15,18,17,22,2,2,3,1,2,0,3,0,1,0,0,8,3,3,3,16,18,17,17,19,20,16,1,3,1,3,2,4,3,1,1,4,0,3,3,5,8,25,23,19,18,16,19,21,2,3,1,3,0,3,2,0,1,3,0,4,2,5,22,22,18,24,18,17,18,19,1,2,1,2,1,1,3,3,3,1,6,3,4,20,23,24,17,20,17,18,21,21,2,0,0,2,2,3,2,0,2,2,9,4,5,17,21,24,24,19,24,17,16,21,0,1,1,2,3,3,1,1,0,3,9,3,12,22,16,18,17,22,18,23,20,21,0,1,2,0,2,3,5,2,2,4,3,5,19,25,22,23,16,17,16,21,21,24,1,2,1,0,1,1,3,-3,7,6,3,4,19,20,22,23,21,21,21,21,23,22,1,2,1,1,2,2,2,1,5,4,4,10,19,22,21,26,21,20,22,16,19,20,0,3,0,0,-2,0,-1,5,4,4,10,9,22,22,24,24,20,19,19,14,6,8,0,2,2,1,1,6,7,2,3,11,9,21,20,24,21,22,20,17,17,6,16,7,1,2,0,0,5,7,3,3,4,8,7,19,21,21,20,19,17,15,14,14,18,15,1,3,1,0,4,7,2,2,2,8,8,20,21,20,21,17,15,17,14,14,19,14],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
