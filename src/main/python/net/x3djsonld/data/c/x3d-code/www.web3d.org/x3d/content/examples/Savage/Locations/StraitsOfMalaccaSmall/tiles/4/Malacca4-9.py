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
        texture=ImageTexture(url=['../../images/4/Malacca4-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,4,4,5,6,3,2,1,4,2,2,4,2,0,5,5,3,-2,17,39,19,13,7,5,2,2,2,6,3,0,3,2,3,5,0,4,5,3,2,0,5,114,260,38,1,5,4,2,3,4,2,3,3,0,2,4,1,6,6,4,2,9,14,8,132,35,3,4,3,2,5,0,1,6,3,1,2,4,3,1,5,6,8,10,6,10,20,34,4,4,2,2,1,1,2,7,5,2,1,6,3,4,0,8,13,11,5,4,7,47,5,3,3,4,6,-1,4,6,5,4,11,5,4,14,6,11,7,8,5,12,4,7,5,6,2,5,3,7,3,6,9,5,8,3,13,13,8,12,9,10,10,9,9,3,7,3,5,7,1,6,3,10,11,7,8,11,10,9,9,12,7,8,12,9,6,11,4,3,6,5,0,6,13,9,9,11,7,9,8,12,10,11,6,12,7,12,13,8,4,4,1,5,-3,12,9,11,9,11,11,14,11,13,12,9,7,9,8,11,16,15,2,2,6,5,8,7,5,9,11,18,13,11,12,12,11,12,11,10,8,10,9,7,7,0,8,-1,-1,9,9,8,12,11,12,13,13,11,15,12,13,11,11,68,36,43,7,0,11,0,9,10,11,24,27,15,14,14,12,15,14,15,9,13,10,49,102,7,10,0,9,11,14,6,11,84,24,24,13,14,16,16,16,10,16,10,25,8,18,8,5,4,10,10,14,10,6,16,32,16,11,16,14,15,21,12,11,8,211,98,18,13,7,0,14,10,11,10,38,88,19,27,20,12,17,15,14,12,11,20,29,12,17,7,6,10,12,13,16,16,14,41,32,31,23,10,15,20,37,34,16,11,14,9,13,11,7,7,7,6,7,11,10,10,30,22,20,11,32,33,37,29,81,71,15,20,11,8,10,5,9,8,11,12,9,11,35,22,13,21,35,39,40,25,102,61,24,14,9,6,9,11,8,9,11,15,16,26,36,41,17,21,27,28,18,26,91,55,87,7,12,8,10,14,11,10,14,10,19,37,53,73,43,15,18,20,17,23,117,117,389,26,7,11,7,7,9,6,9,22,13,45,146,45,38,23,16,14,29,44,79,119,323,71,13,48,7,7,8,11,9,28,12,46,148,40,39,25,17,13,28,38,100,152,358,79,13,72],
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
