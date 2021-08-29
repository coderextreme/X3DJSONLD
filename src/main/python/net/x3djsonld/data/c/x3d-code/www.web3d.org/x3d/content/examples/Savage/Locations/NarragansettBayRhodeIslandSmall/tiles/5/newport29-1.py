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
        texture=ImageTexture(url=['../../images/5/newport29-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[15,15,15,15,15,14,13,13,14,14,14,13,13,12,12,13,13,13,13,13,13,12,11,15,15,15,15,14,14,13,13,13,13,14,15,15,13,12,12,13,13,13,12,11,11,11,15,14,14,14,13,13,13,13,13,13,14,14,13,12,11,12,13,13,12,11,11,10,10,16,13,13,13,13,13,13,13,13,13,14,13,13,13,10,7,7,9,12,11,11,10,10,18,15,14,14,15,15,15,14,13,13,14,14,14,13,8,2,1,5,11,12,11,10,9,18,17,17,18,17,16,15,13,13,13,15,15,14,12,10,3,1,1,4,9,9,10,8,17,18,19,18,17,15,14,12,12,13,14,15,15,15,14,7,1,1,1,2,4,7,7,16,17,17,16,16,14,12,12,12,13,14,14,15,15,15,12,6,1,1,1,1,2,3,16,16,15,14,14,13,12,12,13,14,14,13,13,13,13,13,12,9,2,1,1,1,1,16,16,15,14,13,13,12,12,13,14,14,14,13,13,12,12,11,10,6,2,1,0,0,16,16,15,15,14,13,13,12,13,12,12,14,14,13,13,12,10,8,4,1,0,0,0,16,16,15,15,14,14,13,13,14,12,12,13,12,11,11,11,8,5,1,0,0,0,0,17,16,16,15,15,14,15,14,13,11,10,10,9,7,8,9,7,3,0,0,0,0,0,16,16,16,16,15,15,16,15,13,11,10,10,8,5,5,3,3,1,0,0,0,0,0,16,17,17,16,15,15,17,16,14,12,10,9,7,5,2,0,0,0,0,0,0,0,0,16,17,16,15,15,15,15,14,12,11,9,7,6,3,0,0,0,0,0,0,0,0,0,15,16,15,14,14,14,14,12,10,9,6,4,2,0,0,0,0,0,0,0,0,0,0,14,15,14,14,14,13,13,11,9,7,5,2,0,0,0,0,0,0,0,0,0,0,0,10,13,13,13,13,11,11,9,7,5,3,0,0,0,0,0,0,0,0,0,0,0,0,4,9,11,12,13,11,10,7,4,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,9,10,9,7,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,6,7,7,6,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,5,5,3,4,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
