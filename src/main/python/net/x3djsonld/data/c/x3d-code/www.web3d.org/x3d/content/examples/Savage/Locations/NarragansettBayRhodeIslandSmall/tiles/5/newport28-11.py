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
        texture=ImageTexture(url=['../../images/5/newport28-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.664072528870314,-71.34608416014737,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,1,2,2,2,2,2,3,6,5,6,8,0,0,0,0,0,0,1,1,2,2,2,2,2,3,3,3,2,3,5,5,4,5,7,0,0,0,0,0,0,1,2,3,3,4,3,4,6,6,5,4,6,6,5,6,6,8,0,0,0,0,0,0,2,5,7,7,6,4,5,7,6,6,8,7,7,6,6,8,9,0,0,1,2,3,2,4,7,8,8,6,7,7,7,5,6,7,8,8,9,10,9,9,2,2,3,3,4,6,6,7,5,5,5,7,8,7,7,7,8,10,11,11,11,9,9,6,6,6,5,5,6,8,8,6,6,7,8,9,9,9,9,9,11,12,12,12,10,8,9,11,10,8,7,7,8,7,7,7,7,9,9,9,8,8,8,10,12,13,14,11,7,12,11,11,9,9,9,8,7,7,8,9,9,9,9,8,8,10,11,12,13,15,13,9,14,12,12,12,12,12,11,11,12,13,14,14,11,10,9,9,11,10,12,13,15,14,10,12,11,14,14,13,13,13,15,16,17,17,17,14,11,10,9,10,11,12,13,14,12,9,12,12,12,12,11,12,12,13,14,15,15,18,17,14,13,12,13,14,13,11,10,8,6,13,14,13,13,13,13,13,12,12,13,14,16,16,14,14,16,16,13,11,9,6,5,1,10,12,13,13,14,15,14,13,14,14,15,16,17,15,15,15,13,9,7,6,4,1,0,9,8,10,12,13,14,14,15,16,16,16,15,18,18,16,13,10,7,3,3,1,0,0,8,8,11,13,13,14,15,15,16,16,15,15,15,14,11,10,6,2,0,0,0,0,0,6,8,11,12,11,14,14,13,13,14,14,14,10,9,8,4,2,0,0,0,0,0,0,6,6,7,9,10,10,10,11,11,11,12,11,8,6,3,1,0,0,0,0,0,0,0,4,6,6,7,9,9,8,8,8,7,7,6,2,1,0,0,0,0,0,0,0,0,0,0,3,5,7,7,6,5,5,6,3,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,6,5,5,5,4,3,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,7,7,7,6,5,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,8,8,8,8,7,5,2,0,0,0,0,0,0,0,0,0,0,0,0],
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
