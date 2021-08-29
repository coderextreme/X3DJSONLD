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
        texture=ImageTexture(url=['../../images/5/newport30-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[46,43,39,36,32,29,25,21,20,19,18,18,19,19,19,18,17,14,6,0,0,0,51,47,38,33,31,28,24,21,19,17,17,17,17,17,16,16,15,17,10,1,0,0,54,50,43,35,31,26,22,20,19,19,19,18,18,17,15,4,6,12,14,1,0,0,55,50,44,37,31,23,22,21,24,26,24,23,20,19,18,16,10,1,1,0,0,0,55,50,44,37,30,23,22,23,25,29,29,27,24,21,19,17,15,10,0,0,0,0,56,50,44,36,30,24,24,25,27,29,31,30,28,26,20,18,16,7,0,0,0,0,56,51,46,36,29,26,26,27,29,30,30,30,29,26,21,17,6,3,0,0,0,0,55,51,42,33,29,28,27,29,30,29,29,29,28,26,21,7,4,8,1,0,0,0,55,50,43,35,31,30,29,30,31,31,31,31,29,25,17,2,11,14,2,0,0,0,53,48,43,34,32,30,30,30,31,32,32,30,29,24,15,7,18,18,10,2,0,0,50,46,40,33,32,30,29,30,29,31,31,28,25,19,9,13,18,18,18,4,0,0,49,45,41,35,33,31,30,29,29,30,29,27,20,15,15,18,18,19,16,0,0,0,50,47,45,40,39,35,31,30,30,29,27,24,18,15,17,19,20,20,13,0,0,0,49,47,46,45,42,39,34,31,29,28,25,23,19,17,19,24,23,20,0,0,0,0,46,48,47,46,44,40,35,31,28,26,24,21,20,19,20,21,23,22,17,0,0,0,45,46,47,46,44,40,35,29,27,25,24,23,22,20,21,22,25,25,24,17,0,0,45,45,45,46,44,41,34,29,27,27,25,24,23,21,23,24,25,27,19,7,1,0,43,44,45,46,44,39,32,29,27,26,26,25,25,24,26,24,20,14,0,0,0,0,41,43,46,47,43,38,32,29,28,27,27,27,26,29,29,24,23,15,0,0,0,0,41,43,44,43,41,35,31,29,28,28,29,29,30,30,30,25,22,18,1,0,0,0,39,42,44,42,37,33,29,28,28,30,32,31,32,32,30,27,25,19,1,0,0,0,39,42,43,40,35,31,29,28,29,33,35,35,35,34,31,29,27,18,1,0,0,0,37,42,41,40,35,30,28,28,30,34,37,37,36,36,32,28,24,13,1,0,0,0,37,42,41,39,35,30,28,28,30,35,37,37,37,36,32,28,23,13,1,0,0,0],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
