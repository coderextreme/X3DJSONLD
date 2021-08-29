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
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0.6,0.6,0.6)),
        texture=ImageTexture(url=['../../images/5/singapore4-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.247190112711976,103.77655544367725,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=22,zSpacing=4.1579583E-4,height=[10,8,8,8,8,8,8,8,8,7,6,5,4,4,4,6,7,9,10,11,10,10,8,4,1,-1,-3,-4,-4,-2,0,0,0,0,0,0,0,10,9,8,8,8,8,8,8,8,8,7,6,5,4,4,4,5,7,9,10,10,11,9,8,5,1,-1,-3,-4,-2,0,0,0,0,0,0,0,10,9,9,9,8,8,8,8,8,8,8,7,6,5,4,4,4,6,7,9,10,10,10,10,8,5,1,-2,-3,-1,0,0,0,0,0,0,1,9,9,9,9,9,8,8,8,8,8,8,8,7,6,5,4,4,4,5,7,9,10,10,11,9,8,5,0,-1,0,0,0,0,0,0,1,1,8,9,9,9,9,9,8,8,8,8,8,8,8,7,6,5,4,4,4,6,7,9,10,10,10,10,8,3,0,0,0,0,0,0,1,1,1,9,9,9,9,9,9,9,8,8,8,8,8,8,8,7,6,5,4,4,4,5,7,9,10,10,11,9,5,2,0,0,0,0,1,1,1,1,10,9,9,9,9,9,9,9,8,8,8,8,8,8,8,7,6,5,4,4,4,6,7,9,10,10,10,7,4,1,0,0,1,1,1,1,1,10,10,9,9,9,9,9,9,9,8,8,8,8,8,8,8,7,6,5,4,4,4,5,7,9,9,9,6,3,2,0,1,1,1,1,1,2,10,11,10,10,10,10,10,10,10,9,8,8,8,8,8,8,8,7,6,5,4,4,4,6,7,8,7,4,2,2,1,1,1,1,1,2,2,10,11,11,10,10,10,10,10,10,10,9,8,8,8,8,8,8,8,7,6,5,4,4,4,5,5,5,3,2,1,1,1,1,1,2,2,3,9,10,11,11,11,11,11,11,10,10,10,9,8,8,8,8,8,8,8,7,6,5,4,4,3,4,3,2,1,1,1,1,1,2,2,3,4,9,10,11,11,12,11,11,11,11,10,10,10,9,8,8,8,8,8,8,8,7,6,5,4,3,3,2,1,1,1,1,1,2,2,3,4,4,9,10,10,11,11,12,11,11,11,11,10,10,10,9,8,8,8,8,8,8,8,7,6,5,4,2,1,1,1,1,1,2,2,3,4,4,4,9,9,10,11,11,11,11,11,11,11,11,10,10,10,9,8,8,8,8,8,8,8,7,6,5,2,1,1,1,1,2,2,3,4,4,4,4,9,9,10,11,11,11,11,12,11,11,11,11,10,10,10,9,9,8,8,8,8,8,8,7,6,3,1,1,1,2,2,3,4,4,4,4,5,9,9,10,10,11,11,11,11,11,11,11,11,11,10,10,10,9,9,8,8,8,8,7,6,5,2,1,1,2,2,3,4,4,4,4,5,5,9,9,10,10,10,11,11,11,11,12,11,11,11,11,10,10,10,9,9,8,8,8,7,5,3,2,1,1,2,3,4,4,4,4,5,5,6,9,9,10,10,10,10,11,11,11,11,11,11,11,11,11,10,10,10,9,9,8,7,6,3,2,2,1,2,3,4,4,4,4,5,5,6,6,9,9,9,10,10,10,10,11,11,11,11,12,11,11,11,11,10,10,10,9,8,7,5,2,2,2,2,3,4,4,4,4,5,5,6,6,6,9,9,9,9,10,10,10,10,11,11,11,11,11,11,11,11,11,10,10,10,9,7,5,2,2,2,3,4,4,4,4,5,5,6,6,6,6,9,9,9,9,9,10,10,10,10,11,11,11,11,12,11,11,11,11,10,10,9,8,6,3,2,3,4,4,4,4,5,5,6,6,6,6,7,8,9,9,9,9,9,10,10,10,10,11,11,11,11,11,11,11,11,11,10,9,8,7,4,3,4,4,4,4,5,5,6,6,6,6,7,7],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(1.3519706612479037,103.81964454606431,0),geoSystem=['GDC'])))])
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
