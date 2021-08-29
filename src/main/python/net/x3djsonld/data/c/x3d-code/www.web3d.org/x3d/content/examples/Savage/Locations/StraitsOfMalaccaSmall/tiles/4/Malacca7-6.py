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
        texture=ImageTexture(url=['../../images/4/Malacca7-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,101.29356261898111,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[0,1,3,0,0,1,2,2,3,14,12,12,10,7,21,20,19,8,10,22,8,17,3,0,6,1,3,1,3,1,9,10,9,9,12,7,17,20,9,8,12,17,7,28,1,0,2,-2,1,0,0,-1,10,10,12,11,10,10,14,18,20,19,12,13,33,14,3,0,2,5,6,1,0,9,8,10,11,7,11,10,6,6,7,10,10,12,11,7,1,2,4,1,-2,1,5,9,6,13,10,9,11,10,11,8,9,10,15,7,8,9,-1,0,0,0,4,6,5,5,15,10,6,8,12,15,7,7,14,9,13,14,13,12,-3,2,3,8,4,5,5,7,12,9,8,10,9,8,10,10,9,9,10,13,14,31,2,13,13,10,6,13,4,150,5,9,7,10,15,17,7,8,8,9,9,28,26,28,7,17,12,14,8,9,11,9,10,8,7,9,13,25,12,9,16,9,11,31,13,31,8,6,8,7,12,10,7,4,5,6,12,16,10,9,12,17,10,21,13,11,16,21,4,6,13,5,13,6,6,10,12,10,8,15,12,13,12,17,16,11,27,55,14,12,3,6,4,2,10,12,8,15,4,8,10,12,11,10,14,31,37,12,42,28,30,20,0,9,10,4,10,4,4,7,10,7,10,10,11,13,13,23,14,12,37,30,39,66,-2,6,8,6,7,6,10,10,11,11,12,11,18,15,25,26,14,14,21,43,27,20,10,9,3,5,7,6,12,5,11,15,10,11,20,16,13,10,-2,29,22,89,31,56,7,-4,-8,5,-4,3,4,9,15,8,13,14,10,14,4,13,11,20,53,38,46,75,5,5,0,8,4,0,6,4,12,6,8,8,9,8,10,8,14,37,25,69,57,46,6,7,4,3,1,2,9,7,14,8,10,11,17,12,23,10,17,31,53,97,112,56,6,5,0,3,6,0,2,7,7,5,8,9,19,8,22,13,13,44,59,57,89,44,3,6,9,-12,5,3,4,5,27,12,7,52,8,9,23,13,16,51,105,64,97,52,5,7,6,1,5,4,6,4,12,19,9,21,5,10,12,20,16,51,48,63,72,51,-3,6,9,5,4,5,7,7,8,9,6,10,9,10,15,29,12,53,41,41,45,42,-1,6,8,6,1,4,3,5,13,10,8,10,9,8,19,27,13,55,36,42,45,43],
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
