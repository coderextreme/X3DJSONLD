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
        texture=ImageTexture(url=['../../images/5/newport17-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,12,15,18,28,28,34,40,42,44,42,38,29,23,18,16,17,0,0,0,0,0,0,11,17,18,23,29,32,39,42,43,45,41,32,25,19,15,15,0,0,0,0,0,0,11,19,19,24,28,30,36,35,39,44,42,35,26,19,17,16,0,0,0,0,0,0,7,17,20,21,25,29,31,33,35,39,41,35,27,21,16,14,0,0,0,0,0,0,3,15,19,23,23,24,27,30,33,38,40,37,29,23,16,16,0,0,0,0,0,0,0,14,18,22,23,24,27,28,34,34,37,36,31,24,19,19,0,0,0,0,0,0,0,10,14,20,23,27,25,27,31,35,39,37,33,27,23,22,0,0,0,0,0,0,0,3,14,17,22,26,27,29,31,33,38,39,35,29,24,23,0,0,0,0,0,0,0,0,10,17,22,23,26,27,32,34,36,39,37,31,27,25,0,0,0,0,0,0,0,0,7,16,20,27,29,29,34,33,36,37,39,33,29,28,0,0,0,0,0,0,0,0,2,14,20,23,25,28,36,37,39,41,43,39,33,31,0,0,0,0,0,0,0,0,1,13,18,22,27,28,31,39,42,42,42,44,38,37,0,0,0,0,0,0,0,0,0,8,15,20,27,25,30,36,41,43,44,44,42,41,0,0,0,0,0,0,0,0,0,1,9,16,20,22,25,32,38,42,42,43,43,43,0,0,0,0,0,0,0,0,0,0,4,11,17,19,21,26,30,39,44,45,45,46,0,0,0,0,0,0,0,0,0,0,0,4,10,15,15,19,28,35,39,42,46,47,0,0,0,0,0,0,0,0,0,0,0,1,3,10,11,17,21,31,37,40,45,46,0,0,0,0,0,0,0,0,0,0,0,0,2,9,12,14,18,27,36,39,43,43,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,14,22,24,33,40,41,42,0,0,0,0,0,0,0,0,0,0,0,0,4,11,12,18,21,24,30,38,41,42,0,0,0,0,0,0,0,0,0,0,0,0,4,10,15,17,21,24,32,36,40,40,0,0,0,0,0,0,0,0,0,0,0,0,8,11,13,14,20,24,31,36,39,40,0,0,0,0,0,0,0,0,0,0,0,0,11,13,19,18,18,22,28,34,38,38,0,0,0,0,0,0,0,0,0,0,0,0,10,14,19,18,18,22,28,32,38,39],
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
