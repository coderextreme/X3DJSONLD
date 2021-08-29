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
        texture=ImageTexture(url=['../../images/4/Malacca3-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.4806733645214747,100.87606259915093,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[23,24,32,21,7,17,16,7,7,13,20,20,18,15,36,29,32,30,19,12,17,15,14,16,15,15,15,16,10,8,10,13,25,19,11,26,33,30,30,27,16,11,9,21,13,12,23,15,17,9,8,24,13,26,28,19,17,7,25,27,34,34,33,16,13,23,11,13,13,25,15,16,9,21,20,22,15,5,16,11,21,24,12,23,33,29,26,27,14,14,16,22,16,28,32,6,22,6,14,6,8,14,10,8,29,33,32,31,30,12,11,18,16,14,15,17,22,30,13,26,20,16,14,12,11,10,21,31,31,32,28,18,11,14,22,20,19,33,42,9,9,23,13,13,12,12,11,11,28,8,25,23,26,25,17,13,14,14,11,38,33,9,22,26,21,10,6,9,15,10,31,33,25,9,11,16,26,23,12,19,8,14,18,5,5,10,10,7,5,19,11,26,17,33,32,11,10,8,11,16,7,11,16,19,25,10,6,8,28,7,5,24,25,25,14,30,24,24,15,8,13,29,9,22,21,26,14,12,11,2,8,9,23,7,23,30,23,28,32,36,33,28,21,8,9,31,31,15,11,9,9,8,20,19,19,12,25,33,25,27,34,35,34,35,6,3,11,26,30,13,18,9,9,6,18,9,26,22,25,26,30,35,33,32,35,26,14,12,15,15,29,15,9,10,11,14,19,7,2,28,20,26,30,33,33,29,12,27,7,1,5,5,6,7,6,10,11,11,13,6,15,14,28,23,30,34,36,29,28,11,5,3,4,14,15,6,6,7,7,4,4,13,3,24,19,19,27,32,32,32,26,23,5,6,13,7,8,20,3,2,6,11,16,22,15,20,20,29,27,33,36,32,24,23,5,5,12,4,6,6,4,1,4,11,14,25,17,25,30,33,31,32,24,9,23,11,7,23,13,3,11,5,2,7,5,2,17,21,25,28,31,31,31,31,34,24,11,9,23,28,3,6,6,3,1,2,1,1,23,22,30,25,29,29,30,38,31,32,13,8,25,13,6,20,3,4,5,3,2,2,5,26,29,28,27,32,33,35,34,12,19,8,28,14,7,4,2,7,5,2,4,14,15,22,28,31,30,32,32,36,35,16,27,7,28,21,12,5,0,10,5,2,4,13,16,24,27,33,29,32,32,37,31,13,26,13],
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
