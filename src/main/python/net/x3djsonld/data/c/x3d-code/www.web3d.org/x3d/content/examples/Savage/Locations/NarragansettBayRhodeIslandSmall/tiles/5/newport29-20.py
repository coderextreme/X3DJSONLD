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
        texture=ImageTexture(url=['../../images/5/newport29-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.27344644014977,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,1,5,10,11,11,11,10,10,9,6,4,4,4,0,0,0,0,0,0,0,0,0,2,6,8,10,12,12,11,11,11,10,7,5,4,3,0,0,0,0,0,0,0,0,0,4,9,11,11,11,12,12,12,11,10,8,6,5,4,0,0,0,0,0,0,0,0,3,6,10,12,13,13,13,13,13,11,11,10,8,6,5,0,0,0,0,0,0,0,4,7,10,11,13,14,14,13,11,12,13,13,12,10,7,6,0,0,0,0,0,3,5,8,10,12,12,13,13,13,14,13,13,14,14,12,11,9,7,0,0,0,0,0,7,8,10,11,13,15,12,12,14,13,13,12,13,13,12,10,9,8,0,0,0,1,2,9,12,14,15,15,16,14,14,15,14,13,13,12,12,12,10,8,9,0,0,1,6,9,9,12,14,15,16,16,15,15,15,17,15,13,13,13,12,10,8,8,0,1,4,6,10,11,12,13,12,14,15,16,16,17,19,19,17,16,14,12,10,8,7,2,2,5,6,9,12,11,13,14,14,15,15,15,18,17,17,16,15,14,13,12,10,8,6,5,7,8,9,12,12,14,16,15,15,16,16,17,15,15,17,14,11,11,12,10,9,5,5,6,8,7,11,14,14,14,15,15,16,16,17,18,18,16,14,10,9,9,7,7,4,4,6,8,8,10,12,14,17,17,17,19,21,18,17,15,14,13,13,12,10,7,4,5,6,7,8,10,10,12,14,15,17,19,19,20,18,16,15,15,14,13,12,11,9,8,8,10,11,10,11,10,13,15,13,15,19,20,20,17,14,14,15,14,14,11,11,11,11,8,11,12,12,13,14,16,17,15,15,18,18,17,14,14,16,14,13,14,15,11,11,13,7,10,11,14,15,15,17,18,19,17,18,19,18,17,15,15,13,13,14,15,14,14,14,8,10,10,14,16,16,17,19,20,19,18,19,18,17,15,14,14,14,14,16,17,17,14,11,12,13,14,15,16,19,20,22,22,21,19,17,16,16,15,14,15,15,15,15,15,14,11,13,16,17,17,17,20,21,21,21,20,18,18,19,18,17,14,15,16,16,16,16,16,11,13,16,17,19,19,19,19,20,19,18,17,18,19,20,19,18,18,18,16,15,17,17,11,13,16,17,19,20,19,18,19,18,17,18,19,19,20,19,20,21,20,18,17,18,18],
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
