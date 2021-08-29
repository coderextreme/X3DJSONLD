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
        texture=ImageTexture(url=['../../images/5/newport24-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,26,22,17,16,15,12,5,2,3,3,0,0,0,0,0,0,0,0,1,6,8,25,20,17,13,12,14,11,8,5,4,4,1,0,5,9,2,0,0,0,0,6,9,20,19,14,12,12,12,9,11,15,9,2,0,6,13,12,5,1,0,0,0,0,0,17,12,8,10,12,11,15,18,15,7,4,10,10,8,8,5,0,0,0,0,0,2,16,16,16,12,9,10,17,18,17,11,13,12,5,0,0,0,0,0,1,8,15,18,12,12,13,12,7,10,13,15,18,14,12,3,0,0,0,0,0,8,13,16,20,20,11,9,6,5,8,10,13,16,13,15,8,2,0,0,0,0,0,8,15,17,18,18,10,5,4,3,9,9,11,8,6,6,1,0,0,3,0,1,8,16,17,19,16,15,9,8,7,5,5,3,0,0,0,0,2,1,7,9,13,14,20,19,18,19,16,16,9,6,3,5,6,8,8,8,2,2,6,8,8,14,19,23,22,19,20,18,18,18,9,7,5,10,10,11,14,11,13,14,11,11,13,18,19,22,19,21,20,20,18,18,13,10,11,11,14,11,15,19,19,18,13,15,15,18,20,21,21,21,22,21,18,19,12,13,14,7,11,10,12,19,19,16,17,18,16,17,18,20,20,23,21,21,20,20,11,10,6,8,13,9,10,11,11,14,20,22,22,15,18,22,23,22,21,20,19,19,11,11,9,6,4,5,6,4,4,13,20,24,28,25,21,21,22,22,21,21,20,20,15,10,5,4,4,4,4,4,6,16,23,24,22,30,24,24,23,22,22,21,20,20,16,9,4,4,4,4,4,4,14,21,25,25,26,29,26,25,23,24,24,22,22,21,18,13,4,4,4,4,4,13,21,23,26,28,27,31,31,27,23,23,23,23,21,21,16,17,9,11,16,15,18,22,24,23,25,25,25,27,29,23,25,24,24,22,21,21,18,19,18,19,20,19,24,22,23,24,25,26,26,29,27,25,25,24,23,23,21,21,16,20,21,20,20,22,24,23,23,24,27,26,26,25,26,26,24,25,24,24,22,21,23,21,24,20,17,18,21,25,23,25,24,26,24,23,25,25,23,23,21,23,22,22,26,25,27,21,23,23,22,21,22,21,22,22,24,24,24,25,22,22,22,21,20,20,27,25,27,22,24,22,22,22,22,22,22,23,24,24,24,24,22,22,22,21,20,21],
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
