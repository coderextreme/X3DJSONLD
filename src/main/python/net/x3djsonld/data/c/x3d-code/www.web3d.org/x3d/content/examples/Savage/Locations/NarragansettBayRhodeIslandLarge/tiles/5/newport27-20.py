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
        texture=ImageTexture(url=['../../images/5/newport27-20.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.35151376593183,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,6,6,5,5,4,5,5,5,5,5,6,7,8,9,11,12,13,14,15,15,1,1,6,6,5,6,5,5,5,5,5,5,6,6,7,9,10,11,12,14,15,15,1,5,6,6,5,6,6,6,5,5,6,5,5,5,5,7,9,10,11,13,13,13,1,5,6,6,6,6,6,6,6,6,6,5,5,6,6,7,8,9,9,11,11,11,1,5,6,6,6,6,6,6,6,6,6,6,6,6,7,7,8,8,8,8,9,9,2,2,5,6,6,6,6,6,6,7,6,6,6,7,7,8,8,8,8,8,8,8,4,4,3,6,6,6,6,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,9,8,2,6,6,6,7,7,7,7,7,7,7,7,7,8,8,8,8,8,9,9,8,6,4,6,6,7,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,7,4,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,8,8,8,9,9,6,8,8,8,7,7,7,7,7,8,7,7,7,7,7,7,8,8,8,8,8,8,8,8,8,8,8,7,7,7,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,7,7,7,8,8,8,8,8,8,8,8,8,8,8,9,8,8,8,8,8,8,8,7,7,8,8,8,8,8,9,8,9,9,9,8,9,9,9,8,8,8,8,8,8,8,8,8,8,8,8,9,9,10,10,10,10,10,11,8,9,8,8,8,8,8,8,8,8,8,8,9,10,10,11,11,11,12,13,15,15,8,9,9,8,8,8,8,8,8,8,8,8,10,11,13,14,15,15,16,17,17,17,8,9,9,8,8,8,8,8,8,8,8,9,10,11,11,15,16,11,16,15,14,14,8,8,9,10,9,9,9,9,9,9,9,9,11,11,10,11,12,9,9,8,9,8,9,8,8,10,11,10,11,10,10,9,9,10,10,9,9,9,10,8,8,6,6,6,10,8,8,9,11,10,11,11,11,9,9,10,9,9,10,10,11,11,9,6,5,5,9,10,10,9,10,10,10,9,8,9,9,10,10,10,10,11,11,11,9,7,5,5,12,8,9,9,8,9,9,10,9,9,10,10,10,10,10,9,8,10,9,7,5,5,13,8,10,9,8,9,9,10,9,9,10,10,10,10,10,9,8,9,9,7,5,5],
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
