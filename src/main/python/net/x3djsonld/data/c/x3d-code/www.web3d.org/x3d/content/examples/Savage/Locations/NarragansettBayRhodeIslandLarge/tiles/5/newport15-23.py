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
        texture=ImageTexture(url=['../../images/5/newport15-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.47634988941996,-71.2855577038016,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,12,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,14,19,14,10,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,17,19,16,12,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,12,19,21,20,17,13,10,7,0,0,0,0,0,0,0,0,0,0,0,0,5,9,15,18,20,20,20,17,13,10,8,0,0,0,0,0,0,0,0,0,0,3,9,10,16,19,23,24,24,20,16,14,8,0,0,0,0,0,0,0,0,0,0,7,9,9,15,22,26,27,25,22,19,16,11,0,0,0,0,0,0,0,0,2,4,9,11,13,20,24,28,31,29,27,24,21,12,2,1,0,0,0,0,1,2,6,9,11,12,14,21,28,33,35,31,30,28,23,12,2,2,0,0,0,0,2,4,9,12,14,17,22,25,30,34,39,38,34,26,18,10,4,3,0,0,0,0,1,6,11,14,16,18,21,25,32,36,38,39,35,30,23,12,4,3,0,0,0,0,2,5,10,13,18,21,26,30,35,38,40,38,34,28,21,11,4,3,0,0,0,0,4,7,11,13,22,22,23,31,36,38,41,40,34,29,22,12,5,5,0,0,0,0,4,9,12,16,22,25,27,34,39,40,41,39,34,27,21,14,9,9,0,0,0,3,11,11,15,18,24,28,27,30,38,41,42,41,36,30,21,14,11,12,0,0,0,5,11,12,15,18,24,28,27,30,38,42,43,40,36,30,21,14,12,12],
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
