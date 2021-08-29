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
        texture=ImageTexture(url=['../../images/5/newport18-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,10,14,19,18,18,22,28,32,38,39,0,0,0,0,0,0,0,0,0,0,0,0,12,14,21,22,25,22,24,31,35,36,0,0,0,0,0,0,0,0,0,0,0,1,13,19,23,24,19,19,24,26,29,30,0,0,0,0,0,0,0,0,0,0,0,0,12,16,22,20,19,18,23,23,26,26,0,0,0,0,0,0,0,0,0,0,0,0,10,13,16,20,18,17,21,22,21,21,0,0,0,0,0,0,0,0,0,0,0,0,2,13,13,18,17,16,20,20,19,19,0,0,0,0,0,0,0,0,0,0,0,0,1,8,12,13,14,17,20,22,20,20,0,0,0,0,0,0,0,0,0,0,0,0,2,8,11,13,18,17,16,19,18,18,0,0,0,0,0,0,0,0,0,0,0,0,9,6,10,14,15,18,17,18,17,17,0,0,0,0,0,0,0,0,0,0,0,0,4,8,9,12,13,11,14,15,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,10,8,10,10,11,14,13,15,17,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,8,12,11,13,17,16,15,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,5,10,9,12,15,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,5,7,15,13,16,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,16,18,20,21,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,19,22,23,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,16,22,22,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,15,23,25,23,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,20,25,23,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,14,22,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,16,23,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,12,20,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,14,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,13],
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
