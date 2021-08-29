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
        texture=ImageTexture(url=['../../images/4/Malacca0-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(0.5264858192000004,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[42,17,41,20,43,59,50,50,30,22,11,19,22,26,27,31,28,28,30,28,32,33,32,31,31,30,46,50,51,40,31,17,18,22,23,28,27,31,26,30,31,31,33,34,28,23,19,36,58,40,40,25,19,18,27,24,13,16,30,29,33,32,32,27,32,35,24,17,29,27,42,47,27,16,9,31,26,13,7,12,32,21,30,32,30,29,31,33,12,18,25,35,46,28,26,11,12,27,7,11,24,13,14,12,32,31,31,30,32,32,8,14,24,39,35,27,23,26,20,8,15,9,20,13,13,15,33,32,28,26,34,34,8,19,26,32,23,27,12,17,20,11,12,24,17,15,19,17,20,33,12,28,28,32,9,13,19,19,32,43,42,15,26,25,13,21,30,15,27,18,24,31,16,26,29,28,14,5,22,7,22,41,38,39,36,12,25,29,33,24,19,23,16,26,13,26,29,27,7,22,16,16,34,34,39,23,16,14,18,17,20,11,17,12,20,24,12,10,8,30,11,7,6,30,34,46,33,15,8,10,20,25,29,22,12,9,19,25,26,27,29,30,8,12,7,18,33,20,17,13,14,27,27,15,24,22,16,13,5,30,12,32,29,30,17,22,9,19,23,15,7,7,12,15,15,24,15,24,11,25,4,23,12,30,30,31,15,26,9,13,12,15,10,7,21,17,7,16,17,22,31,23,8,6,13,27,32,35,20,28,9,29,24,13,7,14,12,19,30,23,31,30,34,6,13,19,7,29,31,34,7,25,31,27,19,5,10,11,10,10,19,28,30,29,8,9,13,6,6,8,28,28,19,19,23,12,8,22,25,27,16,15,10,24,23,24,21,10,2,9,9,7,25,27,17,7,13,10,15,24,27,29,23,20,15,10,15,7,13,9,10,15,14,2,9,8,8,10,2,14,22,32,27,27,31,24,20,8,6,12,8,4,12,4,1,11,5,22,7,14,20,18,24,24,33,32,32,30,22,4,10,12,10,11,10,14,5,11,2,18,3,5,11,24,30,31,30,34,30,32,11,27,27,18,23,23,15,15,14,7,6,7,3,8,25,12,33,35,33,34,36,28,20,28,26,28,28,27,14,12,21,8,16,21,3,8,22,12,34,35,33,35,34,27,20,28,27,27,27,25,13,10,21,6,19,21],
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
