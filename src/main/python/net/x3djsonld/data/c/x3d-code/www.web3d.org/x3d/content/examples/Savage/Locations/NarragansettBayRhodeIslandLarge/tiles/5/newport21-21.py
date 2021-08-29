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
        texture=ImageTexture(url=['../../images/5/newport21-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,4,14,22,29,33,33,34,31,31,32,36,34,38,39,32,29,0,0,0,0,0,0,0,14,23,27,31,33,33,33,31,31,30,37,33,32,33,33,0,0,0,0,0,0,0,14,20,25,32,34,34,33,31,30,30,26,26,26,32,31,0,0,0,0,0,0,0,9,19,24,26,30,33,36,32,30,25,22,17,20,21,23,0,0,0,0,0,0,0,8,15,16,18,25,29,31,32,27,24,19,12,18,21,21,0,0,0,0,0,0,0,5,8,8,9,16,20,26,30,25,22,18,15,15,15,16,0,0,0,0,0,0,0,0,5,3,5,8,12,17,24,25,20,18,19,13,12,13,0,0,0,0,0,0,0,0,1,1,1,3,8,9,12,19,22,18,13,11,13,13,0,0,0,0,0,0,0,0,0,1,1,2,3,5,7,17,16,14,12,8,10,9,0,0,0,0,0,0,0,2,2,1,1,1,4,4,12,14,9,9,7,7,6,6,0,0,0,0,0,2,2,3,5,3,1,3,5,11,7,8,8,7,7,5,1,1,0,0,0,1,2,2,3,4,5,3,5,2,6,12,4,7,8,5,0,0,1,1,4,2,1,5,5,5,6,4,6,5,3,2,2,1,6,7,7,0,0,0,0,0,4,3,6,5,7,7,7,4,1,0,1,0,1,3,7,3,0,0,0,0,0,0,6,6,5,6,7,5,1,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,6,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
