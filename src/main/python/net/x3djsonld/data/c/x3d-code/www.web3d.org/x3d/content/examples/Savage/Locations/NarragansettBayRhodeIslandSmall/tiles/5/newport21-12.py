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
        texture=ImageTexture(url=['../../images/5/newport21-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.33801330236986,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,9,15,18,19,18,18,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,13,18,20,19,18,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,17,19,19,22,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,17,19,20,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,16,18,19,19,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,10,14,16,17,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,12,16,18,20,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,15,16,17,19,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,13,16,16,17,18,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,14,15,14,15,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,11,11,14,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,8,12,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,7,11,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,7,10,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
