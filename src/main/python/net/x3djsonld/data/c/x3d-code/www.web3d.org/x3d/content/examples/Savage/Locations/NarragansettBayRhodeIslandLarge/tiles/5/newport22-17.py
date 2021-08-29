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
        texture=ImageTexture(url=['../../images/5/newport22-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,11,11,9,10,10,12,11,10,6,2,0,0,0,0,0,0,0,0,0,0,0,18,12,10,8,6,9,10,10,7,4,3,0,0,0,0,0,0,0,0,0,0,0,13,11,9,4,4,9,7,7,5,5,2,0,0,0,0,0,0,0,0,0,0,0,13,10,10,8,1,1,5,6,6,8,4,0,0,0,0,0,0,0,0,0,0,0,18,14,8,7,7,4,6,10,8,7,7,1,0,0,0,0,0,0,0,0,0,0,15,14,13,12,10,12,10,12,13,13,11,2,0,0,0,0,0,0,0,0,0,0,14,16,15,15,15,14,15,17,16,17,12,7,0,0,0,0,0,0,0,0,0,0,16,18,18,16,19,15,17,18,18,13,10,8,0,0,0,0,0,0,0,0,0,0,17,17,16,20,19,19,15,15,15,11,6,3,0,0,0,0,0,0,0,0,0,0,15,15,16,17,17,15,14,11,10,5,3,1,0,0,0,0,0,0,0,0,0,0,15,13,14,14,16,16,13,6,1,0,0,2,0,0,0,0,0,0,0,0,0,0,15,13,13,13,13,10,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,13,8,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,3,3,2,2,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,8,5,5,4,4,5,4,5,3,3,2,0,0,0,0,0,0,0,0,0,0,0,10,9,8,7,6,5,7,7,7,3,1,0,0,0,0,0,0,0,0,0,0,0,10,9,9,8,6,7,8,9,7,1,0,0,0,0,0,0,0,0,0,0,0,0,10,10,9,9,9,9,9,8,8,6,0,0,0,0,0,0,0,0,0,0,0,0,16,12,9,9,10,9,8,7,8,6,0,0,0,0,0,0,0,0,0,0,0,0,13,11,10,8,9,10,7,6,5,1,1,1,0,0,0,0,0,0,0,0,0,0,12,10,8,8,7,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,9,8,7,5,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
