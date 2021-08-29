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
        texture=ImageTexture(url=['../../images/5/newport20-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.41065102236746,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[12,12,12,11,11,11,11,13,11,11,10,10,11,10,9,10,9,9,7,0,0,0,0,11,12,11,11,11,11,11,10,10,10,11,12,12,10,8,8,8,9,5,0,0,0,0,10,10,12,11,10,11,11,10,11,12,11,11,9,7,6,6,5,6,3,0,0,0,0,10,9,9,9,9,9,10,10,10,9,8,7,8,10,9,5,6,9,5,0,0,0,0,9,8,8,9,9,9,9,10,9,8,7,7,9,12,12,7,6,5,3,0,0,0,0,7,8,9,7,7,8,8,9,8,9,9,8,9,10,10,8,5,2,0,0,0,0,0,6,7,6,6,6,6,5,4,5,7,6,6,6,5,3,4,3,2,1,0,0,0,0,6,7,6,5,5,5,5,4,6,8,7,6,5,3,3,5,4,4,2,0,0,0,0,6,5,4,4,5,5,4,5,6,6,6,5,4,4,3,3,5,6,3,0,0,0,0,4,4,4,4,4,4,4,4,5,6,5,5,5,4,3,4,7,9,9,2,0,0,0,3,4,3,5,5,4,4,4,4,5,5,6,7,5,3,3,4,6,6,1,0,0,0,3,4,4,5,5,4,4,4,5,6,6,6,6,6,4,2,3,4,4,1,0,0,0,2,3,4,5,5,3,2,3,7,8,7,7,6,5,3,3,2,2,1,0,0,0,0,2,1,0,2,3,2,3,3,7,8,8,7,5,5,4,4,3,4,5,2,0,0,0,1,1,2,3,4,7,9,8,9,7,7,6,5,5,6,5,4,5,7,2,0,0,0,3,3,4,4,5,8,12,12,10,8,7,6,6,7,7,6,5,5,6,1,0,0,0,3,2,3,5,4,4,6,8,10,12,13,11,10,11,10,9,7,6,5,1,0,0,0,3,3,3,4,4,5,6,7,8,11,13,12,11,11,10,10,9,8,5,1,0,0,0,8,5,5,6,6,8,10,9,11,11,10,8,8,8,9,9,9,8,6,1,0,0,0,8,6,7,8,8,8,7,8,10,9,10,10,9,9,11,10,11,12,9,2,0,0,0,8,8,7,7,9,9,8,10,8,7,8,10,11,11,12,12,12,10,6,1,0,0,0,7,9,8,7,10,11,11,11,8,8,9,9,10,10,10,11,9,6,3,0,0,0,0,9,10,9,7,10,11,12,10,9,10,10,9,8,8,8,9,9,5,3,0,0,0,0],
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
