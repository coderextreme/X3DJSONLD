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
        texture=ImageTexture(url=['../../images/4/Malacca4-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[24,13,16,17,16,15,12,15,30,26,17,12,15,19,16,32,33,15,30,31,30,28,23,26,12,27,10,9,10,31,42,25,17,12,15,13,36,33,12,12,31,34,34,25,33,18,14,25,26,9,9,18,44,33,23,23,28,27,34,35,16,30,33,31,34,22,26,12,14,19,28,28,8,7,11,25,24,32,31,33,24,9,11,32,32,33,30,23,13,26,16,16,8,31,31,30,29,28,24,31,30,32,30,14,14,33,36,29,12,13,13,15,16,10,11,23,20,17,29,31,33,35,31,30,26,26,28,26,15,33,11,6,10,11,8,16,24,20,23,25,21,25,30,30,33,26,14,23,33,31,30,8,13,6,9,9,9,23,25,30,26,18,24,23,34,32,31,13,11,24,26,26,27,12,3,1,12,9,14,26,29,22,21,23,30,30,34,32,32,9,27,30,26,20,27,7,15,4,6,6,16,21,26,25,25,20,20,31,32,34,9,12,27,25,20,20,26,10,15,4,23,24,21,23,23,27,31,23,24,23,22,17,17,22,17,8,7,19,18,22,4,4,17,29,20,27,26,23,25,26,10,19,26,8,20,6,21,8,8,5,9,19,3,3,11,21,24,20,29,30,22,19,7,32,9,10,9,7,12,16,8,6,19,8,3,12,21,30,27,25,24,23,33,25,6,6,8,9,8,15,22,30,18,18,21,4,13,8,25,33,32,35,25,22,18,28,9,6,12,18,10,25,27,24,29,24,15,15,1,7,26,23,29,37,31,27,22,25,15,5,15,24,18,24,11,14,27,14,18,11,11,7,31,29,26,30,30,30,16,5,15,5,4,22,18,18,14,8,22,14,11,7,8,8,23,24,22,24,32,26,10,8,4,8,3,22,19,12,19,19,9,12,3,10,10,5,23,28,19,33,32,11,9,5,2,6,3,5,2,10,6,13,11,18,15,14,2,6,21,25,32,31,26,18,12,2,0,8,3,4,11,7,4,13,15,10,16,4,6,8,33,28,28,29,22,26,1,0,3,3,10,5,4,13,12,-8,2,5,17,10,9,21,28,28,28,27,27,22,2,0,2,4,6,6,6,8,0,6,9,10,20,8,17,31,30,27,27,27,30,20,1,0,2,5,5,4,6,8,0,4,9,10,20,9,18,31],
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
