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
        texture=ImageTexture(url=['../../images/5/newport2-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,2,3,4,3,2,0,0,0,0,0,0,1,0,0,0,0,3,5,6,4,0,0,0,0,2,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0,0,0,0,0,3,6,6,0,0,0,0,0,0,0,0,0,0,1,2,1,0,0,0,0,0,0,1,6,8,8,0,0,0,0,0,0,0,0,0,0,2,2,2,0,0,0,0,0,0,1,6,9,9,6,2,0,0,4,4,3,0,0,0,3,3,2,0,0,0,0,0,0,0,5,7,8,9,6,5,5,7,6,6,6,5,6,7,4,2,1,0,0,1,0,0,0,2,3,6,13,8,7,8,9,8,8,8,9,9,9,6,3,2,2,2,2,0,0,0,0,2,4,14,9,9,10,13,12,11,10,10,11,11,7,5,4,3,2,1,0,0,0,0,2,3,14,10,10,13,16,17,15,12,12,12,11,8,7,6,4,2,1,0,0,0,0,1,2,13,10,11,14,18,19,18,14,13,12,11,9,9,8,5,3,1,0,0,0,0,0,1,12,10,11,14,18,19,19,16,15,13,11,10,9,9,7,3,1,0,0,0,0,0,2,11,10,11,13,16,18,19,18,17,14,11,10,10,11,9,5,2,1,0,0,0,0,3,10,10,11,13,16,18,18,20,18,14,11,11,12,12,10,6,4,1,0,0,0,0,3,11,11,11,13,15,16,17,18,17,14,12,12,13,13,11,8,6,4,2,0,0,1,3,11,12,12,13,14,15,16,16,16,15,14,14,14,14,12,10,8,8,6,2,0,1,2,11,13,14,15,15,15,16,16,16,16,15,14,14,14,12,10,10,9,8,3,0,0,1,11,13,16,17,16,15,17,17,16,16,16,15,14,13,12,10,9,9,8,7,5,1,0,11,15,19,19,17,17,18,18,18,18,17,15,14,12,11,9,9,8,8,9,8,4,0,11,16,19,20,18,17,19,19,19,19,19,17,14,13,12,10,9,8,8,9,9,6,1],
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
