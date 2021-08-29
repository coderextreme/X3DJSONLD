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
        texture=ImageTexture(url=['../../images/5/newport11-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,4,4,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,3,7,6,5,3,2,0,0,0,0,0,0,0,0,0,0,0,0,2,4,2,4,4,6,5,4,5,4,0,0,0,0,0,0,0,0,0,0,0,0,7,6,6,6,4,6,5,4,5,4,2,0,0,0,0,0,0,0,0,0,0,0,7,7,8,8,5,8,10,8,5,4,4,0,0,0,0,0,0,0,0,0,0,0,4,7,8,13,10,10,11,6,6,5,6,1,0,0,0,0,0,0,0,0,0,0,6,9,12,13,12,12,12,6,7,8,7,5,0,0,0,0,0,0,0,0,0,0,10,13,14,14,12,13,12,10,6,7,7,5,0,0,0,0,0,0,0,0,0,0,13,14,13,11,11,14,13,12,9,6,4,1,0,0,0,0,0,0,0,0,0,0,12,13,12,12,10,14,14,14,11,7,3,1,0,0,0,0,0,0,0,0,0,0,11,13,15,12,14,16,17,17,12,7,5,3,6,6,0,0,0,0,0,0,0,0,12,14,14,12,16,18,17,18,14,10,9,9,12,11,2,0,0,0,0,0,0,0,17,14,14,16,18,19,18,17,15,12,14,10,8,13,9,0,0,0,0,0,0,0,18,16,16,16,17,18,17,17,16,14,13,12,14,10,11,0,0,0,0,0,0,0,18,17,17,16,17,18,17,17,16,15,13,12,14,11,11,1,0,0,0,0,0,0],
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
