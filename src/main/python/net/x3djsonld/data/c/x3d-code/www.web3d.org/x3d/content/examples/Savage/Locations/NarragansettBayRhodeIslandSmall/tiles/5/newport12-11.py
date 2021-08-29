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
        texture=ImageTexture(url=['../../images/5/newport12-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.34608416014737,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,0,3,9,11,11,11,12,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,9,10,9,11,11,12,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,14,12,12,12,13,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,14,13,13,13,14,13,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,11,15,15,13,14,14,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,16,19,19,16,14,13,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,11,14,17,17,15,14,13,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,12,14,17,16,15,15,15,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,3,15,16,19,19,17,15,14,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,15,17,18,19,17,15,11,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,18,16,18,17,15,13,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,17,15,15,15,13,13,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,10,11,10,9,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,8,8,7,9,9,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,8,11,11,9,9,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,9,8,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,8,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
