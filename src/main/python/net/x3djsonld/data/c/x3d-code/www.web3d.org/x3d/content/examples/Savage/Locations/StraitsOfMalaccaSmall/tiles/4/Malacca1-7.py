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
        texture=ImageTexture(url=['../../images/4/Malacca1-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,8,22,12,34,35,33,35,34,27,20,28,27,27,27,25,13,10,21,6,19,21,6,33,29,18,36,35,36,21,31,28,26,35,33,26,32,19,18,17,26,9,19,10,34,33,30,21,36,32,35,34,33,29,30,30,33,35,28,24,4,6,18,5,17,9,27,31,17,19,30,33,34,35,31,35,32,36,34,37,34,23,3,11,18,22,12,11,16,24,25,30,37,33,21,31,34,33,33,34,34,31,32,27,6,8,8,8,6,20,19,28,24,33,36,35,44,37,31,31,29,30,30,31,33,22,15,5,9,6,9,26,26,32,26,28,33,48,27,30,34,34,30,34,30,30,24,32,7,4,12,17,9,22,45,37,46,29,42,37,35,34,36,37,34,33,28,31,23,28,7,4,6,12,12,28,23,16,16,14,11,34,37,37,33,37,34,36,29,24,22,4,4,3,5,4,11,12,17,22,19,13,30,32,36,11,36,27,33,35,29,29,29,22,6,5,6,7,9,21,18,11,12,17,36,29,32,-1,34,32,28,33,31,28,33,22,33,5,7,4,10,8,21,14,10,10,35,17,24,14,32,33,35,30,31,30,35,33,35,27,7,5,7,17,15,23,32,32,31,22,3,37,33,34,34,26,34,30,32,30,36,28,6,5,5,16,27,28,29,36,32,30,32,28,30,33,33,32,28,33,31,33,24,28,8,10,7,6,28,29,32,35,28,11,32,26,32,35,27,31,28,30,26,30,30,16,8,3,6,6,36,29,29,21,28,33,28,33,32,34,26,30,33,27,14,34,33,34,30,7,9,1,29,27,13,13,30,37,28,8,27,14,32,31,24,29,4,23,29,11,13,11,8,1,29,6,34,4,29,35,33,13,29,28,32,26,9,4,2,2,32,34,23,10,-8,13,38,34,33,27,29,36,38,35,34,33,36,31,26,9,2,7,4,18,20,7,1,0,37,37,37,34,37,38,37,38,16,27,27,31,26,19,24,12,8,18,7,4,4,8,36,36,39,37,38,37,37,39,39,35,29,32,33,24,33,20,2,2,1,3,3,8,38,38,38,37,39,38,35,39,41,41,33,29,35,30,25,25,10,3,1,8,2,2,39,38,38,38,39,37,35,38,42,41,35,32,31,31,25,23,6,3,1,8,1,3],
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
