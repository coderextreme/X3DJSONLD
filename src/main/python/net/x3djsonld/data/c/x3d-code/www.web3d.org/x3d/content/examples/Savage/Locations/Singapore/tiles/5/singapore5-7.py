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
        texture=ImageTexture(url=['../../images/5/singapore5-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.69037723890314,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=37,xSpacing=3.9897318E-4,zDimension=23,zSpacing=3.96896E-4,height=[3,5,6,5,2,-1,-5,-7,-7,-6,-3,0,3,5,6,7,7,7,6,6,6,5,5,5,5,7,8,10,9,9,9,9,9,10,11,12,11,3,6,8,9,7,3,-2,-5,-8,-7,-3,0,4,7,7,8,9,9,7,6,6,5,3,3,3,4,7,9,8,8,7,7,8,10,12,13,13,2,7,10,9,5,2,0,-2,-3,-3,0,2,5,7,7,8,8,7,6,6,5,5,4,4,4,5,7,9,8,7,6,6,7,8,10,11,10,2,8,12,9,3,1,1,0,0,1,2,4,6,7,7,7,6,6,6,6,4,4,5,6,7,8,9,9,8,7,5,5,5,6,8,9,8,1,6,8,4,0,-1,0,0,0,1,3,4,6,7,7,7,6,6,7,6,5,5,6,6,7,8,8,8,8,7,6,5,6,7,7,8,8,1,3,3,-1,-7,-6,-2,0,0,1,3,5,6,7,7,7,7,7,7,7,5,5,6,7,7,7,6,6,7,7,7,7,8,8,8,8,9,2,3,3,0,-5,-4,-2,0,0,2,4,6,6,7,7,7,7,7,7,6,5,5,6,7,7,7,6,7,7,8,8,8,8,9,8,8,9,3,5,6,2,-1,-1,0,0,2,4,6,7,7,7,7,7,7,7,6,6,5,5,6,7,7,7,8,8,8,9,10,10,9,9,9,9,10,1,3,4,2,0,0,0,2,4,6,7,7,8,8,8,8,8,8,6,6,5,5,6,7,7,7,8,9,9,9,10,10,10,10,9,10,11,0,0,1,2,1,1,2,3,5,6,7,8,9,9,9,9,9,8,7,6,7,7,6,6,7,8,9,9,10,10,11,11,11,11,10,11,13,-1,0,0,1,2,3,4,6,7,7,7,8,9,9,10,10,9,8,7,7,8,8,7,7,8,8,9,10,10,11,12,12,12,12,11,12,13,-1,-1,0,0,2,5,7,7,8,8,8,8,8,9,10,10,8,7,7,7,9,9,8,9,9,9,9,9,10,11,12,13,13,13,13,13,12,0,-1,0,1,3,6,8,8,8,8,8,8,8,8,9,9,8,7,7,8,9,10,9,10,10,10,9,9,9,11,12,13,13,13,13,13,11,0,0,0,2,4,6,8,9,9,9,8,8,7,7,8,8,8,8,8,8,9,10,10,10,11,11,9,8,9,11,12,12,12,12,12,12,11,2,1,2,4,6,8,9,9,9,9,9,9,8,7,7,7,9,9,9,9,9,10,10,10,11,10,9,8,9,10,10,11,11,11,11,11,10,3,3,4,6,8,10,12,12,11,11,11,11,9,8,7,9,11,12,12,11,10,10,9,9,10,10,9,8,8,8,8,9,10,11,10,9,8,4,4,5,7,9,12,14,15,15,15,15,13,11,9,7,8,10,12,12,11,10,9,8,8,9,10,10,9,8,8,8,8,9,10,9,9,8,5,4,4,7,10,13,16,19,20,20,18,15,11,9,7,7,8,9,9,9,9,8,7,8,10,11,11,11,10,8,8,8,9,9,9,9,10,4,4,5,7,10,13,17,20,22,21,19,16,11,8,6,6,6,7,7,7,8,8,8,9,11,12,12,12,10,9,8,8,8,8,9,10,11,4,5,5,7,10,13,16,19,20,21,20,16,10,7,5,5,5,5,5,6,7,9,10,11,11,12,12,11,10,10,8,7,7,7,8,10,11,4,5,6,8,10,13,16,17,18,19,18,14,9,6,4,4,5,5,5,6,7,9,11,12,12,12,11,11,11,10,7,6,6,6,8,10,11,5,7,8,8,10,12,15,16,16,15,13,10,7,4,3,4,7,9,8,8,7,9,12,13,12,12,11,11,12,10,7,6,6,7,8,9,12,5,7,8,8,8,10,13,13,13,11,9,7,5,3,2,4,8,10,10,9,8,8,10,12,11,11,11,11,11,11,8,6,7,7,8,10,14],
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
