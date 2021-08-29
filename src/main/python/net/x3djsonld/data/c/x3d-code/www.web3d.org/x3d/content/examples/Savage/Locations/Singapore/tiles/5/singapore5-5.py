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
        texture=ImageTexture(url=['../../images/5/singapore5-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.6616511706451,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,2,1,0,0,0,1,1,0,0,-1,0,0,2,1,0,0,-1,0,0,1,2,3,4,4,3,2,2,2,0,0,-1,-1,-1,-2,-1,0,3,1,0,0,0,0,2,2,1,0,0,0,1,3,2,1,0,0,0,0,2,3,4,4,4,3,3,3,3,1,0,0,0,0,0,0,1,2,2,1,0,0,1,3,3,3,1,0,0,1,2,2,2,0,-1,-1,0,2,4,4,3,3,3,2,2,1,1,0,1,1,0,0,1,3,2,2,2,1,2,2,4,5,4,3,1,0,1,2,3,2,1,-2,-2,0,2,4,4,2,2,2,1,0,0,0,1,2,2,2,2,3,4,1,2,1,0,0,1,1,2,3,3,2,1,1,2,3,3,1,-1,-1,1,2,4,4,3,2,2,1,0,0,0,1,2,3,3,3,4,4,0,0,0,0,0,0,0,0,1,3,3,2,1,2,3,5,4,1,0,2,2,3,3,3,2,1,1,0,0,0,1,3,3,3,3,4,5,1,1,1,1,0,1,2,2,3,4,3,1,1,0,1,4,4,3,2,2,2,2,2,3,5,7,8,5,3,2,2,3,4,4,3,4,5,3,4,4,4,4,5,6,7,7,5,3,1,0,0,0,3,5,6,5,3,2,1,2,4,9,15,16,11,6,3,3,4,5,4,4,4,6,4,4,5,5,5,5,6,7,6,4,3,1,0,0,0,2,4,5,4,2,1,1,2,4,9,16,18,15,11,7,4,4,5,4,4,5,6,4,4,5,6,6,5,5,5,4,3,3,2,1,0,0,1,2,2,1,0,0,0,1,4,8,13,17,19,17,10,5,4,4,3,3,4,5,4,4,5,5,4,2,3,4,3,1,1,2,1,0,0,1,1,2,1,0,0,0,1,3,7,13,17,20,18,13,8,5,3,2,2,4,5,4,6,5,4,1,0,1,2,1,1,1,2,1,0,0,0,1,2,2,0,0,0,0,2,7,13,17,18,17,15,11,6,2,0,0,2,5,5,6,5,3,1,0,0,1,1,1,1,1,0,0,0,0,1,3,3,1,0,0,0,2,5,11,15,16,16,15,12,7,2,0,1,3,6,6,7,7,5,3,1,1,1,1,1,0,0,0,0,0,0,1,3,3,2,2,2,2,2,5,9,12,13,14,14,11,6,2,2,3,6,9,5,6,7,6,4,3,2,2,2,1,1,1,0,0,0,0,0,1,2,2,3,4,4,4,5,6,8,11,12,13,11,5,2,2,4,7,10,5,6,6,5,4,4,3,2,2,2,3,4,2,0,0,0,0,0,0,1,4,6,7,7,6,5,5,8,10,11,9,4,0,1,3,6,10,3,4,4,4,5,4,4,2,2,2,3,4,3,0,0,-1,-1,-1,0,2,4,7,8,7,6,3,2,5,7,9,8,4,1,2,4,6,9,1,1,2,3,5,6,5,2,1,0,1,2,2,0,0,-2,-1,0,1,3,5,6,7,7,5,1,0,1,4,6,7,6,5,6,6,6,6,2,1,2,4,6,8,7,4,1,0,1,2,0,0,-1,-2,-1,0,2,3,4,5,5,5,3,0,-1,0,2,4,6,7,8,8,7,6,5,6,4,3,5,9,13,11,5,3,2,1,2,0,0,-1,-2,-1,0,0,1,1,2,2,3,1,0,0,0,2,5,6,7,8,8,7,6,5,8,6,5,6,11,14,11,6,3,2,2,2,2,1,0,0,-1,-1,-1,0,0,0,0,0,0,0,0,1,3,5,6,7,8,8,7,6,5,6,6,7,9,11,11,8,4,2,2,3,4,5,5,3,1,-1,-3,-4,-4,-3,-2,0,0,1,2,3,4,5,6,7,7,7,8,7,7,6,4,5,7,9,9,8,5,2,2,2,3,4,6,7,6,2,-1,-6,-8,-8,-6,-4,-2,0,2,3,5,6,6,6,7,7,7,8,8,7,7],
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
