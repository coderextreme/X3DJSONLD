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
        texture=ImageTexture(url=['../../images/4/Malacca2-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.1626108494143166,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,8,10,5,14,7,7,20,24,32,35,27,23,35,20,11,7,6,5,1,3,2,13,8,2,26,30,4,1,19,24,30,31,24,26,19,19,20,18,16,3,3,5,2,12,2,3,23,25,-4,7,20,25,32,33,20,20,19,22,14,11,10,4,4,4,3,2,3,4,7,7,2,7,25,21,26,33,31,22,24,20,11,15,4,6,3,4,2,4,4,3,6,2,0,4,18,28,31,32,33,32,28,15,12,13,6,7,0,3,3,2,1,4,4,4,1,7,21,33,32,34,29,36,28,17,7,9,9,7,1,2,5,12,3,1,4,2,1,20,25,28,31,36,31,29,17,15,8,5,10,0,1,3,3,5,5,4,5,4,24,25,31,35,32,34,26,22,19,11,8,9,0,7,11,3,2,14,11,6,2,0,25,18,34,34,34,19,14,11,7,8,13,0,5,9,8,5,2,7,4,5,4,1,25,29,29,27,29,21,19,15,11,12,5,5,10,8,9,5,3,28,7,0,4,5,6,24,19,35,20,29,23,10,13,4,5,6,12,10,11,4,3,15,17,2,3,2,3,21,34,36,36,35,26,16,4,8,12,20,22,20,4,6,4,11,8,2,3,0,1,22,30,31,20,20,22,9,0,7,25,21,20,9,1,6,4,10,6,1,3,2,3,28,30,29,8,24,9,-14,8,6,27,19,22,9,6,2,4,10,2,1,4,1,3,29,29,23,10,12,2,6,9,17,11,11,12,8,3,2,3,6,2,0,1,3,10,21,27,23,7,3,3,22,27,23,26,12,10,7,3,3,5,3,1,2,0,4,9,11,18,13,4,14,8,26,23,23,18,10,11,10,1,5,3,10,1,2,3,1,4,1,14,7,-1,5,12,21,20,19,11,7,11,6,0,2,3,4,5,7,3,5,4,-15,4,4,5,3,11,9,8,8,9,7,4,7,4,5,4,4,0,5,4,3,8,4,3,4,5,8,16,7,6,8,10,8,8,5,4,4,5,1,7,10,12,10,14,20,8,9,6,13,15,17,5,3,5,5,6,5,3,4,4,3,9,23,9,10,25,11,22,18,9,27,24,9,8,7,6,3,11,4,6,5,2,4,9,24,10,12,24,8,25,14,10,27,25,13,7,7,6,5,10,5,4,3,2],
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
