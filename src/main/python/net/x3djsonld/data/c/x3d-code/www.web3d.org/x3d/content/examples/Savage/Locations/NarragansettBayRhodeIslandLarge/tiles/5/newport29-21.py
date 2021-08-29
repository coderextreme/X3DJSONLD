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
        texture=ImageTexture(url=['../../images/5/newport29-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[16,14,16,14,15,16,16,15,14,13,14,18,19,18,19,18,17,14,15,14,12,11,18,17,15,14,15,15,16,15,14,13,15,18,19,19,19,18,17,16,18,18,17,18,19,19,19,19,19,18,16,15,14,13,16,18,19,20,20,18,17,17,20,20,21,21,20,20,20,21,22,21,20,16,14,14,16,18,19,20,20,19,17,18,21,22,23,24,17,19,20,21,21,18,17,16,16,14,16,18,19,21,21,20,19,21,24,23,24,25,14,15,14,13,14,14,14,14,14,14,16,17,19,21,21,20,20,23,27,26,29,31,15,16,14,14,14,14,14,13,14,15,16,18,18,19,21,22,21,24,26,28,30,33,16,17,15,14,14,14,13,14,14,14,15,17,18,17,20,23,25,27,29,29,32,35,18,18,15,14,13,13,13,14,14,14,14,15,14,15,20,24,28,30,28,28,35,38,17,15,15,13,13,13,13,14,14,14,14,14,14,14,19,25,28,28,25,26,37,41,13,13,12,12,13,13,13,13,13,13,14,13,14,15,21,25,27,27,26,29,39,42,11,12,12,12,13,13,14,15,14,14,14,14,14,15,20,23,27,27,26,30,39,42,12,12,12,12,13,14,14,16,14,14,15,16,16,17,21,25,27,28,28,30,41,42,13,11,12,13,13,13,13,14,14,14,15,16,17,18,22,25,27,27,28,34,42,41,12,14,14,14,14,14,14,14,14,14,14,15,17,19,22,23,23,23,27,34,38,38,13,13,15,15,14,14,14,15,15,14,14,14,18,20,22,22,23,25,27,32,34,33,13,14,14,15,15,15,15,14,15,14,14,15,18,21,22,23,23,26,29,32,30,29,14,14,15,15,15,15,15,15,15,16,14,15,19,21,22,23,24,26,28,28,26,24,14,14,14,15,15,15,16,16,16,17,17,18,19,21,22,23,24,24,26,24,23,22,14,14,14,14,15,15,16,17,17,17,20,23,23,22,23,22,24,24,23,23,24,24,14,14,14,14,14,15,16,17,17,18,24,26,25,24,21,20,23,24,25,27,28,28,15,15,14,14,14,15,15,16,17,21,27,27,26,24,19,19,21,23,27,28,28,28,16,15,14,14,14,14,14,15,17,24,29,27,25,21,18,20,22,25,29,29,29,29,16,15,14,14,14,13,14,15,17,24,29,27,25,21,18,19,22,25,29,29,29,29],
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
