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
        texture=ImageTexture(url=['../../images/5/newport20-19.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.28151729792728,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,0,0,0,0,1,3,5,6,5,6,8,9,11,14,15,17,0,0,0,0,0,0,0,0,0,0,0,0,1,5,7,6,7,8,9,11,12,14,15,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,6,6,8,10,11,13,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,7,10,12,12,12,13,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,9,10,10,12,11,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,9,10,10,11,13,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,10,10,11,15,17,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,7,7,9,12,14,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,6,7,10,12,13,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,7,9,12,15,14,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,7,11,15,19,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,11,16,20,15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,14,16,13,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,8,10,12,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,6,8,12,13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,6,10,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5],
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
