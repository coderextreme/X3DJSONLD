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
        texture=ImageTexture(url=['../../images/5/newport26-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[4,7,4,3,2,4,9,11,14,3,0,0,0,0,0,0,0,6,8,11,9,10,8,1,4,3,9,6,7,3,4,5,4,5,4,3,3,4,6,3,5,3,9,4,4,7,3,7,9,7,6,5,5,6,5,9,7,7,9,11,6,4,5,5,6,6,5,5,4,12,6,12,10,11,11,9,11,8,13,13,14,12,12,8,7,9,9,8,5,3,6,7,9,13,13,13,15,16,15,13,14,13,15,14,13,15,13,10,6,8,9,5,6,12,12,12,12,18,14,15,15,17,13,14,14,13,12,15,13,14,13,12,6,6,3,6,12,18,17,18,15,16,15,11,9,6,5,6,11,16,15,17,10,9,6,7,5,10,10,7,9,15,17,12,10,2,1,1,1,3,12,11,6,1,1,1,6,11,5,5,7,9,12,11,14,12,8,9,5,1,6,1,1,1,1,1,1,1,5,3,15,7,6,5,9,13,12,11,7,5,5,10,6,1,0,1,1,1,1,1,8,7,8,7,8,11,8,7,5,6,6,7,7,1,3,1,1,1,1,1,1,1,11,7,5,5,8,8,10,6,6,7,6,3,2,3,1,1,1,1,0,0,2,3,12,6,4,4,4,9,11,10,9,3,2,2,1,0,1,1,1,1,0,2,3,4,9,8,5,4,5,9,8,8,5,4,4,3,2,0,0,0,0,0,3,3,4,4,8,7,5,6,7,3,3,4,5,5,5,4,0,0,0,1,2,2,3,4,5,5,9,7,7,7,7,5,5,4,3,3,4,1,0,0,0,2,3,3,3,4,4,4,9,9,8,8,8,7,5,3,2,2,1,0,0,0,0,3,3,3,3,4,4,4,11,11,9,9,6,5,4,3,2,2,1,0,0,0,0,3,3,4,4,4,4,4,12,12,11,11,6,5,3,2,2,1,1,0,0,0,0,0,2,3,4,4,4,4,14,13,11,7,5,4,3,2,2,2,1,0,0,0,0,0,0,2,3,4,4,4,14,15,10,6,5,5,4,2,2,2,1,1,0,0,0,0,0,0,1,3,3,3,14,15,11,6,5,4,3,3,4,4,5,0,0,0,0,0,0,0,0,0,0,0,15,15,12,7,5,4,2,3,4,4,5,1,0,0,0,0,0,0,0,0,0,0,15,16,12,7,5,4,3,3,4,4,4,2,0,0,0,0,0,0,0,0,0,0],
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
