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
        texture=ImageTexture(url=['../../images/5/newport27-18.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.39548447401864,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[11,10,8,9,11,13,14,15,11,7,0,0,0,0,0,0,0,0,0,0,0,0,6,9,6,5,11,13,14,14,10,5,0,1,0,0,0,0,0,0,0,0,0,0,6,3,3,6,11,12,13,12,9,3,0,3,0,0,0,0,0,0,0,0,0,0,2,2,2,3,7,8,4,8,5,0,0,5,0,0,0,0,0,0,0,0,0,0,2,2,2,2,1,4,3,1,2,0,2,6,0,0,0,0,0,0,0,0,0,0,2,2,2,2,7,9,8,7,5,0,3,9,0,0,0,0,0,0,0,0,0,0,2,2,2,2,9,10,9,9,7,2,3,5,0,0,0,0,0,0,0,0,0,0,2,2,2,4,9,10,10,9,6,3,0,0,0,0,0,0,0,0,0,0,0,0,2,2,2,2,7,9,9,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,1,1,2,6,8,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,3,2,2,6,7,8,9,6,4,0,0,0,0,0,0,0,0,0,0,0,0,0,8,5,9,9,9,9,10,9,9,1,0,0,0,0,0,0,0,0,0,0,0,0,12,12,11,10,11,11,11,11,10,4,0,0,0,0,0,0,0,0,0,0,0,0,12,11,11,11,11,11,12,12,10,1,0,0,0,0,0,0,0,0,0,0,0,0,12,11,11,11,11,11,12,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,11,11,11,12,12,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,12,11,11,12,12,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,12,12,11,12,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,12,12,8,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,12,12,7,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,12,7,8,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,13,11,11,12,11,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,14,14,14,13,11,6,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,14,14,13,11,7,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
