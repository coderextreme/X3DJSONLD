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
        texture=ImageTexture(url=['../../images/5/newport27-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[14,14,13,12,13,14,13,13,14,14,15,13,13,16,19,21,20,20,23,28,31,31,13,14,15,14,14,14,14,13,14,14,14,14,13,17,20,20,20,21,23,28,30,30,11,12,13,13,14,15,14,14,14,16,15,13,15,18,20,20,20,22,25,27,29,29,11,11,11,11,12,14,15,14,14,16,17,17,18,17,18,20,20,23,25,26,28,28,11,11,11,11,12,13,14,14,14,17,18,17,16,17,17,19,20,21,24,26,28,28,10,11,11,14,13,13,14,15,15,17,18,18,17,18,18,21,22,23,25,27,29,29,10,11,11,13,13,14,15,16,17,18,19,18,18,18,18,18,18,21,25,27,29,30,11,11,11,11,14,15,15,16,17,20,23,20,18,18,18,18,18,18,23,27,30,30,10,11,11,13,13,14,16,16,17,23,23,22,20,18,18,18,18,18,23,26,29,29,12,12,11,10,11,14,15,15,17,23,25,22,19,18,18,18,18,19,22,25,29,29,15,14,13,12,11,11,12,14,16,19,25,23,20,18,18,18,18,18,23,26,29,29,13,15,15,13,11,10,10,11,17,21,24,24,21,19,18,18,18,19,23,27,31,31,8,10,12,13,13,14,14,11,17,23,25,24,22,20,19,18,18,20,24,27,32,33,9,9,8,9,12,12,13,13,16,22,25,24,23,22,20,19,18,21,24,29,34,35,11,10,8,9,9,10,11,14,19,24,25,24,23,22,21,20,19,22,25,29,35,35,13,12,11,11,11,10,10,13,17,24,25,24,23,22,22,20,20,22,25,29,35,36,16,14,12,12,12,11,11,13,18,24,25,24,23,23,22,23,21,22,26,29,32,32,16,14,13,13,13,11,10,11,18,24,25,24,21,20,21,21,21,23,23,25,29,29,13,14,15,14,14,12,10,11,17,21,24,22,20,21,23,22,22,22,22,24,27,27,13,15,16,16,13,10,10,11,16,21,23,20,20,21,21,22,21,22,22,24,25,25,13,16,18,15,12,10,10,11,15,22,24,19,19,20,23,22,22,22,22,23,23,23,14,15,16,14,11,10,10,12,15,20,20,20,21,20,24,22,22,22,22,23,22,22,14,15,15,14,12,10,10,13,17,19,21,20,23,23,24,23,22,22,22,22,22,22,14,15,15,14,12,10,10,14,17,19,20,20,23,24,24,23,22,22,22,22,23,23],
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
