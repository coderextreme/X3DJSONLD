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
        texture=ImageTexture(url=['../../images/5/newport29-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,29,27,28,29,24,21,19,19,18,14,7,7,6,5,6,9,12,14,16,17,16,26,26,26,25,24,18,16,15,13,11,10,6,7,8,6,6,11,13,16,18,18,18,22,21,20,18,16,13,12,11,11,8,6,6,8,8,6,6,13,15,18,18,19,19,18,17,17,14,15,14,12,10,6,7,6,6,5,6,5,5,12,15,18,20,20,20,17,14,14,14,13,13,11,8,7,7,7,6,5,5,10,4,12,15,17,17,17,17,15,17,15,14,11,11,10,6,6,5,6,5,5,9,12,6,10,13,14,14,14,14,14,17,17,13,10,5,5,5,5,5,7,9,7,10,12,9,7,14,13,14,14,15,14,16,16,13,10,5,5,5,5,9,9,16,15,11,11,12,8,11,12,14,16,16,17,14,14,13,8,5,5,5,6,7,10,14,16,20,15,17,14,11,11,13,18,18,19,16,14,12,9,8,6,5,6,6,8,9,11,14,15,17,17,13,10,13,17,17,17,16,14,12,6,5,6,6,6,6,7,8,15,13,16,17,17,17,13,11,13,13,17,16,14,11,6,6,6,5,5,8,11,10,11,15,17,18,17,13,11,13,11,11,17,15,13,10,5,6,7,6,8,10,11,11,11,14,15,17,16,13,14,15,12,12,16,14,12,9,6,6,7,7,9,11,11,11,11,14,14,14,13,13,15,16,13,13,15,13,11,8,5,5,6,8,10,11,11,12,13,16,14,13,13,15,19,16,13,12,14,13,9,4,4,5,5,5,12,15,12,13,15,15,14,14,14,19,16,14,13,13,17,13,8,5,4,5,5,5,9,15,17,14,14,14,14,15,17,15,14,14,13,13,17,11,7,5,5,5,6,5,3,13,15,15,14,14,15,16,17,14,14,13,14,14,8,6,6,5,5,5,7,7,6,12,14,15,14,15,15,18,17,16,14,15,14,14,6,6,5,5,5,5,9,12,9,10,12,13,14,15,15,19,17,17,16,15,14,14,6,5,5,5,4,4,9,15,14,12,11,12,13,14,17,19,17,18,17,15,15,14,6,6,5,5,4,9,12,15,15,14,11,10,11,13,17,18,17,19,17,15,15,15,5,5,5,5,6,13,15,15,16,16,15,9,10,11,17,19,18,20,15,16,17,16,5,5,5,4,7,13,15,15,16,16,15,9,9,11,16,20,19,20,14,16,17,16],
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
