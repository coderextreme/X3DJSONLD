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
        texture=ImageTexture(url=['../../images/5/newport27-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,16,12,7,5,4,3,3,4,4,4,2,0,0,0,0,0,0,0,0,0,0,15,15,13,9,6,5,5,2,2,2,2,1,0,0,0,0,0,1,0,0,0,0,13,14,11,8,6,6,4,2,2,1,1,0,0,0,0,0,0,0,1,0,0,0,11,12,11,8,8,6,4,2,2,1,1,1,0,1,1,0,0,0,0,1,0,0,9,9,9,8,6,6,3,2,2,1,1,1,0,0,0,0,0,0,0,0,1,1,8,8,8,7,6,5,3,2,2,2,1,1,0,0,0,0,0,0,0,0,0,0,8,8,7,7,6,3,2,2,3,2,1,0,0,0,0,0,1,5,6,1,0,0,9,8,7,6,5,3,3,3,4,4,3,0,0,0,0,1,2,5,7,7,3,2,8,8,7,6,6,3,3,5,5,5,2,0,0,0,0,1,2,6,7,7,6,6,8,8,7,7,5,2,3,4,5,5,1,1,0,0,0,1,4,6,7,7,7,7,8,8,8,9,6,2,2,3,3,2,0,1,0,0,0,3,6,7,7,7,7,7,8,8,9,10,9,7,4,2,2,1,0,1,0,0,1,5,6,7,7,6,5,5,8,8,10,11,10,6,4,2,2,2,1,1,0,0,0,3,6,6,6,5,5,5,9,9,10,12,10,6,3,2,2,2,1,1,0,0,4,6,6,6,5,5,5,5,11,11,11,12,8,7,3,2,2,1,1,0,0,6,3,5,6,6,5,5,5,6,15,15,14,12,7,6,3,3,2,1,0,1,7,6,5,6,6,6,6,6,6,6,17,18,14,9,4,3,5,5,3,1,0,4,6,6,6,6,6,7,7,7,7,7,14,13,8,3,5,5,5,5,3,1,1,2,2,5,7,6,7,7,7,7,7,8,8,7,4,3,5,5,5,4,3,2,2,2,2,2,4,7,7,7,7,7,7,7,6,5,3,2,3,4,4,3,3,3,2,2,2,2,2,6,7,8,7,7,7,8,5,4,2,2,3,3,3,3,3,2,2,2,2,2,3,5,8,8,8,8,8,8,5,3,2,2,3,2,2,2,2,2,2,2,2,2,5,6,7,8,8,8,8,8,5,3,2,1,1,1,4,5,6,8,5,4,2,5,8,8,8,8,8,8,8,8,5,3,2,1,1,1,5,6,7,8,7,5,3,6,8,8,8,8,8,8,8,8],
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
