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
        texture=ImageTexture(url=['../../images/5/newport17-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[26,27,27,26,26,25,23,20,16,12,11,11,14,13,12,10,7,1,0,0,0,0,26,27,27,27,27,27,24,20,16,12,13,15,15,15,13,9,1,0,0,0,0,0,27,28,28,28,28,28,24,20,16,14,16,18,18,18,15,8,0,0,0,0,0,0,28,29,29,30,31,29,25,21,17,16,20,21,20,19,14,5,0,0,0,0,1,1,29,31,32,33,33,31,26,21,17,20,22,23,22,19,12,2,0,0,0,0,0,0,31,33,34,35,35,31,27,21,19,21,23,25,22,16,4,0,0,0,0,0,0,0,33,35,37,38,36,31,26,22,21,20,23,25,20,9,0,0,0,0,0,0,0,0,34,36,40,40,36,31,24,20,17,18,21,21,14,0,0,0,0,0,0,0,0,0,35,39,42,42,38,31,24,19,16,16,17,14,1,0,0,0,0,0,0,0,0,0,39,42,42,40,35,28,23,18,14,9,9,3,0,0,0,0,0,0,0,0,0,0,42,42,40,36,29,24,19,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,40,38,34,28,21,17,13,4,0,0,0,1,1,1,0,0,0,0,0,0,0,0,34,30,24,15,13,11,1,0,0,0,0,0,0,0,0,0,0,5,3,1,0,0,26,20,11,6,4,0,0,0,0,0,0,1,0,0,0,0,0,5,5,3,1,1,13,6,2,0,0,0,0,0,0,0,0,1,0,0,0,0,2,6,7,6,5,5,2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,4,5,7,8,9,9,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,7,9,11,11,9,9,0,0,0,1,0,0,0,0,0,0,0,0,0,2,7,9,9,10,11,12,10,8,0,0,0,0,0,0,0,0,0,0,0,0,2,7,11,10,9,10,11,12,9,8,0,0,0,0,0,0,0,0,0,0,0,2,7,12,9,10,10,11,12,13,10,9,0,0,0,0,0,0,0,0,0,0,0,6,11,12,10,10,10,11,12,13,12,12,0,0,0,0,0,0,0,0,1,0,0,7,10,10,10,10,11,12,14,14,13,13,0,0,0,0,0,0,0,1,1,1,3,9,10,10,10,10,12,15,15,15,14,13,0,0,0,0,0,0,0,1,1,1,4,9,9,10,10,10,13,15,15,15,14,14],
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
