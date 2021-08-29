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
        texture=ImageTexture(url=['../../images/5/newport29-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.672143386647825,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[16,18,16,15,16,17,15,15,14,15,12,6,1,0,0,0,1,6,9,11,12,11,11,15,16,15,14,16,17,15,14,15,15,12,11,7,2,0,1,5,8,9,10,11,11,10,14,14,13,13,14,14,13,13,15,16,15,14,13,9,7,8,8,10,10,9,9,10,10,14,14,13,14,13,13,13,12,14,15,16,15,14,13,14,12,10,9,9,8,10,11,10,17,15,15,15,14,13,14,13,12,11,13,14,16,16,15,12,10,9,8,9,12,12,11,17,17,17,17,13,12,13,13,11,10,12,13,15,16,14,12,11,9,9,10,13,13,12,16,17,15,14,11,12,11,11,10,10,11,15,16,14,13,14,13,11,10,11,12,12,13,15,13,14,11,9,11,11,12,12,10,11,14,14,12,12,14,16,14,12,13,12,12,12,14,12,12,13,11,10,10,11,12,12,12,12,12,11,11,13,17,16,13,13,13,13,12,12,12,12,13,12,9,9,9,12,13,13,13,13,14,13,13,15,16,14,13,13,13,12,12,10,10,13,14,12,11,11,11,12,12,14,14,13,11,11,13,16,18,15,13,13,12,13,11,12,14,14,13,11,9,8,9,9,11,11,9,9,10,13,17,20,20,17,14,13,16,16,15,15,14,10,8,7,7,8,9,9,8,9,11,11,11,14,18,20,19,16,15,15,14,14,16,16,14,12,10,10,10,9,7,7,8,9,10,10,11,13,14,14,14,14,15,13,11,12,13,11,10,8,11,11,8,5,5,7,10,11,11,10,11,11,11,14,15,15,13,11,10,11,10,10,9,8,7,5,4,5,7,10,11,13,13,15,14,15,18,17,14,11,11,12,11,8,7,6,6,7,9,11,11,11,10,11,12,15,17,18,18,18,17,15,13,11,10,11,11,8,7,7,8,9,10,10,12,10,9,12,14,15,17,18,20,19,17,14,11,9,10,12,10,7,6,8,8,7,8,11,12,12,16,18,15,16,20,24,23,19,16,13,10,8,11,10,7,6,7,7,7,11,13,13,15,19,20,17,18,21,24,25,17,15,14,12,11,10,10,8,7,9,9,9,11,12,13,16,17,18,19,21,22,23,25,15,15,15,15,13,10,10,9,9,11,12,12,13,12,14,15,14,16,19,20,21,21,22,17,15,15,14,11,9,8,7,8,12,14,14,14,15,16,17,16,17,18,20,20,19,19],
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
