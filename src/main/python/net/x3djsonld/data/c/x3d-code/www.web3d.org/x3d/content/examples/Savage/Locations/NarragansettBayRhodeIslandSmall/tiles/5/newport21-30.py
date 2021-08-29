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
        texture=ImageTexture(url=['../../images/5/newport21-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[5,4,4,4,5,6,7,8,8,9,9,8,7,6,6,7,7,7,7,6,6,6,7,3,3,3,4,5,6,7,8,9,9,10,8,8,7,7,7,7,7,7,7,7,6,7,3,3,3,4,4,5,7,8,9,10,10,9,9,9,9,8,7,7,7,8,8,7,7,2,2,2,3,4,5,6,7,8,9,10,10,10,10,10,9,8,7,7,7,7,8,8,1,0,2,3,3,4,5,6,8,9,10,10,10,11,11,10,9,7,7,7,7,8,8,0,0,2,2,2,3,4,6,7,8,9,9,10,11,11,10,8,7,6,7,7,7,8,0,0,1,1,2,2,3,5,6,7,8,9,10,12,11,10,8,7,6,7,7,6,8,0,0,0,0,1,1,2,4,5,6,7,8,10,12,12,11,8,7,6,6,6,6,9,0,0,0,0,0,0,2,3,4,5,7,9,11,13,12,10,8,6,6,7,6,6,10,0,0,0,0,0,0,1,2,4,5,6,9,11,13,12,10,8,7,7,7,7,6,10,0,0,0,0,0,0,1,2,3,4,6,9,12,13,12,10,8,7,7,7,7,7,9,0,0,0,0,0,0,0,1,3,4,8,12,13,13,12,11,9,7,6,6,6,7,9,0,0,0,0,0,0,0,1,3,7,13,16,15,13,12,10,8,7,6,6,6,7,9,0,0,0,0,0,0,0,1,4,11,17,17,15,13,11,10,8,7,6,6,6,7,10,0,0,0,0,0,0,0,2,5,11,15,16,15,13,11,10,8,7,7,7,7,9,10,0,0,0,0,0,0,1,2,4,7,11,13,15,14,12,11,9,7,6,7,9,10,12,0,0,0,0,0,0,1,2,3,5,8,11,14,14,13,12,10,8,7,8,10,12,14,0,0,0,0,0,1,1,2,3,5,7,10,13,14,14,12,11,9,8,9,11,13,15,0,0,0,0,0,0,1,2,3,5,7,9,12,14,14,13,11,9,9,9,11,13,15,0,0,0,0,1,0,0,1,3,5,7,9,11,13,14,13,12,10,10,10,12,14,16,0,0,0,1,0,0,0,1,3,4,6,8,10,12,13,13,13,12,11,12,14,15,18,0,0,0,0,0,0,0,1,3,4,6,8,10,12,13,14,14,13,13,13,15,16,19,0,0,0,0,0,0,0,1,3,4,7,9,11,12,13,14,14,14,14,14,15,16,19],
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
