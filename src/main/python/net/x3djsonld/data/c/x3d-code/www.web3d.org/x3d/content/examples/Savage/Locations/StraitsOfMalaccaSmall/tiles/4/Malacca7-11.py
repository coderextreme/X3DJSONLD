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
        texture=ImageTexture(url=['../../images/4/Malacca7-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,103.38106271813204,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[20,29,23,7,12,6,3,6,6,9,4,6,3,3,3,3,4,3,2,2,2,3,29,30,34,34,12,12,9,8,5,6,5,6,3,3,2,2,3,2,5,3,2,3,34,10,33,24,11,13,15,14,7,6,4,6,5,3,3,3,4,2,3,2,3,3,15,13,20,29,31,19,8,14,5,6,6,4,5,5,3,5,4,3,3,3,3,3,18,14,18,28,13,8,11,5,4,3,4,5,5,5,5,5,5,3,3,3,3,3,10,18,23,17,9,7,15,5,4,4,5,4,6,7,6,6,7,2,5,3,3,1,6,18,28,29,11,0,6,4,4,4,3,3,4,5,5,6,5,6,5,3,3,3,10,23,10,19,13,3,6,4,4,3,4,4,3,5,6,5,6,7,6,3,3,1,13,16,23,8,10,4,5,4,3,4,3,5,3,4,4,4,6,7,6,3,6,4,23,9,11,17,3,4,5,5,5,5,4,4,4,4,2,4,4,6,6,6,5,5,11,6,17,13,4,3,5,5,5,5,4,5,3,3,2,5,5,5,5,4,5,5,46,12,9,11,2,3,5,4,5,3,5,4,5,5,4,4,4,5,5,3,7,6,29,15,28,10,3,5,3,4,5,4,5,3,3,5,4,4,4,4,4,3,6,6,23,30,20,13,3,6,4,4,5,4,6,3,3,4,4,4,4,4,4,3,3,5,23,31,19,5,4,5,5,3,4,4,4,6,4,3,3,4,4,4,5,2,4,4,48,19,31,5,3,5,4,4,4,4,4,3,3,3,5,6,4,5,4,4,4,4,27,18,16,9,4,6,4,4,4,2,2,3,3,4,4,6,4,5,4,3,4,4,33,7,5,12,3,4,4,4,5,5,5,5,4,4,3,3,3,4,4,5,4,4,17,25,4,9,3,3,5,3,4,5,6,4,5,4,3,3,5,5,5,4,5,6,14,6,13,4,4,4,3,4,4,4,6,4,5,4,4,3,3,3,5,6,5,5,10,7,9,12,4,4,3,3,2,3,4,5,4,5,4,4,4,5,4,3,4,6,21,15,28,10,4,5,4,3,4,3,4,6,5,3,3,5,5,4,4,3,4,6,21,21,29,13,5,5,4,2,4,3,4,4,5,3,4,4,4,5,4,4,5,6],
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
