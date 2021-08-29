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
        texture=ImageTexture(url=['../../images/5/newport20-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,6,10,12,14,15,18,18,19,19,20,21,22,23,23,0,0,0,0,0,0,0,0,1,9,12,13,13,14,18,18,17,19,22,24,22,21,21,0,0,0,0,0,0,0,0,3,13,13,13,13,13,18,19,19,21,22,23,20,20,20,0,0,0,0,0,0,0,0,2,11,13,13,14,15,15,18,21,23,19,19,20,20,20,0,0,0,0,0,0,0,0,0,2,12,14,13,16,15,15,18,21,19,19,23,24,23,0,0,0,0,0,0,0,0,0,2,12,14,14,16,16,15,16,18,18,19,23,26,24,0,0,0,0,0,0,0,0,0,2,11,15,17,17,16,16,17,16,19,22,25,25,21,0,0,0,0,0,0,0,0,0,1,8,16,19,19,15,15,16,16,19,21,22,22,21,0,0,0,0,0,0,0,0,0,0,2,12,15,16,15,17,19,19,20,19,18,21,22,0,0,0,0,0,0,0,0,0,0,0,5,14,14,14,19,22,24,24,21,18,19,22,0,0,0,0,0,0,0,0,0,0,0,4,14,17,18,19,19,20,19,18,17,18,21,0,0,0,0,0,0,0,0,0,0,0,3,12,16,19,18,18,19,18,18,19,19,20,0,0,0,0,0,0,0,0,0,0,0,0,7,14,16,16,18,19,19,19,19,19,23,0,0,0,0,0,0,0,0,0,0,0,0,6,14,15,13,17,19,21,22,22,21,22,0,0,0,0,0,0,0,0,0,0,0,0,3,11,17,17,16,16,18,21,22,21,21,0,0,0,0,0,0,0,0,0,0,0,0,0,6,14,16,15,13,14,19,23,24,24,0,0,0,0,0,0,0,0,0,0,0,0,0,6,14,16,14,13,15,18,20,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,5,12,14,13,13,16,19,21,22,22,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,12,13,12,13,17,22,23,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,8,11,12,12,14,20,23,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,12,14,15,18,21,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,11,14,17,18,18,18,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,15,18,19,18,18,20],
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
