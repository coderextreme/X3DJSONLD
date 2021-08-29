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
        texture=ImageTexture(url=['../../images/5/newport17-25.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.24158699571478,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[23,20,19,20,22,22,20,19,18,18,21,25,27,16,1,0,0,0,0,0,0,0,24,21,20,20,22,23,20,15,14,15,18,23,29,25,9,0,0,0,0,0,0,0,25,22,22,22,23,21,17,14,13,13,16,21,26,28,19,1,0,0,0,0,0,0,27,23,22,23,21,18,15,13,13,13,14,17,22,27,24,12,0,0,0,0,0,0,27,24,22,19,17,15,13,13,13,13,14,17,20,24,22,13,0,0,0,0,0,0,29,25,23,20,18,14,13,13,12,13,15,16,18,22,20,9,1,0,0,0,0,0,32,28,27,24,19,14,13,13,12,13,17,18,15,17,17,13,4,0,0,0,0,0,33,31,28,24,20,17,13,12,11,14,17,18,15,11,10,8,4,0,0,0,0,0,35,34,31,27,22,18,14,12,11,14,16,15,11,8,6,3,0,0,0,0,0,0,38,36,33,29,26,22,19,16,10,10,14,12,7,2,0,0,1,0,0,0,0,0,41,37,34,30,26,23,20,15,11,6,9,6,0,0,0,0,0,0,0,0,0,0,42,38,34,33,29,26,21,15,10,6,1,0,0,0,0,0,0,0,0,0,0,0,42,39,36,33,29,24,20,15,12,8,0,0,0,0,0,0,0,0,0,0,0,0,43,39,35,30,27,23,17,13,8,2,0,0,0,0,0,0,0,0,0,0,0,0,44,39,35,30,24,19,16,11,6,0,0,0,0,0,0,0,0,0,0,0,0,0,42,37,34,30,26,25,20,15,6,0,0,0,0,0,0,0,0,0,0,0,0,0,41,37,35,33,30,25,20,15,7,0,0,0,0,0,0,0,0,0,0,0,0,0,40,36,32,27,28,26,20,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,40,33,27,25,22,19,16,13,8,1,0,0,0,0,0,0,0,0,0,0,0,0,38,36,35,36,33,30,25,19,10,3,0,0,0,0,0,0,0,0,0,0,0,0,43,41,41,40,36,32,28,21,12,6,0,0,0,0,0,0,0,0,0,0,0,0,45,43,42,41,37,33,20,14,12,4,0,0,0,0,0,0,0,0,0,0,0,0,45,44,43,41,38,24,30,27,19,1,0,0,0,0,0,0,0,0,0,0,0,0,45,44,43,41,38,25,31,28,18,1,0,0,0,0,0,0,0,0,0,0,0,0],
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
