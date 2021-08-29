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
        texture=ImageTexture(url=['../../images/5/newport20-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[9,9,9,9,9,9,10,11,12,13,14,15,16,15,13,13,13,13,13,12,12,12,12,9,9,9,9,9,9,9,11,11,12,14,15,15,13,13,13,14,14,15,15,12,12,11,11,10,9,9,9,11,12,11,11,11,12,13,13,12,13,13,13,13,14,15,12,11,10,10,10,9,9,10,12,13,12,12,12,11,11,10,11,14,15,15,14,12,10,8,9,10,8,9,10,10,10,11,12,13,13,12,11,11,10,11,13,16,15,13,9,7,8,9,9,8,8,9,11,10,11,12,13,12,11,11,11,10,11,12,13,12,9,7,7,8,8,7,8,8,7,8,8,9,10,11,11,11,10,11,13,12,10,8,7,5,5,6,7,6,6,9,8,8,7,7,6,7,7,8,7,8,10,11,12,9,6,5,3,4,6,5,5,6,7,9,10,8,6,6,6,6,7,8,8,9,8,8,5,5,5,5,6,5,4,4,6,9,9,8,7,6,6,6,7,9,11,12,10,7,4,3,3,3,6,7,6,4,4,4,7,7,8,7,6,6,6,7,8,9,12,9,6,4,3,3,3,4,5,4,2,3,3,7,7,7,8,8,7,8,9,9,9,8,6,5,5,5,4,3,2,3,3,2,2,3,7,7,7,7,8,8,10,12,12,10,8,6,6,6,4,3,2,0,1,2,3,2,2,9,10,10,8,6,7,8,10,11,10,9,8,7,6,3,3,2,1,1,2,2,3,2,9,10,8,7,6,6,5,6,6,8,10,10,8,6,4,3,4,2,1,2,3,3,1,9,8,7,7,7,7,6,4,4,6,7,9,8,6,6,3,3,3,3,2,3,3,3,9,8,8,8,8,9,8,7,6,6,5,6,7,7,7,4,5,5,4,5,4,4,3,9,10,10,10,10,10,9,10,10,8,6,4,6,7,7,6,6,7,6,7,6,4,3,9,9,11,12,12,11,11,11,12,10,8,9,10,10,11,10,8,8,9,8,7,8,8,9,9,10,11,11,10,11,11,12,11,9,10,11,11,11,11,11,9,7,7,6,7,8,9,9,10,11,11,10,10,10,10,12,11,12,12,12,11,11,11,10,9,9,8,8,8,10,9,10,11,11,10,10,10,10,11,12,12,12,11,10,9,9,9,10,10,10,9,7,10,10,11,11,11,10,10,11,11,11,11,12,13,11,10,8,8,8,8,10,10,9,9],
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
