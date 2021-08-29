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
        texture=ImageTexture(url=['../../images/5/singapore5-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.25592182508997,103.7334663412902,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=36,xSpacing=4.103724E-4,zDimension=23,zSpacing=3.96896E-4,height=[0,0,0,0,0,1,3,5,8,12,17,20,23,25,24,20,15,10,7,4,4,3,0,0,2,4,6,9,12,13,7,1,2,4,11,15,0,0,0,0,0,1,3,5,7,12,17,21,24,25,24,19,12,8,6,6,6,6,4,4,7,9,11,14,16,17,10,3,5,6,10,13,0,0,0,0,0,2,3,6,9,15,20,23,24,23,19,14,8,4,3,3,6,6,4,3,4,7,10,14,19,21,14,7,8,9,10,10,0,0,0,0,1,2,3,7,12,17,22,24,24,20,14,8,3,0,0,1,5,7,3,1,1,2,9,15,21,25,18,11,12,12,8,5,0,0,0,0,1,3,5,10,16,21,23,22,19,15,8,3,1,0,0,0,4,5,4,3,2,3,9,15,21,23,16,10,11,12,10,9,0,0,0,0,1,4,9,15,21,23,24,20,14,8,2,0,0,0,0,1,3,5,6,6,5,5,10,14,18,20,13,8,10,11,12,14,0,0,0,2,4,9,14,19,22,22,19,15,8,3,0,0,0,0,0,2,4,6,7,7,5,6,8,12,17,20,14,10,10,10,12,15,0,0,0,3,8,14,21,23,23,19,14,8,2,0,0,-1,0,0,1,3,5,7,7,7,6,6,6,7,15,19,17,14,11,9,12,15,0,1,3,8,13,19,22,22,20,14,8,3,0,-1,-1,0,0,1,3,5,7,8,7,6,6,6,7,8,12,14,12,9,8,7,11,15,0,3,8,14,20,23,23,19,14,8,2,0,-1,-1,0,0,0,2,5,7,7,7,6,6,5,5,8,9,10,8,5,2,4,6,10,15,3,8,13,19,22,22,20,14,8,3,0,-1,-1,0,0,0,2,4,6,7,7,6,6,6,5,6,7,8,6,5,2,0,4,7,11,15,8,14,20,23,23,19,14,8,2,0,-1,-1,-1,0,0,2,5,6,7,7,6,6,5,5,6,6,6,5,3,1,1,2,5,9,12,15,13,18,23,22,20,14,8,3,0,-1,-1,0,0,0,2,4,7,7,7,6,6,5,5,5,6,5,4,3,1,1,2,3,5,8,9,10,20,23,24,19,14,8,2,0,-1,-1,-1,0,0,2,5,6,7,7,6,6,5,5,5,5,4,4,3,2,1,2,3,4,5,5,4,3,18,19,18,14,9,4,0,-1,-1,0,0,0,2,4,7,7,7,6,6,5,5,5,4,4,3,2,1,1,2,2,4,4,4,4,2,2,10,11,10,8,4,1,-1,-1,0,0,0,2,5,6,7,7,6,6,5,5,5,4,3,2,2,2,1,1,2,3,4,4,3,3,4,5,6,6,6,5,3,1,0,0,0,1,2,4,6,7,7,6,6,5,5,5,4,3,2,2,1,1,2,2,3,3,4,4,3,3,6,8,6,6,5,5,4,4,3,3,3,3,4,5,6,6,6,6,5,5,5,4,3,2,1,1,1,1,2,3,3,4,3,3,4,5,8,10,6,6,6,5,5,5,5,5,5,5,5,5,6,6,6,5,5,5,4,3,2,2,1,1,2,2,3,3,4,4,3,4,6,8,10,11,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,5,4,3,2,2,2,1,1,2,3,3,4,4,4,4,5,8,10,10,11,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,5,4,3,2,1,1,2,2,3,3,4,4,4,5,6,8,10,11,11,10,7,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,5,4,3,2,1,1,2,3,3,4,4,4,5,6,8,10,11,11,10,10,7,7,7,7,6,6,6,6,6,6,6,6,6,6,6,5,5,5,6,7,8,8,5,3,4,4,4,5,6,8,10,12,11,10,9,9],
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
