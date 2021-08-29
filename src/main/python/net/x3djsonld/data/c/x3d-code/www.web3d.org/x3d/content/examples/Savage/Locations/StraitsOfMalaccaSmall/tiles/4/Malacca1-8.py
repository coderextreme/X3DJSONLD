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
        texture=ImageTexture(url=['../../images/4/Malacca1-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.8445483343071585,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[21,10,8,23,29,17,24,25,26,5,25,22,17,7,5,4,20,27,26,27,26,27,10,11,14,23,16,24,26,25,10,2,26,3,5,2,1,11,19,26,26,26,25,26,9,10,10,14,24,23,21,24,8,5,16,5,0,0,4,6,15,27,25,27,25,26,11,19,14,25,24,31,29,28,9,5,8,4,3,2,2,8,16,26,29,27,27,23,20,11,24,26,36,30,29,29,27,4,9,0,5,0,2,2,11,21,28,32,28,26,26,26,26,12,29,24,27,25,25,12,1,-2,1,8,5,1,9,9,10,19,26,29,22,15,24,28,9,29,29,8,26,6,4,2,12,13,17,8,5,-2,2,9,13,19,28,21,31,28,29,18,4,6,3,3,2,4,5,9,11,12,1,4,8,5,5,6,12,25,10,29,30,29,5,15,1,-13,-7,9,11,7,22,11,12,6,5,14,5,5,21,14,12,9,25,27,5,3,4,-2,16,17,18,20,19,20,9,14,3,8,8,12,8,19,10,9,25,12,9,9,4,22,27,24,22,25,28,21,27,10,3,10,12,18,17,22,11,10,31,4,7,4,11,25,34,23,25,10,24,22,15,6,-8,19,24,10,16,13,31,28,26,14,6,2,25,23,31,33,26,10,11,8,8,4,5,14,18,18,6,25,20,15,17,17,-7,3,23,33,30,29,35,19,23,11,4,7,12,12,22,10,6,19,28,22,5,0,1,14,22,16,11,13,9,10,11,9,8,0,11,17,11,6,1,15,31,27,15,10,0,24,32,26,22,30,9,9,6,10,3,4,14,15,5,10,1,9,16,30,3,2,3,25,34,35,35,30,22,7,8,5,6,5,16,16,9,11,13,10,8,11,10,2,7,37,22,34,27,14,9,15,9,7,5,1,11,15,11,8,0,7,7,12,-1,4,14,36,32,37,33,15,10,10,12,13,6,4,13,9,13,5,8,1,-8,13,5,3,0,10,26,34,35,31,18,26,14,9,6,4,2,2,3,1,8,4,2,6,6,3,2,8,23,27,28,30,18,31,15,8,9,3,5,2,4,3,2,10,9,6,19,4,10,19,25,32,36,29,24,33,23,16,7,8,4,1,3,3,3,8,10,5,14,7,7,20,24,32,35,27,23,35,20,11,7,6,5,1,3,2],
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
