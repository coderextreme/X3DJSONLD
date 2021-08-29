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
        texture=ImageTexture(url=['../../images/5/newport9-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.331209432411974,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,4,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,6,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,4,7,9,7,4,0,0,0,0,0,4,2,0,0,0,0,0,0,0,0,0,6,5,9,12,11,8,8,6,0,0,0,10,11,2,0,0,0,0,0,0,0,0,13,11,14,17,15,14,13,10,2,10,11,12,10,4,0,0,0,0,0,0,0,0,20,20,19,22,23,22,19,15,14,15,16,14,12,7,0,0,0,0,0,0,0,0,18,22,19,20,25,27,25,21,17,16,20,17,15,12,0,0,0,0,0,0,0,0,22,24,22,24,29,30,24,21,22,25,23,19,15,13,7,0,0,0,0,0,0,0,21,25,25,25,31,31,24,21,23,27,25,22,21,21,19,11,5,0,0,0,0,0,20,23,28,31,33,32,28,24,22,24,25,23,21,20,19,16,6,0,0,0,0,0,27,26,26,28,31,28,23,21,21,26,28,26,22,20,19,19,18,5,1,8,6,6,31,30,27,29,31,29,28,26,25,29,32,32,29,26,22,19,17,12,6,7,7,7,34,31,29,30,31,29,30,29,30,31,33,34,34,30,24,19,15,11,9,11,13,13,41,38,36,34,34,31,33,33,34,34,35,35,32,29,27,23,18,13,13,15,13,13,42,42,41,37,35,34,35,37,37,37,38,36,31,32,35,34,27,22,21,18,15,15,41,42,44,42,39,35,36,42,42,37,39,40,41,39,37,35,28,25,28,24,20,20,39,41,47,44,40,38,44,48,45,37,43,49,46,41,41,41,33,28,26,23,23,23,41,48,49,45,40,43,51,50,45,44,50,51,46,43,46,45,39,35,32,31,28,27,41,47,47,45,40,44,51,50,44,45,51,51,46,44,46,44,39,36,33,33,29,28],
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
