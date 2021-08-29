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
        texture=ImageTexture(url=['../../images/5/newport24-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,30,32,35,37,39,42,45,48,51,54,58,58,54,53,55,57,58,61,67,69,69,23,26,29,30,28,27,32,39,45,51,57,62,60,56,54,56,57,58,61,69,71,71,17,20,21,21,23,26,34,41,44,51,56,61,62,55,53,55,55,57,62,68,71,71,18,19,19,15,22,26,32,37,43,50,53,57,57,53,52,52,51,55,62,68,71,71,13,17,18,12,18,23,29,37,43,48,51,51,51,49,49,49,50,55,62,68,69,69,6,10,9,9,15,23,27,34,41,46,46,45,45,45,46,46,48,54,61,66,65,65,1,3,4,7,10,17,24,29,35,39,39,40,40,42,43,45,47,53,57,61,60,59,1,1,3,4,7,9,13,23,32,35,36,35,35,36,37,40,46,49,53,56,53,53,1,1,1,6,4,8,12,13,17,23,28,30,28,25,26,32,38,42,47,50,49,49,1,1,1,1,2,4,8,10,12,13,16,19,20,18,19,23,27,31,38,46,46,46,1,1,1,1,1,1,1,5,7,8,10,10,12,12,15,17,21,27,31,35,40,41,1,1,1,1,1,1,1,1,1,4,5,6,7,9,9,13,16,20,25,28,32,33,1,1,1,1,1,1,1,1,1,1,2,3,2,5,5,6,10,10,17,21,25,26,1,1,1,1,1,1,1,1,1,1,1,1,1,3,4,4,6,5,7,7,21,23,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,3,2,1,2,20,21,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,16,18,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,7,11,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,8,7,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,9,8,4,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
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
