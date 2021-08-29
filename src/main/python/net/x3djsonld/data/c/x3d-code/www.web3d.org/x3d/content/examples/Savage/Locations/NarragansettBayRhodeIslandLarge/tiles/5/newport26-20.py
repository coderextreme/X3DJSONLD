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
        texture=ImageTexture(url=['../../images/5/newport26-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,1,2,11,9,8,13,13,12,1,6,4,0,0,0,0,0,0,0,0,0,0,9,9,8,7,8,11,13,13,10,1,4,8,0,0,0,0,0,0,0,0,0,4,4,4,6,4,9,12,15,9,9,4,4,4,0,0,0,0,0,0,0,0,4,4,4,5,6,7,6,11,10,9,10,5,5,5,0,0,0,0,0,0,0,1,5,4,3,5,7,5,6,12,5,7,8,14,5,5,0,0,0,0,0,0,0,1,5,4,4,4,3,9,13,3,6,9,7,8,9,9,0,0,0,0,0,0,1,1,3,5,6,8,7,8,3,8,8,12,9,10,6,6,0,0,0,0,2,3,0,0,0,7,8,8,11,8,12,7,14,11,10,7,7,6,0,0,0,1,5,3,4,0,0,6,8,7,7,10,11,19,12,12,9,8,5,6,0,0,2,1,2,3,0,0,0,4,9,6,12,11,10,21,21,18,10,6,6,5,0,0,0,3,2,3,0,3,1,3,8,12,13,16,17,15,17,17,14,9,8,8,0,0,1,4,1,1,2,4,4,5,8,11,14,16,16,18,16,14,16,15,12,11,0,1,1,3,2,2,4,5,5,5,8,9,15,15,15,15,16,16,16,15,12,12,0,0,0,0,4,4,6,5,3,5,7,11,12,15,15,15,15,15,14,12,9,9,0,0,0,0,4,5,6,6,3,5,5,9,10,14,14,15,12,14,13,12,8,8,1,1,1,1,4,5,6,4,4,4,4,6,9,13,13,12,9,10,13,12,10,9,1,1,1,2,3,5,6,4,3,3,3,7,9,11,12,9,8,11,13,12,10,9,1,1,1,3,3,4,5,4,3,3,3,5,7,10,9,8,8,10,12,12,12,11,1,1,1,1,1,3,3,3,2,2,3,6,6,9,9,8,8,10,12,13,12,12,1,1,3,2,2,3,4,3,3,3,2,6,7,8,8,8,8,10,12,13,14,14,1,1,1,3,5,3,3,4,4,5,4,5,7,8,8,8,9,11,12,13,14,14,2,1,4,2,5,7,2,4,4,4,5,5,7,8,9,9,10,12,12,13,14,14,1,1,6,6,4,5,4,5,5,5,5,5,6,7,8,9,11,12,13,14,15,15,1,1,6,6,5,5,4,5,5,5,5,5,6,7,8,9,11,12,13,14,15,15],
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
