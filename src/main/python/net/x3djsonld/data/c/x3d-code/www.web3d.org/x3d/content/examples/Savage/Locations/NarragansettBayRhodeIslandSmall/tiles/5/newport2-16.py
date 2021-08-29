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
        texture=ImageTexture(url=['../../images/5/newport2-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45423022665502,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[8,7,6,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,8,8,9,8,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,9,9,9,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,10,10,9,9,8,6,5,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,11,10,10,9,9,9,8,5,0,0,0,0,0,0,0,0,0,0,0,0,0,11,11,11,11,10,10,10,10,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,12,11,11,11,11,11,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,10,10,11,11,11,10,10,10,10,6,0,0,0,0,0,0,0,0,0,0,0,0,0,9,9,10,10,10,10,10,10,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,9,9,10,10,10,10,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,9,9,9,9,9,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,8,8,8,8,8,8,8,8,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,7,7,7,8,8,8,9,6,2,0,0,0,0,0,0,0,0,0,0,0,0,6,6,6,7,7,8,8,9,10,9,6,3,0,0,0,0,0,0,0,0,0,0,0,5,6,6,7,7,8,9,10,11,10,9,7,4,1,0,0,0,0,0,0,0,0,0,6,6,6,7,8,9,10,11,11,11,10,9,7,4,1,0,0,0,0,0,0,0,0,6,6,6,7,8,9,11,12,12,11,11,10,8,6,3,0,0,0,0,0,0,0,0,7,6,6,7,8,9,11,12,12,11,11,10,8,3,0,0,0,0,0,0,0,0,0,8,7,6,7,8,8,10,11,10,10,10,9,3,0,0,0,0,0,0,0,0,0,0,8,8,7,7,7,8,8,9,9,10,10,9,3,0,0,0,0,0,0,0,0,0,0,9,8,8,7,7,8,8,9,9,10,10,9,3,0,0,0,0,0,0,0,0,0,0,9,8,8,8,8,8,9,9,9,10,10,9,3,0,0,0,0,0,0,0,0,0,0],
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
