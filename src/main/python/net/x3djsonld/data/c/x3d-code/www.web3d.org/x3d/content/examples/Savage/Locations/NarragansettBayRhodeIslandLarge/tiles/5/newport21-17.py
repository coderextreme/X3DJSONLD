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
        texture=ImageTexture(url=['../../images/5/newport21-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.41746982806205,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,17,7,8,11,6,9,9,6,8,7,6,7,4,0,0,0,0,0,0,0,0,13,10,10,4,3,6,7,5,10,4,1,5,5,0,0,0,0,0,0,0,0,0,9,7,10,6,2,3,0,0,4,4,3,5,1,0,0,0,0,0,0,0,0,0,10,5,1,4,3,9,0,0,2,2,5,3,0,0,0,0,0,0,0,0,0,0,4,5,1,1,3,1,1,0,1,3,2,0,0,0,0,0,0,0,0,0,0,0,2,3,1,1,1,1,1,1,1,5,1,1,0,1,1,0,0,0,0,0,0,0,6,4,5,5,1,1,1,1,1,1,1,1,5,1,1,1,1,0,0,0,0,0,8,6,5,6,1,1,0,0,1,5,4,7,4,3,0,1,0,0,0,0,0,0,9,10,9,7,1,1,1,1,1,5,6,7,5,5,5,2,0,0,0,0,0,0,11,9,8,7,3,1,2,3,5,7,8,6,5,4,5,2,0,0,0,0,0,0,9,8,6,8,7,7,5,4,5,6,7,8,6,6,3,1,0,0,0,0,0,0,10,9,8,9,9,11,8,6,6,6,7,6,5,2,0,0,0,0,0,0,0,0,13,10,9,9,13,11,9,9,6,5,5,4,3,1,0,0,0,0,0,0,0,0,12,14,13,13,12,12,9,9,7,6,7,4,2,1,0,0,0,0,0,0,0,0,13,13,14,16,14,9,9,11,9,9,7,3,0,0,0,0,0,0,0,0,0,0,12,10,12,12,10,11,15,11,10,10,8,6,3,0,0,0,0,0,0,0,0,0,14,13,14,12,12,14,12,12,12,10,7,5,2,0,0,0,0,0,0,0,0,0,13,14,14,14,12,11,11,12,13,11,10,7,2,0,0,0,0,0,0,0,0,0,16,15,13,11,11,11,13,13,11,11,10,6,0,0,0,0,0,0,0,0,0,0,16,14,13,12,13,15,13,11,10,9,9,5,0,0,0,0,0,0,0,0,0,0,15,14,12,12,16,11,12,9,8,9,7,2,0,0,0,0,0,0,0,0,0,0,14,13,11,11,13,11,8,11,14,10,4,0,0,0,0,0,0,0,0,0,0,0,14,12,10,8,9,10,13,13,11,6,2,0,0,0,0,0,0,0,0,0,0,0,15,11,11,9,10,10,12,11,10,6,2,0,0,0,0,0,0,0,0,0,0,0],
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
