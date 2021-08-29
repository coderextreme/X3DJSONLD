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
        texture=ImageTexture(url=['../../images/4/Malacca7-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.752923424950107,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[33,19,17,8,9,8,20,10,12,13,13,15,9,5,3,3,2,1,-5,-6,6,10,15,18,10,11,6,9,19,16,14,11,12,6,11,4,4,10,4,2,0,-3,0,0,34,23,8,16,6,6,6,17,10,17,15,18,9,15,5,8,5,3,3,-2,-1,2,26,27,17,8,8,8,6,8,9,14,14,13,7,15,3,6,3,1,2,-3,-3,0,25,25,25,22,9,5,5,7,8,11,12,12,7,5,12,11,5,2,2,0,-3,0,44,34,20,14,14,19,7,5,10,11,4,6,3,11,3,20,3,1,1,2,0,0,35,31,30,21,21,18,11,6,4,3,2,3,2,5,17,17,3,1,2,5,0,0,34,36,22,29,27,12,9,4,4,1,0,2,1,2,11,14,3,6,2,0,-1,0,39,26,23,31,8,5,4,4,3,5,9,6,2,2,6,4,6,8,4,-2,-3,0,37,27,18,19,12,14,2,2,3,2,1,3,1,2,4,5,3,6,5,0,0,-2,30,31,25,5,16,11,3,4,1,3,5,1,4,7,8,9,8,8,5,-5,0,-1,23,31,17,17,10,18,6,4,0,2,4,3,7,8,7,10,6,10,6,-3,0,0,28,28,16,10,7,9,7,1,5,3,2,3,6,4,6,8,7,8,1,-3,2,0,14,25,14,14,12,18,6,5,5,5,2,4,8,8,5,6,8,7,7,2,0,0,24,23,12,11,8,5,5,3,6,2,2,1,8,8,8,9,7,6,4,1,0,0,22,19,18,20,16,3,1,2,2,5,4,8,9,10,8,6,4,-1,-1,0,0,0,18,17,10,13,11,9,5,0,2,3,8,0,3,9,2,7,-2,0,0,0,1,1,17,16,22,14,12,10,8,5,2,2,-7,7,7,4,6,-10,0,0,1,0,0,0,20,25,15,12,10,8,7,8,6,9,9,8,0,7,6,0,-1,-2,-1,0,2,0,19,17,14,22,9,13,13,9,8,9,8,9,0,14,0,-3,0,0,0,0,0,0,12,16,18,13,8,11,1,7,9,6,10,10,-2,-5,0,0,-2,0,0,0,0,0,13,7,8,6,12,14,9,5,8,8,6,1,-1,0,0,0,0,1,0,0,0,0,12,6,8,4,10,14,7,4,8,9,7,0,-1,0,0,-1,0,0,0,-1,0,0],
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
