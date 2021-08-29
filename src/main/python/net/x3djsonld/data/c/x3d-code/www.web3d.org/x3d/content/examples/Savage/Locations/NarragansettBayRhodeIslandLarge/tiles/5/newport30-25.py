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
        texture=ImageTexture(url=['../../images/5/newport30-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,17,18,17,20,20,21,28,30,29,28,23,20,19,21,20,20,25,26,25,25,25,17,17,17,17,17,18,21,25,26,26,22,19,19,19,19,19,20,21,23,22,23,23,18,17,17,16,17,18,19,19,20,20,20,19,19,19,19,19,19,21,22,22,23,23,18,16,18,18,18,20,21,20,20,21,19,19,19,19,19,19,21,21,21,22,22,22,19,21,20,19,20,20,21,22,22,21,20,20,20,21,19,20,23,26,24,22,23,23,17,22,22,21,19,19,20,23,23,21,20,20,20,19,19,20,23,24,24,23,25,25,19,19,20,21,22,20,21,22,21,20,21,20,18,18,19,20,21,22,23,25,27,28,16,16,16,17,22,22,21,21,21,20,19,18,17,20,21,22,22,22,23,26,29,30,13,14,14,15,17,18,17,17,17,17,18,17,17,19,20,22,22,23,25,28,30,30,13,14,15,15,16,17,16,16,16,17,16,17,19,20,22,22,23,23,25,28,31,31,16,14,14,14,15,15,15,15,15,16,16,17,17,22,23,25,25,26,27,29,31,32,14,16,17,15,14,14,14,15,14,15,17,17,20,24,24,26,22,24,27,30,32,32,12,14,16,17,16,15,14,14,14,18,17,19,21,21,19,19,20,24,30,31,32,33,14,14,17,17,16,16,15,14,14,16,17,17,17,21,21,19,20,23,28,30,32,32,15,14,16,17,17,16,16,15,15,16,17,18,21,26,24,21,20,24,27,28,29,29,15,14,17,17,18,17,17,15,16,17,18,20,22,24,21,19,20,22,27,31,33,33,16,15,15,17,18,18,17,16,15,17,17,20,22,25,21,19,23,28,31,33,33,33,17,16,16,16,17,18,17,16,16,17,19,20,22,22,20,20,25,30,33,33,33,33,16,16,16,16,17,17,18,16,17,17,19,21,21,22,22,23,26,30,33,33,33,33,16,17,17,18,18,17,18,17,17,17,18,18,19,21,22,23,27,30,32,34,34,34,17,18,19,18,19,20,18,17,17,17,16,16,17,18,23,25,28,32,33,33,34,34,21,21,24,23,23,20,21,20,18,17,18,17,16,18,20,26,29,31,33,33,34,34,22,24,25,26,26,20,22,22,21,20,19,18,17,18,20,25,27,28,32,33,33,33,22,24,25,26,25,20,22,23,21,20,19,18,17,18,20,24,27,28,32,33,33,33],
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
