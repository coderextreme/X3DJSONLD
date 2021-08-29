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
        texture=ImageTexture(url=['../../images/5/newport24-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[7,7,8,5,2,0,0,0,0,4,8,15,17,17,23,33,40,44,43,38,33,32,8,9,7,4,0,0,0,0,1,6,8,15,19,19,24,35,41,43,40,34,29,28,9,8,6,3,0,0,0,0,1,5,8,13,15,18,22,33,40,41,38,32,27,27,8,7,7,5,3,0,0,0,0,3,7,11,13,17,22,31,38,38,34,28,25,25,8,8,7,5,1,0,0,0,0,3,5,7,9,14,21,29,34,34,30,28,24,24,9,7,7,3,0,1,2,0,0,0,3,4,5,11,16,23,29,29,25,22,23,23,8,5,3,1,0,1,2,0,0,0,3,0,0,6,10,15,21,23,20,19,19,18,6,4,0,0,2,1,0,0,0,0,0,0,0,3,6,9,14,13,15,17,18,17,6,4,4,3,3,0,0,1,0,0,0,0,0,0,2,4,6,7,11,14,13,14,7,6,5,6,5,5,5,5,5,2,0,0,0,0,0,0,1,6,13,15,14,14,13,12,11,10,10,9,8,8,8,6,7,4,2,0,0,0,3,9,13,15,15,15,13,11,12,14,11,12,11,10,10,9,8,5,5,6,5,5,9,14,16,15,16,17,15,14,13,12,12,10,10,12,12,12,9,8,8,7,9,11,14,17,19,19,19,19,13,12,12,11,12,9,9,8,9,10,10,8,8,9,10,11,16,19,20,20,21,21,11,11,10,11,10,9,9,9,8,8,8,9,9,11,9,10,10,13,15,21,20,20,14,11,10,10,9,11,10,10,9,9,11,9,10,9,9,10,11,11,16,20,24,24,11,11,14,11,11,11,8,11,10,9,11,10,8,8,10,7,10,13,15,17,23,23,13,15,12,12,12,12,12,11,9,9,9,10,9,9,9,8,8,12,13,15,19,19,13,14,12,12,10,13,11,10,10,11,10,11,12,11,9,7,6,6,10,12,14,14,16,14,12,12,11,11,12,11,11,13,11,12,10,10,8,5,7,5,6,9,11,11,13,12,14,14,13,12,13,12,13,12,13,10,9,7,9,9,7,8,8,6,8,9,14,13,12,12,11,11,12,11,12,9,8,6,8,7,6,8,8,6,6,5,5,5,12,10,11,11,11,12,9,9,8,8,3,2,4,6,7,8,7,7,6,4,2,1,12,11,11,10,11,11,9,9,7,7,2,3,4,6,8,8,7,7,6,4,2,1],
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
